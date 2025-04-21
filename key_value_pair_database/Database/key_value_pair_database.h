#ifndef KEY_VALUE_PAIR_DATABASE_H
#define KEY_VALUE_PAIR_DATABASE_H

#include<iostream>
#include<map>
#include<stack>
#include<optional>

using namespace std;

class KeyValuePairDatabase {
    private:
        map<string, string> database; // Key-Value pairs
        stack<map<string, string>> history; // Stack to store history of changes

        bool inTransaction() {
            return !history.empty(); // Check if there is a transaction in progress
        }

    public:
        // constructor 
        KeyValuePairDatabase() {
            cout << "created an instance of the db" << endl;
        }

        // Function to add a key-value pair to the database
        void addKeyValuePair(const string& key, const string& value) {
            if (inTransaction()) {
                history.top()[key] = value;
            } else {
                database[key] = value;
            }
        }

        // Function to remove a key-value pair from the database
        void removeKeyValuePair(const string& key) {
            if (inTransaction()) {
                history.top()[key] = "__DELETED__";
            } else {
                database.erase(key);
            }
        }

        // Function to start a transaction
        void begin() {
            history.push({});
        }

        // Function to commit the operations in the transaction
        bool commit() {
            if (history.empty()) {
                return false;
            }
            map<string, string> operations = history.top();
            history.pop();
            for (auto operation : operations) {
                if (operation.second == "__DELETED__") {
                    database.erase(operation.first);
                } else {
                    database[operation.first] = operation.second;
                }
            }
            return true;
        }

        string get(string key) {
            if (inTransaction()) {
                auto operations = history.top();
                if (operations.count(key)) {
                    return operations[key];
                }
            } else if (database.count(key)) {
                return database[key];
            }
            return "nullopt";
        }

        void rollback() {
            if (inTransaction()) {
                history.pop();
            }
        }

        void printDB() {
            for (auto entry : database) {
                cout << " key = " << entry.first << " value = " << entry.second << endl;
            }
        }

};

#endif // KEY_VALUE_PAIR_DATABASE_H
