#include <iostream>
#include "collection/Collection.h"

int main() {
    using namespace std;
    Collection collection;
    collection.addUser(5, "Mr. A");
    collection.addUser(7, "Tiffany");
    collection.printUsers();
    cout << collection.getUser(3) << endl;
    collection.addUser(7, "Smith");
    collection.printUsers();
    collection.addUser(3, "Smith");
    cout << collection.getUser(3) << endl;

}
