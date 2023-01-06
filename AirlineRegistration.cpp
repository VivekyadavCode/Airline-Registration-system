#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
void mainMenu();
class Management
{
public:
    Management()
    {
        mainMenu();
    }
};
class Details
{
public:
    static string name, gender;
    int PhoneNumber;
    int age;
    string address;
    static int CId;
    char arr[100];

    void information()
    {
        cout << "\n Enter the customer Id:" << endl;
        cin >> CId;
        cout << "Enter the name :" << endl;
        cin >> name;
        cout << "Enter the age: " << endl;
        cin >> age;
        cout << "Enter the address:" << endl;
        cin >> address;
        cout << "Enter your Gender:" << endl;
        cin >> gender;
        cout << "Your Details are saved" << endl;
    }
};
int Details::CId;
string Details::name;
string Details::gender;

class registration
{
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights()
    {
        string flightName[] = {"Dubai", "USA", "Canada", "Australia", "UK", "Europe", "Pakistan", "Shrilanka", "UAE"};
        for (int i = 0; i < 9; i++)
        {
            cout << (i + 1) << ".flight to" << flightName[i] << endl;
        }
        cout << "\nWelcome to The Airlines" << endl;
        cout << "Press the number of the country of which you want to book the flight:" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "__________Welcome to Dubai Emirates___________\n"
                 << endl;
            cout << "Your Comfort is our priority , Enjoy the journey!" << endl;
            cout << "Following are the flights\n"
                 << endl;
            cout << "1. IndiGo" << endl;
            cout << "\t08-01-2023 8:00AM 10hrs Rs. 15000" << endl;
            cout << "2. Air India" << endl;
            cout << "\t010-01-2023 10:00AM 11hrs Rs. 20000" << endl;
            cout << "3. SpiceJet" << endl;
            cout << "\t011-01-2023 11:00AM 10hrs Rs. 30000" << endl;

            cout << "\nSelect the flight you want to book:";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 15000;
                cout << "\nYou have successfully booked the flight IndiGo:" << endl;
                cout << "You can back to manu to take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 20000;
                cout << "\nYou have successfully booked the flight Air India:" << endl;
                cout << "You can back to manu to take the ticket" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 30000;
                cout << "\nYou have successfully booked the flight SpiceJet:" << endl;
                cout << "You can back to manu to take the ticket" << endl;
            }
            else
            {
                cout << "Invalid Input , shifting to previous menu" << endl;
                flights();
            }

            cout << "Press any key to go back to main manu" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        case 2:
        {
            cout << "__________Welcome to Canadian Airlines___________\n"
                 << endl;
            cout << "Your Comfort is our priority , Enjoy the journey!" << endl;
            cout << "Following are the flights\n"
                 << endl;
            cout << "1. CAD- 198" << endl;
            cout << "\t09-01-2023 2:00PM 9hrs Rs. 34000" << endl;
            cout << "2. CAD-200" << endl;
            cout << "\t012-01-2023 8:00AM 11hrs Rs. 90000" << endl;
            cout << "3. CAD-250" << endl;
            cout << "\t019-01-2023 9:00AM 10hrs Rs. 80000" << endl;

            cout << "\nSelect the flight you want to book:";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 34000;
                cout << "\nYou have successfully booked the flight CAD- 198:" << endl;
                cout << "You can back to manu to take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 90000;
                cout << "\nYou have successfully booked the flight CAD-200:" << endl;
                cout << "You can back to manu to take the ticket" << endl;
            }
            else if (choice1 == 3)
            {
                charges = 80000;
                cout << "\nYou have successfully booked the flight CAD-250:" << endl;
                cout << "You can back to manu to take the ticket" << endl;
            }
            else
            {
                cout << "Invalid Input , shifting to previous menu" << endl;
                flights();
            }

            cout << "Press any key to go back to main manu" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        case 3:
        {
            cout << "__________Welcome to UK Airways___________\n"
                 << endl;
            cout << "Your Comfort is our priority , Enjoy the journey!" << endl;
            cout << "Following are the flights\n"
                 << endl;
            cout << "1. UK- 190" << endl;
            cout << "\t07-01-2023 2:00PM 9hrs Rs. 35000" << endl;
            cout << "2. UK-300" << endl;
            cout << "\t013-01-2023 8:00AM 15hrs Rs. 40000" << endl;
            cout << "\nSelect the flight you want to book:";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 35000;
                cout << "\nYou have successfully booked the flight UK- 190:" << endl;
                cout << "You can back to manu to take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 40000;
                cout << "\nYou have successfully booked the flight UK-300:" << endl;
                cout << "You can back to manu to take the ticket" << endl;
            }
            else
            {
                cout << "Invalid Input , shifting to previous menu" << endl;
                flights();
            }

