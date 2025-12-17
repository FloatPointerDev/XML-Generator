#include <iostream>
#include <fstream>
#include <string>

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
} contactStruct;

void ReadFile() {
    int subnav;
    std::string findValue;

    std::ifstream openfile("./contacts.csv");
    if (openfile.fail()) {
        std::cout << "the file cannot be read\n";
    }
    else {
        // Check if file is open
        if (openfile.is_open())
        {
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
                std::cout << contactStruct.idLength << ',' << contactStruct.contactID << ',' << contactStruct.firstNameLength << ',' << contactStruct.firstName << ',' << contactStruct.lastNameLength << ',' << contactStruct.lastName << ',' << contactStruct.emailLength << ',' << contactStruct.email << ',' << contactStruct.countryNameLength << ',' << contactStruct.countryName << std::endl  << "";
            }
        }
    }
    openfile.close();

    std::cout << "Do you wish to filter by:\n1 Contact ID\n2 First Name\n3 Last Name\n";
    std::cin >> subnav;
    do {
        if (subnav == 1) {
            std::cout << "what contact ID are you looking for?";

            std::ifstream openfile("./contacts.csv");
            if (openfile.fail()) {
                std::cout << "the file cannot be read\n";
            }
            else {
                // Check if file is open
                if (openfile.is_open())
                {
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
                        if (findValue == contactStruct.contactID) {
                            std::cout << contactStruct.idLength << ',' << contactStruct.contactID << ',' << contactStruct.firstNameLength << ',' << contactStruct.firstName << ',' << contactStruct.lastNameLength << ',' << contactStruct.lastName << ',' << contactStruct.emailLength << ',' << contactStruct.email << ',' << contactStruct.countryNameLength << ',' << contactStruct.countryName << std::endl << "";
                            continue;
                        }
                    }
                }
            }
        }
        else if (subnav == 2) {
            std::cout << "what contact ID are you looking for?";

            std::ifstream openfile("./contacts.csv");
            if (openfile.fail()) {
                std::cout << "the file cannot be read\n";
            }
            else {
                // Check if file is open
                if (openfile.is_open())
                {
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
                        if (findValue == contactStruct.firstName) {
                            std::cout << contactStruct.idLength << ',' << contactStruct.contactID << ',' << contactStruct.firstNameLength << ',' << contactStruct.firstName << ',' << contactStruct.lastNameLength << ',' << contactStruct.lastName << ',' << contactStruct.emailLength << ',' << contactStruct.email << ',' << contactStruct.countryNameLength << ',' << contactStruct.countryName << std::endl << "";
                            continue;
                        }
                    }
                }
            }
        }
        else if (subnav == 3) {
            std::cout << "what Last Name are you looking for?";

            std::ifstream openfile("./contacts.csv");
            if (openfile.fail()) {
                std::cout << "the file cannot be read\n";
            }
            else {
                // Check if file is open
                if (openfile.is_open())
                {
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
                        if (findValue == contactStruct.lastName) {
                            std::cout << contactStruct.idLength << ',' << contactStruct.contactID << ',' << contactStruct.firstNameLength << ',' << contactStruct.firstName << ',' << contactStruct.lastNameLength << ',' << contactStruct.lastName << ',' << contactStruct.emailLength << ',' << contactStruct.email << ',' << contactStruct.countryNameLength << ',' << contactStruct.countryName << std::endl << "";
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

void WriteFile() {
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

                MyFile << " <contact id=" << contactStruct.contactID << ">\n";
                MyFile << "     <firstname>" << contactStruct.firstName << "</firstname>\n";
                MyFile << "     <lastname>" << contactStruct.lastName << "</lastname>\n";
                MyFile << "     <email>"<< contactStruct.email << "</email>\n";
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

int main()
{
    int nav;
    do {
        nav = 0;
        std::cout << "Press 1 to display the contents of the file\nPress 2 to write the file as an XML file\nPress 3 to escape the matrix\n";
        std::cin >> nav;

        if (nav == 1) {
            ReadFile();
        }
        else if (nav == 2) {
            WriteFile();
        }
        else if (nav == 3) {
            // Ends the program
            std::cout << "Ending program...";
            return 0;
        }
        else {
            // Loops until a user picks a valid number
            std::cout << "Number must be between 1 and 3\n";
            std::cin >> nav;
        }
    } while (nav >= 0 && nav <= 3);
}