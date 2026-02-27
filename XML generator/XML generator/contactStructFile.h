#pragma once
#include <string>

// declare struct with all the information in contacts.csv
struct contactStructure {
    std::string idLength;
    std::string contactID;
    std::string firstNameLength;
    std::string firstName;
    std::string lastNameLength;
    std::string lastName;
    std::string emailLength;
    std::string email;
    std::string countryNameLength;
    std::string countryName;
};