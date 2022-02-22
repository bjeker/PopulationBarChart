// Ryan Bieker, CS 3060 001, Chapter 5 Programming Challenges, due 2/22/2022, 
//Displays a bar chart of the populaiton growth for the town of Prairieville over 100 years in 20 year intervals since 1900

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //population and year values
    int population;
    int year = 1900;

    //people file opened
    ifstream people;
    people.open("People.txt");

    cout << "PRAIRIEVILLE POPULATION GROWTH" << endl << "(each * represents 1000 people)" << endl << endl;

    for (int i = 0; i < 4; i++)
    {
        people >> population;
        if (population < 0)
        {
            cout << "BAD DATA";
            break;
        }
        if (population >= 0 && population <= 1000)
        {
            cout << year;
            cout << "*" << endl;
        }
        if (population > 1000 && population <= 2000)
        {
            cout << year;
            cout << "**" << endl;
        }
        if (population > 2000 && population <= 3000)
        {
            cout << year;
            cout << "***" << endl;
        }
        if (population > 3000 && population <= 4000)
        {
            cout << year;
            cout << "****" << endl;
        }
        if (population > 4000 && population <= 5000)
        {
            cout << year;
            cout << "*****" << endl;
        }
        year += 20;
    }
}