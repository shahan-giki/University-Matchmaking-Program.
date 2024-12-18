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

