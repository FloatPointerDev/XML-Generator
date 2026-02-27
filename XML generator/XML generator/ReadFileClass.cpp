#include <iostream>
#include <fstream>
#include <string>
#include "ReadFileClass.h"
#include "contactStructFile.h"

void ReadFileClass::ReadFile() {
    //declare variables for submenu navigation and finding user input
    bool isFound = false;

    contactStructure contactStruct;

    //open contacts.csv
    std::ifstream openfile("./contacts.csv");
    if (openfile.fail()) {
        std::cout << "the file cannot be read\n";
    }
    else {
        // Check if file is open
        if (openfile.is_open())
        {

            //read data from csv into contactStruct struct
            while (std::getline(openfile, contactStruct.idLength, ','))
            {
                std::getline(openfile, contactStruct.contactID, ',');
                std::getline(openfile, contactStruct.firstNameLength, ',');
                std::getline(openfile, contactStruct.firstName, ',');
                std::getline(openfile, contactStruct.lastNameLength, ',');
                std::getline(openfile, contactStruct.lastName, ',');
                std::getline(openfile, contactStruct.emailLength, ',');
                std::getline(openfile, contactStruct.email, ',');
                std::getline(openfile, contactStruct.countryNameLength, ',');
                std::getline(openfile, contactStruct.countryName);
                std::cout << contactStruct.idLength << ',' << contactStruct.contactID << ',' << contactStruct.firstNameLength << ',' << contactStruct.firstName << ',' << contactStruct.lastNameLength << ',' << contactStruct.lastName << ',' << contactStruct.emailLength << ',' << contactStruct.email << ',' << contactStruct.countryNameLength << ',' << contactStruct.countryName << std::endl << "";
            }
        }
    }
    //close file
    openfile.close();

    //ask user what they want to filter for
    std::cout << "Do you wish to filter by:\n1 Contact ID\n2 First Name\n3 Last Name\n(Don't forget the quotation marks before the search data)\n";
    int subnav;
    std::cin >> subnav;
    std::string findValue;

    do {
        if (subnav == 1) {
            std::cout << "what contact ID are you looking for?\n";
            std::cin >> findValue;

            std::ifstream openfile("./contacts.csv");
            if (openfile.fail()) {
                std::cout << "the file cannot be read\n";
            }
            else {
                // Check if file is open
                if (openfile.is_open())
                {
                    //read data from CSV into variables
                    while (std::getline(openfile, contactStruct.idLength, ','))
                    {
                        std::getline(openfile, contactStruct.contactID, ',');
                        std::getline(openfile, contactStruct.firstNameLength, ',');
                        std::getline(openfile, contactStruct.firstName, ',');
                        std::getline(openfile, contactStruct.lastNameLength, ',');
                        std::getline(openfile, contactStruct.lastName, ',');
                        std::getline(openfile, contactStruct.emailLength, ',');
                        std::getline(openfile, contactStruct.email, ',');
                        std::getline(openfile, contactStruct.countryNameLength, ',');
                        std::getline(openfile, contactStruct.countryName);

                        //look for user input
                        if (findValue == contactStruct.contactID) {
                            std::cout << "contact ID: " << contactStruct.contactID << ", First Name: " << contactStruct.firstName << ", Last Name: " << contactStruct.lastName << ", Email: " << contactStruct.email << ", Country: " << contactStruct.countryName << std::endl << "";
                            isFound = true;
                            continue;
                        }
                        //if it cant be found, return to user
                        if (isFound = false) {
                            std::cout << "Error: contact ID not found, try searching for another one\n";
                            continue;
                        }
                    }
                }
            }
        }
        //look for first name from user input
        else if (subnav == 2) {
            std::cout << "what first name are you looking for?\n";
            std::cin >> findValue;

            std::ifstream openfile("./contacts.csv");
            if (openfile.fail()) {
                std::cout << "the file cannot be read\n";
            }
            else {
                // Check if file is open
                if (openfile.is_open())
                {
                    //read data in to variables from csv
                    while (std::getline(openfile, contactStruct.idLength, ','))
                    {
                        std::getline(openfile, contactStruct.contactID, ',');
                        std::getline(openfile, contactStruct.firstNameLength, ',');
                        std::getline(openfile, contactStruct.firstName, ',');
                        std::getline(openfile, contactStruct.lastNameLength, ',');
                        std::getline(openfile, contactStruct.lastName, ',');
                        std::getline(openfile, contactStruct.emailLength, ',');
                        std::getline(openfile, contactStruct.email, ',');
                        std::getline(openfile, contactStruct.countryNameLength, ',');
                        std::getline(openfile, contactStruct.countryName);

                        //if found print out information
                        if (findValue == contactStruct.firstName) {
                            std::cout << "contact ID: " << contactStruct.contactID << ", First Name: " << contactStruct.firstName << ", Last Name: " << contactStruct.lastName << ", Email: " << contactStruct.email << ", Country: " << contactStruct.countryName << std::endl << "";
                            isFound = true;
                            continue;
                        }

                        //if not found return to user
                        if (isFound = false) {
                            std::cout << "Error: first name not found, try searching for another one\n";
                            continue;
                        }
                    }
                }
            }
        }
        //search for last name
        else if (subnav == 3) {
            std::cout << "what Last Name are you looking for?\n";
            std::cin >> findValue;

            //open csv file
            std::ifstream openfile("./contacts.csv");
            if (openfile.fail()) {
                std::cout << "the file cannot be read\n";
            }
            else {
                // Check if file is open
                if (openfile.is_open())
                {
                    //read in data to variables from csv
                    while (std::getline(openfile, contactStruct.idLength, ','))
                    {
                        std::getline(openfile, contactStruct.contactID, ',');
                        std::getline(openfile, contactStruct.firstNameLength, ',');
                        std::getline(openfile, contactStruct.firstName, ',');
                        std::getline(openfile, contactStruct.lastNameLength, ',');
                        std::getline(openfile, contactStruct.lastName, ',');
                        std::getline(openfile, contactStruct.emailLength, ',');
                        std::getline(openfile, contactStruct.email, ',');
                        std::getline(openfile, contactStruct.countryNameLength, ',');
                        std::getline(openfile, contactStruct.countryName);

                        //if found, display information to user
                        if (findValue == contactStruct.lastName) {
                            std::cout << "contact ID: " << contactStruct.contactID << ", First Name: " << contactStruct.firstName << ", Last Name: " << contactStruct.lastName << ", Email: " << contactStruct.email << ", Country: " << contactStruct.countryName << std::endl << "";
                            isFound = true;
                            continue;
                        }

                        //if not found return to user
                        if (isFound = false) {
                            std::cout << "Error: last name not found, try searching for another one\n";
                            continue;
                        }
                    }
                }
            }
        }
        else {
            // Loops until a user picks a valid number
            std::cout << "Number must be between 1 and 3\n";
            std::cin >> subnav;
        }
    } while (subnav <= 0 && subnav >= 3);
}