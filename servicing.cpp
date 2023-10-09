#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

class CARSS_service
{
public:
    int brand;
    string buyer_name;
    long long contact_no;
    string buyer_mail;

    void contactdetail()
    {
        cout << "ENTER BUYER'S NAME:";
        cin >> buyer_name;
        cout << "ENTER CONTACT NUMBER :";
        cin >> contact_no;
        cout << "ENTER BUYER'S MAIL :";
        cin >> buyer_mail;
    }

    void getdetails()
    {
        cout << "<----------------------------------------------------------------------------------------->\n";
        cout << "\t\t\t\t\tWELCOME TO AUTO CARS WORLD\n";
        cout << "<----------------------------------------------------------------------------------------->\n\n";

        contactdetail();
        cout << "Select the brand from below which you want to get the servicing done:\n\n";
        cout << "currently avaliable brands:-\n\n";
        cout << "1: MARUTI SUZUKI\n"
             << "2: TATA\n"
             << "3: MAHINDRA\n"
             << "4: RANGE ROVER\n\n";
        cout << "SELECT OPTION:";
        cin >> brand;
        cout << endl;
    }
};


class MODEL
{
public:

// servicing cost of each car 
    int maruti800_cost = 2500;
    int alto_cost = 3000;
    int wagonr_cost = 4500;
    int brezza_cost = 7500;
    int tiago_cost = 5000;
    int harrier_cost = 1400;
    int altroz_cost = 5500;
    int safari_cost = 1700;
    int bolero_cost = 8500;
    int thar_cost = 1200;
    int scorpion_cost = 1250;
    int xuv300_cost = 1000;
    int velar_cost = 900;
    int defender_cost = 1000;
    int sport_cost = 1500;
    int discovery_cost = 8000;

    void MARUTI_SUZUKI()
    {
        cout << "Currently avalaible models for selected brands is:-\n\n";
        cout << "******************************************************************************\n";
        cout<< " The servicing cost for the different car models is listed below -----\n\n\n";
        cout << "S.No\t\t\t\tMODEL_NAME\t\t\tPRICE/-\n";
        cout << "1)\t\t\t\tMARUTI 800\t\t\t" << maruti800_cost << "/-" << endl;
        cout << "2)\t\t\t\tALTO\t\t\t\t" << alto_cost << "/-" << endl;
        cout << "3)\t\t\t\tWAGONR\t\t\t\t" << wagonr_cost << "/-" << endl;
        cout << "4)\t\t\t\tBREZZA\t\t\t\t" << brezza_cost << "/-" << endl;
        cout << "******************************************************************************\n\n";
    }
    void TATA()
    {
        cout << "Currently avalaible models for selected brands is:-\n\n";
        cout << "******************************************************************************\n";
        cout<< " The servicing cost for the different car models is listed below -----\n\n\n";
        cout << "S.No\t\t\t\tMODEL_NAME\t\t\tPRICE/-\n";
        cout << "1)\t\t\t\tTIAGO\t\t\t\t" << tiago_cost << "/-" << endl;
        cout << "2)\t\t\t\tHARRIER\t\t\t\t" << harrier_cost << "/-" << endl;
        cout << "3)\t\t\t\tALTROZ\t\t\t\t" << altroz_cost << "/-" << endl;
        cout << "4)\t\t\t\tSAFARI\t\t\t\t" << safari_cost << "/-" << endl;
        cout << "******************************************************************************\n\n";
    }
    void MAHINDRA()
    {
        cout << "Currently avalaible models for selected brands is:-\n\n";
        cout << "******************************************************************************\n";
        cout<< " The servicing cost for the different car models is listed below -----\n\n\n";
        cout << "S.No\t\t\t\tMODEL_NAME\t\t\tPRICE/-\n";
        cout << "1)\t\t\t\tBOLERO\t\t\t\t" << bolero_cost << "/-" << endl;
        cout << "2)\t\t\t\tTHAR\t\t\t\t" << thar_cost << "/-" << endl;
        cout << "3)\t\t\t\tSCORPIO-N\t\t\t" << scorpion_cost << "/-" << endl;
        cout << "4)\t\t\t\tXUV300\t\t\t\t" << xuv300_cost << "/-" << endl;
        cout << "******************************************************************************\n\n";
    }
    void RANGE_ROVER()
    {
        cout << "Currently avalaible models for selected brands is:-\n\n";
        cout << "******************************************************************************\n";
        cout<< " The servicing cost for the different car models is listed below -----\n\n\n";
        cout << "S.No\t\t\t\tMODEL_NAME\t\t\tPRICE/-\n";
        cout << "1)\t\t\t\tVELAR\t\t\t\t" << velar_cost << "/-" << endl;
        cout << "2)\t\t\t\tDEFENDER\t\t\t" << defender_cost << "/-" << endl;
        cout << "3)\t\t\t\tSPORT\t\t\t\t" << sport_cost << "/-" << endl;
        cout << "4)\t\t\t\tDISCOVERY\t\t\t" << discovery_cost << "/-" << endl;
        cout << "******************************************************************************\n\n";
    }
};


