#include <iostream>
#include <cctype>
#include <string>
#include <fstream>
#include <string.h>
using namespace std;
void spassword(string password);

// void login();
// void signup();
// void forgot();

class detail
{
public:
    string userId;
    string password;
    string email_Id;
    void getuserId()
    {
        cout << "Enter the userId:";
        cin >> userId;
    }
    void getpassword_signup()
    {
        cout << "Enter the password:";
        cin >> password;
        spassword(password);
    }

     void getpassword_login()
    {
        cout << "Enter the password:";
        cin >> password;
        
    }
    void getemailId()
    {
        cout << "Enter your Mail Id:";
        cin >> email_Id;
    }

    void login();
    void signup();
    void forgot();
};



int main()
{
    int option;
    detail d;

    cout << "\n\n<-------------------Welcome To Our Showroom------------------->\n\n";
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
        d.login();
        break;
    case 2:
        d.signup();
        break;
    case 3:
        d.forgot();
        break;
    case 4:
        cout << "\nThankyou for visiting our showroom!\n\n";
        break;
    default: {
        cout << "\nWrong input! \n\n";
        cout << "Please select from the above options\n\n";
        main();
    }
    }
    return 0;
}

    


void spassword(string password)
{

    
    // string password;
    // cout << "Enter your pssword:";
    // cin >> password;
   
 // m:
    int x = 0;
    int y = 0;
    int z = 0;

    if (password.length() < 8)
    {
        cout << "Your password is not of sufficient length!\n";
        cout << "Re-enter your password";
        cin >> password;
        spassword(password);
    }
    else
    {
        cout << "\n";
    }

    bool uppercase = false;
    bool lowercase = false;
    bool digit = false;

    int i = 0;
    int j = password.length();
    for (i = 0; i < j; i++)
    {
        if (isupper(password[i]))
        {
            x = 1;
        }
        if (islower(password[i]))
        {
            y = 1;
        }
        if (isdigit(password[i]))
        {
            z = 1;
        }
    }

    if (x == 1)
    {
        uppercase = true;
    }
    else
    {
        cout << "Password must contain atleast one Capital letter \n";
    }

    if (y == 1)
    {
        lowercase = true;
    }
    else
    {
        cout << "Password must contain atleast one Small letter \n";
    }

    if (z == 1)
    {
        digit = true;
    }
    else
    {
        cout << "Password must contain atleast one digit \n";
    }

    if (uppercase == true && lowercase == true && digit == true)
    {
        cout << "Your password is strong!\n";
    }
    else
    {
        cout << "Your password is weak!\n";
        //goto m;
    }
}



void detail ::login()
{
    int count = 0;
    string Id, pass;

    detail details;
    details.getuserId();
    details.getpassword_login();
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
        cout << "\nLogin successfully! \n\n";
    }
    else
    {
        cout << "\nLogin Error! \n";
        cout << "Check your userId or password. Either you are new.\n";
        cout << "Or firstly you have to Signup\n\n";
        main();
    }
}

void detail ::signup()
{
    detail details;
    string name;
    string checkId;
    string outputId;

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
    ifstream output("records.txt");
    details.getemailId();
    while (output >> outputId)
    {
        if (outputId == details.email_Id)
        {
            cout << " \nEmail Id already exists!please try different\n\n";
            cout << "Re-enter your Mail Id:";
            cin >> details.email_Id;
        }
    }
    output.close();
    details.getpassword_signup();
    data << details.userId << "\n";
    data << details.password << "\n";
    data << details.email_Id << "\n";
    data << details.password << "\n";
    data << name << "\n";

    data.close();
    cout << endl;

    //system("cls");
    cout << "\nRegistered Successfully! \n\n";
    main();
}

void detail ::forgot()
{
    int flag = 0;
    int temp = 0;
    string userId1;
    string password1;
    string password2;
    string emailId1;

    detail details;

    int choice;
    cout << "Enter '1' to search your password by the userId-> \n";
    cout << "Enter '2' to search your password by the EmailId-> \n";
    cout << "Enter '3' to go back->\n\n";
    cout << "Enter your choice:";
    cin >> choice;
    cout << endl;
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
        system("cls");
        if (flag == 1)
        {
            cout << "\n---------------------------------\n";
            cout << "Your account has been found! \n";
            cout << "Your password is:" << password1 << endl;
            cout << "---------------------------------\n";
            cout << endl;
            main();
        }
        else
        {
            cout << "\nYour account is not found ! \n";
            cout << "Either you not registered or wrong userId input\n\n";
        }
        break;
    }
    case 2:
    {
        details.getemailId();

        ifstream gmailId("records.txt");
        while (gmailId >> emailId1 >> password2)
        // while( getline(gmailId,password2) && getline(gmailId,emailId1))
        {
            if (details.email_Id == emailId1)
            {
                temp = 1;
                break;
            }
        }
        gmailId.close();
        system("cls");
        if (temp == 1)
        {
            cout << "\n---------------------------------\n";
            cout << "Your account has been found! \n";
            cout << "Your password is:" << password2 << endl;
            cout << "---------------------------------\n";
            cout << endl;
            main();
        }
        else
        {
            cout << "\nYour account is not found ! \n";
            cout << "Either you not registered or wrong Email Id input\n\n";
        }
        break;
    }
    case 3:
    {
        system("cls");
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
