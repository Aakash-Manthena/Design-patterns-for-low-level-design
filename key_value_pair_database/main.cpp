#include<iostream>
#include "Database/key_value_pair_database.h"

using namespace std;

int main() {
    try {
        KeyValuePairDatabase* db = new KeyValuePairDatabase();

        db->printDB();
        db->begin();
        db->addKeyValuePair("aakash", "manthena");
        db->addKeyValuePair("john", "wick");
        db->addKeyValuePair("hakuna", "matata");
        cout << "value of hakuna = " << db->get("hakuna") << endl;
        db->removeKeyValuePair("hakuna");

        cout << " before commiting " << endl;
        db->printDB();
        db->commit();
        cout << " after commiting " << endl;
        db->printDB();
    }
    catch (...) {
        cout << " caught an unknown exception " << endl;
    }

    return 0;
}