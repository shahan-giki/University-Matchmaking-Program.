#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Constants
const int MAX_UNIVERSITIES = 10;  // Maximum number of universities to manage

// Arrays to store university data (names are pretty self explanatory)
string universityNames[MAX_UNIVERSITIES]; 
string locations[MAX_UNIVERSITIES];
int tuitionFees[MAX_UNIVERSITIES];
string majors[MAX_UNIVERSITIES];
bool admissionStatus[MAX_UNIVERSITIES];
int minimumPercentages[MAX_UNIVERSITIES];


// Function Prototypes
void loadUniversityData();
void showMainMenu();
void displayMenu();
void showUniversityDetails(int index);
void getStudentInput();
void displayMatchingUniversities(string preferredField, int minPercentage, int maxTuition, string preferredLocation); 
void getValidChoice(int& choice);

// Main Function
int main() 
{
    // Load university data from file
    loadUniversityData();

    // Show the main menu
    showMainMenu();

    return 0;
}


// Function to load university data from a file
void loadUniversityData() 
{
    ifstream inputFile("university_data.txt");
    for (int i = 0; i < MAX_UNIVERSITIES; i++) 
	{
        getline(inputFile, universityNames[i]); //getline for strings
        getline(inputFile, locations[i]);
        inputFile >> tuitionFees[i];
        inputFile.ignore();
        getline(inputFile, majors[i]);
        inputFile >> admissionStatus[i];
        inputFile.ignore(); //ignore the newline character
        inputFile >> minimumPercentages[i];
		inputFile.ignore();

	}

}

// Main menu function to allow the user to return to the menu after each operation
void showMainMenu() 
{
    int choice;
    while (true) 
	{
        cout << "\nWelcome to the University Matchmaker Program!\n";
        cout << "1. Input your details to find universities\n";
        cout << "2. Browse universities\n";
        cout << "3. Exit\n";
        cout << "Enter your choice (1, 2 or 3): ";

        getValidChoice(choice);  // Validate choice input

        if (choice == 1) 
		{
            getStudentInput();
        } 
		else if (choice == 2) 
		{
            int universityChoice;
            while (true) 
			{
                displayMenu();
                getValidChoice(universityChoice);  // Validate university choice

                if (universityChoice == 0) break;

                showUniversityDetails(universityChoice - 1);
            }
        } 
		else if (choice == 3) 
		{
            cout << "Exiting program.\n";
            break; // Exit the program
        } 
		else 
		{
            cout << "Invalid choice, please try again.\n";
        }
    }
}
void displayMenu()
{
	cout << "\n ----University Menu -----\n";
	for (int i=0 ; i < MAX_UNIVERSITIES ; i++)
	{
		cout << i+1 << ". " << universityNames[i] << endl;
	}
cout << "Enter the number of the university, you want to ecplore or 0 to exit:";

void showUniversityDetails(int index)
{
	if(index < 0 || index >= MAX_UNIVERSITIES) return;
	cout << "\n-- University Details \n";
	cout << "University: " << universityNames[index]<<endl;
	cout << "Location: " << location[index]<<endl;
	cout << "Tuition Fees (Per Smeemster): PKR" tuitionFees[index]<< endl;
	cout << ";Majors Offered: " << majors[index] << endl;
	cout << "Admission Status: " << (admissionStatus[index] ? "open" : "closed") << endl;
	cout << "Admission Requirements: " << minimumPercentages[index]<<"%" endl;
void getStudentInput()
{
	string preferedField, preferredLocation;
	int minPercentage, maxTuition;
	cout << "\n--- Preferred field of study ---\n";
	cout << "Mechanical Engineering\n"
	     << "Electrical Engineering\n"
	     << "Civil Engineering\n"
	     << "Chemical Engineering\n"
	     << "Material Engineering\n"
	     << "Software Engineering\n"
	     << "Computer Engineering\n"
	     << "Computer Science\n"
	     << "Artificial Intelligence\n"
	     << "Data Science\n"
	     << "Engineering Sciences\n"
	     << "Management Sciences\n";
        cout << "Enter your choice: ";
	cin.ignore();
	getline(cin,preferredField);

	cout << "\n----Preferred Location----\n";
	cout << "Islamabad\n"
		<<"Lahore\n"
		<<"Karachi\n"
		<<"Peshawar\n"
		<<"Topi\n"
		<<"Abbotabad\n";
	cout << "Enter your choice (Name): ";
	cin >> preferredLocation;
	cin.ignore();

	cout << "\nEnter your High School Percentage (Digits only) : ";
	cina >> minPercentage;
	cin.ignore();

	cout << "\nEnter your budget for Tuition Fees : PKR";
	cin >> maxTuition;
	cin.ignore();

