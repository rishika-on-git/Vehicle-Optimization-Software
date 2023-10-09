#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

class Shopping
{
private:
    int pcode;
    float price;
    string pname;
    float disc;
    string name;

public:
    void menu();
    void administrator();
    void buyer();
    void add();
    void edit();
    void rem();
    void list();
    void receipt();
};

void Shopping ::menu()
{
m:
    int choice;
    string email;
    string password;

    cout << "--------------------------------------------------------------------------" << endl;
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "------------------------ MAIN MENU ---------------------------------" << endl;
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "--------------------------------------------------------------------------" << endl;

    cout << " Enter your choice " << endl;
    cout << "1. ADMINISTRATOR" << endl;
    cout << "2. CUSTOMER" << endl;
    cout << "3. EXIT" << endl;

    cin >> choice;
    switch (choice)
    {

    case 1:
        cout << " PLEASE LOGIN WITH YOUR CREDENTIALS " << endl;
        cout << " Enter your email " << endl;
        cin >> email;

        cout << "Enter your password " << endl;
        cin >> password;

        if ((email == "admin123@gmail.com") && (password == "super908"))
        {
            administrator();
        }

        else
        {
            cout << " Invalid username / password ";
            break;
        }

    case 2:
    {

        buyer();
    }

    case 3:
    {
        exit(0);
    }

    default:
    {
        cout << " Please enter a valid  statement " << endl;
    }
    }
    goto m;
}

void Shopping ::administrator()
{
m:
    int choice;
    cout << " .................ADMINISTRATOR MENU.............." << endl;
    cout << " 1) ADD THE PRODUCT " << endl;
    cout << " 2) MODIFY THE PRODUCT " << endl;
    cout << " 3) DELETE THE PRODUCT " << endl;
    cout << " 4) EXIT " << endl;

    cout << " Enter your choice " << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        add();
        break;
    }
    case 2:
    {
        edit();
        break;
    }

    case 3:
    {
        rem();
        break;
    }
    case 4:
    {
        menu();
        break;
    }

    default:
    {
        cout << " Please enter a vaild choice :" << endl;
    }
    }
    goto m;
}

void Shopping ::buyer()
{
m:
    int choice;
    cout << "BUYER MENU " << endl;
    cout << " 1. Buy the product " << endl;

    cout << " 2. Back to main menu " << endl;

    cout << " ENTER YOUR CHOICE " << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        receipt();
        break;
    }
    case 2:
    {
        menu();
        break;
    }

    default:
    {
        cout << " Please enter a vaild choice :" << endl;
    }
    }
    goto m;
}

void Shopping ::add()
{
m:
    fstream data;
    int c;
    int token = 0;
    float p;
    float d;
    string n;

    cout << " Add new product " << endl;
    cout << " Product code of product " << endl;
    cin >> pcode;

    cout << " Name of product " << endl;
    cin >> pname;

    cout << " Price of product " << endl;
    cin >> price;

    cout << " Discount on product " << endl;
    cin >> disc;

    data.open("database.txt", ios::in); // ios::in will open the file in reading mode.
    if (!data)                          // if file DNE
    {
        data.open("database.txt", ios::app | ios::out); // open in writing mode if file dne
        // ios::app -- append mode  and ios::out -- write mode
        data << "  " << pcode << "   " << pname << "   " << price << "  " << disc << endl;
        data.close();
    }

    else // if file exists
    {
        // read from the file
        //data >> c >> n >> p >> d; // initializing index of file
       while (data >> c >> n >> p >> d)
        {
            if (c == pcode)
            {
                token++;
            }
            data >> c >> n >> p >> d;
        }
        data.close();

        if (token == 1)
            goto m;

        else
        {
            data.open("database.txt", ios::app | ios::out);
            data << "  " << pcode << "   " << pname << "   " << price << "  " << disc << endl;
            data.close();
        }
    }

    cout << " record inserted" << endl;
}

