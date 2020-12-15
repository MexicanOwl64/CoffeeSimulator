#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    // Integers needed
    int numberOfCups;
    bool end = true;
    bool isBoiling = true;
    bool correctBeans = true;
    int numberOfBeans = 0;
    int boilingWater = 0; 
    int ending;
    

    // loops until user wants to exit the program
    while (end == true)
    {
        numberOfBeans = 0;
        boilingWater = 0;
        //ask how many cups of coffee the person wants
        system("Color 0A");
        cout << "\nHow many cups of Coffee do you want to make (up to 4): ";
        cin >> numberOfCups;

        while (correctBeans == true)
        {
            

            if (numberOfCups == 1)
            {
                cout << "\nThis adds 50 beans" << " ";
                numberOfBeans = 50;
                correctBeans = false;
            }

            else if (numberOfCups == 2)
            {
                cout << "\nThis adds 100 beans" << " ";
                numberOfBeans = 100;
                correctBeans = false;
            }

            else if (numberOfCups == 3)
            {
                cout << "\nThis adds 150 beans" << " ";
                numberOfBeans = 150;
                correctBeans = false;
            }

            else if (numberOfCups == 4)
            {
                cout << "\nThis adds 200 beans" << " ";
                numberOfBeans = 200;
                correctBeans = false;
            }
            else
            {
                cout << "\nWe can only make up to 4 cups of coffee: ";
               
                correctBeans = true;
            }

            for (int i = 1; i <= numberOfCups; ++i)
            {
                //cout << i << " ";

            }
        }
       
        cout << "\nLoading " << numberOfBeans << " Beans";
        cout << "\nGrinding Beans";
        cout << "\nFilling " << numberOfCups << " cup(s) with water";
        cout << "\nBoiling the water";
       
        while (isBoiling == true)
        if (boilingWater == 180)
        {
            cout << "\nWater is at " << boilingWater;
            cout << "\nThe water has finished boiling";
            isBoiling = false;
        }
        else
        {
            cout << "\nWater is at " << boilingWater;
            boilingWater = boilingWater + 15;
            isBoiling = true;
        }
        system("Color 06");
        cout << "\nMaking " << numberOfCups << " cups(s) for you";
        cout << "\nWe have finished making your cup(s) of coffee";

    
        //ask the user if they want to keep using the program or not
        cout << "\nDo you want to exit out of the program?";

        cout << "\nPress 1 to exit";
        cout << "\nPress 2 to continue using the coffee machine: ";
        
        cin >> ending;
        if (ending == 1)
        {
            // exits out of the program
            end = false;
        }
        else
        {
            correctBeans = true;
            isBoiling = true;
        }

    }
    return 0;
}