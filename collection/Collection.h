//
// Created by isilu on 13.06.2022.
//

#ifndef BENUTZERSAMMLUNG_COLLECTION_H
#define BENUTZERSAMMLUNG_COLLECTION_H
#include <iostream>
#include <map>
#include <string>

class Collection {
public:
    std::map<int , std::string> map;
    void addUser(int, std::string);
    void printUsers();
    std::string getUser(int);

};


#endif //BENUTZERSAMMLUNG_COLLECTION_H
