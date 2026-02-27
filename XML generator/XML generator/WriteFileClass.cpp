#include "WriteFileClass.h"
#include "contactStructFile.h"
#include <string>
#include <iostream>
#include <fstream>

void WriteFileClass::WriteFile() {
    // Create and open contacts.xml
    std::ofstream MyFile("./contacts.xml");

    // Fills in the file
    MyFile << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n";
    MyFile << "<allcontacts xmlns:xsi=\"https://www.w3.org/2001/XMLSchema-instance\">\n     xsi:noNamespaceSchemaLocation=\"contacts.xsd\">\n";
    std::ifstream openfile("./contacts.csv");
    if (openfile.fail()) {
        std::cout << "the file cannot be read\n";
    }
    else {
        // Check if file is open
        if (openfile.is_open())
        {
            contactStructure contactStruct;

            while (std::getline(openfile, contactStruct.idLength, ','))
            {
                //read data from csv
                std::getline(openfile, contactStruct.contactID, ',');
                std::getline(openfile, contactStruct.firstNameLength, ',');
                std::getline(openfile, contactStruct.firstName, ',');
                std::getline(openfile, contactStruct.lastNameLength, ',');
                std::getline(openfile, contactStruct.lastName, ',');
                std::getline(openfile, contactStruct.emailLength, ',');
                std::getline(openfile, contactStruct.email, ',');
                std::getline(openfile, contactStruct.countryNameLength, ',');
                std::getline(openfile, contactStruct.countryName);

                //print data in XML format
                MyFile << " <contact id=" << contactStruct.contactID << ">\n";
                MyFile << "     <firstname>" << contactStruct.firstName << "</firstname>\n";
                MyFile << "     <lastname>" << contactStruct.lastName << "</lastname>\n";
                MyFile << "     <email>" << contactStruct.email << "</email>\n";
                MyFile << "     <country>" << contactStruct.countryName << "</country>\n";
                MyFile << " </contact>\n";
            }
        }
    }
    MyFile << "</allcontacts>";

    // Close the file
    MyFile.close();

    std::cout << "File has been converted into an XML file...\n";
}