            cout << "Press any key to go back to main manu" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        case 4:
        {
            cout << "__________Welcome to US Airways___________\n"
                 << endl;
            cout << "Your Comfort is our priority , Enjoy the journey!" << endl;
            cout << "Following are the flights\n"
                 << endl;
            cout << "1. US- 1000" << endl;
            cout << "\t09-01-2023 2:00PM 10hrs Rs. 50000" << endl;
            cout << "2. US-1300" << endl;
            cout << "\t013-01-2023 8:00AM 10hrs Rs. 70000" << endl;
            cout << "\nSelect the flight you want to book:";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 70000;
                cout << "\nYou have successfully booked the flight US- 1000:" << endl;
                cout << "You can back to manu to take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 40000;
                cout << "\nYou have successfully booked the flight US-1300:" << endl;
                cout << "You can back to manu to take the ticket" << endl;
            }
            else
            {
                cout << "Invalid Input , shifting to previous menu" << endl;
                flights();
            }

            cout << "Press any key to go back to main manu" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        case 5:
        {
            cout << "__________Welcome to Australia Airways___________\n"
                 << endl;
            cout << "Your Comfort is our priority , Enjoy the journey!" << endl;
            cout << "Following are the flights\n"
                 << endl;
            cout << "1. AUS- 1000" << endl;
            cout << "\t09-01-2023 2:00PM 10hrs Rs. 190000" << endl;
            cout << "2. AUS-1300" << endl;
            cout << "\t013-01-2023 8:00AM 10hrs Rs. 60000" << endl;
            cout << "\nSelect the flight you want to book:";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 190000;
                cout << "\nYou have successfully booked the flight AUS- 1000:" << endl;
                cout << "You can back to manu to take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 60000;
                cout << "\nYou have successfully booked the flight AUS-1300:" << endl;
                cout << "You can back to manu to take the ticket" << endl;
            }
            else
            {
                cout << "Invalid Input , shifting to previous menu" << endl;
                flights();
            }

            cout << "Press any key to go back to main manu" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        case 6:
        {
            cout << "__________Welcome to European Airways___________\n"
                 << endl;
            cout << "Your Comfort is our priority , Enjoy the journey!" << endl;
            cout << "Following are the flights\n"
                 << endl;
            cout << "1. EU- 9000" << endl;
            cout << "\t09-01-2023 2:00PM 10hrs Rs. 100000" << endl;
            cout << "2. EU-1400" << endl;
            cout << "\t013-01-2023 8:00AM 10hrs Rs. 690000" << endl;
            cout << "\nSelect the flight you want to book:";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 100000;
                cout << "\nYou have successfully booked the flight EU- 9000:" << endl;
                cout << "You can back to manu to take the ticket" << endl;
            }
            else if (choice1 == 2)
            {
                charges = 690000;
                cout << "\nYou have successfully booked the flight EU-1400:" << endl;
                cout << "You can back to manu to take the ticket" << endl;
            }
            else
            {
                cout << "Invalid Input , shifting to previous menu" << endl;
                flights();
            }

            cout << "Press any key to go back to main manu" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        case 7:
        {
            cout << "__________Welcome to Pakistan Airways___________\n"
                 << endl;
            cout << "Your Comfort is our priority , Enjoy the journey!" << endl;
            cout << "Following are the flights\n"
                 << endl;
            cout << "1. PAK-0001" << endl;
            cout << "\t09-01-2023 2:00PM 10hrs Rs. 80000" << endl;

            cout << "\nSelect the flight you want to book:";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 80000;
                cout << "\nYou have successfully booked the flight PAK- 0001:" << endl;
                cout << "You can back to manu to take the ticket" << endl;
            }
            else
            {
                cout << "Invalid Input , shifting to previous menu" << endl;
                flights();
            }