class DETAILS : public MODEL
{
public:
    string time_taken;
    string cc;
    string mileage;
    string colour;
    string airbags;
    string power;
    string car_name;
    string carname;
    string price;
    string price1;

    void specifications()
    {
        ifstream specs("features.txt");
        if (!specs.is_open())
        {
            cout << "Failed to open file\n";
            return;
        }
        // while (specs >> carname >> cc >> mileage >> colour >> airbags >> power >> price>>price1)
        while (getline(specs, carname) && getline(specs, cc) && getline(specs, mileage) && getline(specs, colour) && getline(specs, airbags) && getline(specs, power) && getline(specs, price) && getline(specs, price1))
        {
            if (carname == car_name)
            {
                cout << "-------------------------------------------------------\n";
                cout << "car:" << carname << endl;
                cout << "cc:" << cc << endl;
                cout << "mileage:" << mileage << endl;
                cout << "colour:" << colour << endl;
                cout << "airbags:" << airbags << endl;
                cout << "power:" << power << endl;
                cout << "price:" << price << endl;
                cout << "-------------------------------------------------------\n";
                BASE_PRICE = stoi(price1);
                model_name = string(carname);
                model_colour = string(colour);
            }
            else
            {
                cout << "";
            }
        }
        specs.close();
    }
};

int main(){
 CARSS_service cars;
 MODEL model;
 

 get:
    cars.getdetails();
    switch (cars.brand)
    {
    case 1:
        model.MARUTI_SUZUKI();
        break;
    case 2:
        model.TATA();
        break;
    case 3:
        model.MAHINDRA();
        break;
    case 4:
        model.RANGE_ROVER();
        break;
    default:
        system("cls");
        cout << "WRONG INPUT\nPLEASE SELECT AGAIN !!!\n\n";
        goto get;
        break;
    }


    optionagain:
    int option;
    cout << "Select which model do you want to servicing on:";
    cin >> option;
    cout << endl;
    switch (option)
    {
    case 1:
        switch (cars.brand)
        {
        case 1:
            detail.car_name = "maruti800";
            break;
        case 2:
            detail.car_name = "tiago";
            break;
        case 3:
            detail.car_name = "bolero";
            break;
        case 4:
            detail.car_name = "velar";
            break;
        }
        cout << "SPECIFICATIONS OF SELECTED MODEL ARE AS FOLLOWS:-\n\n";
        detail.specifications();
        break;
    case 2:
        switch (cars.brand)
        {
        case 1:
            detail.car_name = "alto";
            break;
        case 2:
            detail.car_name = "harrier";
            break;
        case 3:
            detail.car_name = "thar";
            break;
        case 4:
            detail.car_name = "defender";
            break;
        }
        cout << "SPECIFICATIONS OF SELECTED MODEL ARE AS FOLLOWS:-\n\n";
        detail.specifications();
        break;
    case 3:
        switch (cars.brand)
        {
        case 1:
            detail.car_name = "wagonr";
            break;
        case 2:
            detail.car_name = "altroz";
            break;
        case 3:
            detail.car_name = "scorpion";
            break;
        case 4:
            detail.car_name = "sport";
            break;
        }
        cout << "SPECIFICATIONS OF SELECTED MODEL ARE AS FOLLOWS:-\n\n";
        detail.specifications();
        break;
    case 4:
        switch (cars.brand)
        {
        case 1:
            detail.car_name = "brezza";
            break;
        case 2:
            detail.car_name = "safari";
            break;
        case 3:
            detail.car_name = "xuv300";
            break;
        case 4:
            detail.car_name = "discovery";
            break;
        }
        cout << "SPECIFICATIONS OF SELECTED MODEL ARE AS FOLLOWS:-\n\n";
        detail.specifications();
        break;
    default:
        cout << "WRONG INPUT\nPLEASE SELECT FROM ABOVE OPTIONS !!!\n\n";
        goto optionagain;
        break;
    }
    cout << "\nIf you want to go back Press '#'\n";
    cout << "If you want to go in main Press '*'\n";
    cout << "Press 'y' to buy a car\n\n";
    cout << "ENTER YOUR CHOICE:";
    cin >> choice;
    switch (choice)
    {
    case '#':
        goto optionagain;
        break;
    case '*':
        goto getagain;
        break;
    case 'y':
        cout << "\n";
        billing();
        break;
    }








}


