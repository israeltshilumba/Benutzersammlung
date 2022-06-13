//
// Created by isilu on 13.06.2022.
//

#include "Collection.h"

void Collection::printUsers() {
    for (auto it=map.begin(); it!=map.end(); ++it)
        std::cout << it->first << " => " << it->second << '\n';
}

void Collection::addUser(int key, std::string value) {
    auto it = map.begin();
    map.insert (it, std::pair<int,std::string>(key, value));
}

std::string Collection::getUser(int key) {
    auto it = map.find(key);
    if (it == map.end())
        return "Not Found";
    return it->second;
}
