#include <iostream>
#include <fstream> //Allows header files to be used/reads other files
#include <vector>
using namespace std;

string EnterFile;

//User enters their choice in the menu
int choice;
 
int main() {
    cout << "Welcome to cloud\n";
    cout << "Please enter the program file\n";

    cin >> EnterFile;

    //open the inputted file
    ifstream inputFile(EnterFile);

//check to see if the file can be opened
    if (inputFile.is_open())                                
{
    cout << "The file " << EnterFile << " can be read \n";
} else {
    cout << " The File " << EnterFile << " cannot be read \n";
}



do {
    cout<<"Menu \n";

    //options of actions
    cout<< "1. See channel list \n";
    cout<< "2. switch to channel \n";
    cout<< "3. see favourites \n";
    cout << "4. Exit the program \n";

    cin >> choice;

    //call the function that the user chose
    switch (choice)
    {
    case 1:
        /* function*/
        break;

    case 2:
    /*function*/
    break;

    case 3:
    /*function*/
    break;

    case 4:
    return 0;
    }
} while (choice != 4);
}