#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class detail
{
public:
    string userId;
    string password;
    void getuserId()
    {
        cout << "Enter the userId:";
        cin >> userId;
    }
    void getpassword()
    {
        cout << "Enter the password:";
        cin >> password;
    }
};

void login();
void signup();
void forgot();

int main()
{
    int option;

    cout << "<-------------------Welcome To Our Showroom------------------->\n\n";
    cout << "1.Login\n";
    cout << "2.signup\n";
    cout << "3.Forgot Password\n";
    cout << "4.Exit\n\n";

    cout << "Please enter your choice:";
    cin >> option;
    cout << endl;

    switch (option)
    {
    case 1:
        login();
        break;
    case 2:
        signup();
        break;
    case 3:
        forgot();
        break;
    case 4:{
        cout << "\nThankyou for visiting our showroom!\n\n";
        break;
        exit(0);
    }
    default:
        cout << "\nWrong input! \n\n";
        cout << "Please select from the above options\n\n";
        main();
    }
    return 0;
}

void login()
{
    int count = 0;
    string Id, pass;

    detail details;
    details.getuserId();
    details.getpassword();
    ifstream input("records.txt");
    while (getline(input, Id) && getline(input, pass))
    {
        if (details.userId == Id && details.password == pass)
        {
            count = 1;
            break;
        }
    }
    input.close();
    if (count == 1)
    {
        cout << "\n Login successfull! \n\n";
    }
    else
    {
        cout << "\nLogin Error! \n";
        cout << "Check your userId or password. Either you are new.\n\n"
             << endl;
        main();
    }
}

void signup()
{
    detail details;
    string name;
    string email_Id;
    string checkId;

    ifstream checked("records.txt");
    details.getuserId();
    while (checked >> checkId)
    {
        if (checkId == details.userId)
        {
            cout << "\nusername Already Exists!Please try different One\n\n";
            signup();
        }
    }
    checked.close();

    ofstream data("records.txt", ios::app);
    fflush(stdin);
    cout << "Enter your's name:";
    getline(cin, name);
    cout << "Enter your mail id:";
    cin >> email_Id;
    details.getpassword();
    data << details.userId << "\n";
    data << details.password << "\n";
    data << name << "\n";
    data << email_Id << "\n";

    data.close();
    cout << endl;

    system("cls");
    cout << "\nRegistered Successfully! \n\n";
    main();
}

void forgot()
{
    int flag = 0;
    string userId1;
    string password1;
    detail details;
    int choice;
    cout << "Enter '1' to search your password by the userId \n";
    cout << "Enter '2' to go back \n";
    cout << "Enter your choice:";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        details.getuserId();

        ifstream check("records.txt");
        while (check >> userId1 >> password1)
        {
            if (details.userId == userId1)
            {
                flag = 1;
                break;
            }
        }
        check.close();
        if (flag == 1)
        {
            cout << "Your account is found! \n";
            cout << "Your password is:" << password1 << endl;
            main();
        }
        else
        {
            cout << "Your account is not found ! \n";
            cout << "Either you not registered or wrong userId input \n";
        }
        break;
    }
    case 2:
    {
        main();
        break;
    }
    default:
    {
        cout << "Wrong choice!";
        forgot();
        break;
    }
    }
}