            cout << "Press any key to go back to main manu" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        case 8:
        {
            cout << "__________Welcome to Shrilanka Airways___________\n"
                 << endl;
            cout << "Your Comfort is our priority , Enjoy the journey!" << endl;
            cout << "Following are the flights\n"
                 << endl;
            cout << "1. SHRI -0002" << endl;
            cout << "\t09-01-2023 9:00PM 10hrs Rs. 19000" << endl;

            cout << "\nSelect the flight you want to book:";
            cin >> choice1;

            if (choice1 == 1)
            {
                charges = 19000;
                cout << "\nYou have successfully booked the flight SHRI -0002:" << endl;
                cout << "You can back to manu to take the ticket" << endl;
            }
            else
            {
                cout << "Invalid Input , shifting to previous menu" << endl;
                flights();
            }

            cout << "Press any key to go back to main manu" << endl;
            cin >> back;

            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        default:
        {
            cout << "Invalid input , shifting to the main menu! " << endl;
            mainMenu();
            break;
        }
        }
    }
};
float registration::charges;
int registration::choice;

class ticket : public registration, Details
{
public:
    void Bill()
    {
        string destination = " ";
        ofstream outf("record.txt");
        {
            outf << "__________XYZ Airlines______" << endl;
            outf << "___________Ticket____________" << endl;
            outf << "__________________________________" << endl;

            outf << "Customer ID:" << Details::CId << endl;
            outf << "Customer Name:" << Details::name << endl;
            outf << "Customer Gender :" << Details::gender << endl;
            outf << "\tDescription" << endl
                 << endl;

            if (registration::choice == 1)
            {
                destination = "Dubai";
            }
            else if (registration::choice == 2)
            {
                destination = "Canada";
            }
            else if(registration::choice == 3)
            {
                destination = "UK";
            }
            else if(registration::choice == 4)
            {
                destination = "US";
            }
            else if (registration::choice == 5)
            {
                destination = "Australia";
            }
            else if (registration::choice == 6)
            {
                destination = "Europe";
            }
            else if (registration::choice == 7)
            {
                destination = "Pakistan";
            }

            outf << "Destination\t\t" << destination << endl;
            outf << "flight cost: \t\t" << registration::charges << endl;
        }
        outf.close();
    }
    void dispBill()
    {
        ifstream ifs("record.txt");
        {
            if (ifs)
            {
                cout << "files error!" << endl;
            }
            while (!ifs.eof())
            {
                ifs.getline(arr, 100);
                cout << arr << endl;
            }
        }
        ifs.close();
    }
};
void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout << "\t       XYZ Airlines\n"
         << endl;
    cout << "\t_______________mainMenu_______" << endl;
    cout << "\t_____________________________________" << endl;
    cout << "\t\t\t\t\t\t\t" << endl;

    cout << "\t\t press 1 to add the customer Details \t!" << endl;
    cout << "\t\t press 2 for flight Registration \t!" << endl;
    cout << "\t\t press 3 for ticket and charges \t!" << endl;
    cout << "\t\t press 4 to Exit \t!" << endl;
    cout << "\t\t\t\t\t\t\t" << endl;
    cout << "\t_____________________________________" << endl;

    cout << "Enter the choice :";
    cin >> lchoice;

    Details d;
    registration r;
    ticket t;

    switch (lchoice)
    {
    case 1:
    {
        cout << "_________customer_______\n"
             << endl;
        d.information();
        cout << "press any key to go to main menu";
        cin >> back;

        if (back == 1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();
        }
        break;
    }
    case 2:
    {
        cout << "______Book a flight using this system_________\n"<< endl;
        r.flights();
        break;
    }
    case 3:
    {

        cout << "_____Get Your ticket____\n"
             << endl;
        t.Bill();

        cout << "Your Ticket is printed , you can collect it\n"
             << endl;
        cout << "press 1 to display your ticket";
        cin >> back;
        if (back == 1)
        {
            t.dispBill();
            cout << "Press any key to go back main menu! ";
            cin >> back;
            if (back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        else
        {
            mainMenu();
        }
        break;
    }
    case 4:
    {
        cout << "\n\n\t_______Thank You_______" << endl;
        break;
    }
    default:
    {
        cout << "Invalid input , please try again!\n"
             << endl;
        mainMenu();
        break;
    }
    }
}

int main()
{
    Management AirM;
    return 0;
}