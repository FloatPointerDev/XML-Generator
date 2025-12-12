#include <iostream>
#include <fstream>
#include <string>

void ReadFile() {
    int subnav;
    int idFinder;

    subnav = 0;
    std::string getcontent;
    std::ifstream openfile("./contacts.csv");
    if (openfile.fail()) {
        std::cout << "the file cannot be read\n";
    }
    else {
        if (openfile.is_open())
        {
            while (!openfile.eof())
            {
                getline(openfile, getcontent);
                std::cout << getcontent << std::endl << "";
            }
        }
    }

    //Gives the user choice for filtering the data
    std::cout << "Which would you like to filter by:\nPress 1 for Contact ID\nPress 2 First Name\nPress 3 Last Name\nPress 4 Country\n";
    if (subnav == 1) {
        std::cout << "which contact id are you looking for?\n";
        std::cin >> idFinder;
    }
    else if (subnav == 2) {

    }
    else if (subnav == 3) {

    }
    else {

    }
}

void WriteFile() {
    // Create and open contacts.xml
    std::ofstream MyFile("./contacts.xml");

    // Fills in the file
    MyFile << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n";
    MyFile << "<allcontacts xmlns:xsi=\"https://www.w3.org/2001/XMLSchema-instance\">\n     xsi:noNamespaceSchemaLocation=\"contacts.xsd\">\n";
    for (int i = 0; i < 1000; i++) {
        MyFile << " <contact id=\"" << i << "\">\n";
        MyFile << "     <firstname>" << "</firstname>\n";
        MyFile << "     <lastname>" << "</lastname>\n";
        MyFile << "     <email>" << "</email>\n";
        MyFile << "     <country>" << "</country>\n";
        MyFile << " </contact>\n";
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
            //Ends the program
            std::cout << "Ending program...";
            return 0;
        }
        else {
            //Loops until a user picks a valid number
            std::cout << "Number must be between 1 and 3\n";
            std::cin >> nav;
        }
    } while (nav >= 0 && nav <= 3);
}