void Shopping ::edit()
{
    fstream data, data1;

    int pkey;
    int token = 0;
    int c;
    float p;
    float d;
    string n;

    cout << " MODIFY THE RECORD " << endl;
    cout << " Product code : ";
    cin >> pkey;

    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << " FILE DOES NOT EXIST" << endl;
    }
    else
    {

        data1.open("database1.txt", ios::app | ios::out);
        data >> pcode >> pname >> price >> disc;

        while (!data.eof())
        {
            if (pkey == pcode)
            {
                cout << " Product code of product " << endl;
                cin >> c;

                cout << " Name of product " << endl;
                cin >> n;

                cout << " Price of product " << endl;
                cin >> p;

                cout << " Discount on product " << endl;
                cin >> d;

                data1 << "   " << c << "     " << n << "     " << p << "     " << d << endl;
                cout << " RECORD EDITED " << endl;
                token++;
            }

            else
            {
                data1 << "   " << pcode << "     " << pname << "     " << price << "     " << disc << endl;
            }
            data >> pcode >> pname >> price >> disc;
        }

        data.close();
        data1.close();

        remove("database.txt");
        rename("database1.txt", "database.txt");

        if (token == 0)
        {
            cout << " record not found !!!";
        }
    }
}

void Shopping ::rem()
{
    fstream data, data1;

    int pkey;
    int token = 0;
    cout << "DELETE THE PRODUCT " << endl;
    cout << " Product code " << endl;
    cin >> pkey;

    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << " FILE DOES NOT EXIST" << endl;
    }

    else
    {

        data1.open("database1.txt", ios::app | ios::out);
        data >> pcode >> pname >> price >> disc;

        while (!data.eof())
        {
            if (pkey == pcode)
            {

                cout << " PRODUCT DELETED SUCCESSFULLY  " << endl;
                token++;
            }

            else
            {

                data1 << "   " << pcode << "    " << pname << "     " << price << "     " << disc << endl;
            }
            data >> pcode >> pname >> price >> disc;
        }

        data.close();
        data1.close();

        remove("database.txt");
        rename("database1.txt", "database.txt");

        if (token == 0)
        {
            cout << " record not found !!!";
        }
    }
}

void Shopping ::list()
{
    //fstream data;
  //data.open(" database.txt ", ios::in);

  ifstream data("database.txt");
   cout << "                                              "<<endl;
   cout <<"Pro No \t\t Name \t\t Price "<<endl;
   //data>>pcode>>pname >>price >>disc;

   while(data>>pcode>>pname >>price >>disc){
    cout << pcode <<"\t\t "<<pname << "\t\t"<<price << "\t\t"<< disc <<endl;
    // data>>pcode>>pname >>price >>disc;
   }

   data.close();


}

void Shopping ::receipt()
{

    fstream data;

    int arrc[100];
    int arrq[100];
    char choice;
    int c = 0;

    float amount;
    float disc = 0;
    float total = 0;

    cout << "\n\n\n \t\t\t\t\t\t RECEIPT \t\t\t\t\t\t ";
    data.open("database.txt", ios::in);

    if (!data)
    {
        cout << "\n\n\n Empty database ";
         data.close();
    }

    else
    {
       // data.close();

        list();
        cout << "\n   \n";

        cout << "\n     PLEASE PLACE THE ORDER   \n";

        do
        {
            m:
            cout << " enter the product code ";
            cin >> arrc[c];

            cout << " enter the product quantity ";
            cin >> arrq[c];

            for (int i = 0; i < c; i++)
            {
                if (arrc[c] == arrc[i])
                {
                    cout << " DUPLICATE PRODUCT CODE ... TRY AGAIN";
                    goto m;
                }
            }
            c++;
            cout << " do you want to buy another product ? if yes press y else n ";
            cin >> choice;

        } 
        while (choice == 'y');

    cout << " ------------------------------ RECEIPT---------------------------------------- " << endl;
    cout << "product No \t Product Name \t Product qty \t Price \t Amount \t Amount with discount \n";

    for (int i =0 ; i<c ; i++){

        //data.open(" database.txt ", ios::in);
        ifstream data("database.txt");

        
         while(data>>pcode>>pname>>price>>disc){

            if(pcode==arrc[i]){
                amount = price*arrq[i];
                disc = amount - (amount * disc/100);
                total = total+disc;
                cout << "\n"<<pcode <<"\t\t"<<pname<<"\t\t"<<arrq[i]<<"\t\t"<<price<<"\t\t"<<amount<<"\t\t"<<disc <<endl;


            }
         }

    }

    data.close();

    }

    cout<< "\n\n                                    \n\n";
    cout << "TOTAL "<<total;
}


int main(){

    Shopping s;
    s.menu();

}