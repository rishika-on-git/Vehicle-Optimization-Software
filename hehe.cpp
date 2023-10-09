#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
void billing();

static int BASE_PRICE;
static string model_name;
static string model_colour;
// buyer_name;

class CARS
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
        cout << "ENTER CONTACT NUMBER NAME:";
        cin >> contact_no;
        cout << "ENTER BUYER'S MAIL NAME:";
        cin >> buyer_mail;
    }

    void getdetails()
    {
        cout << "<----------------------------------------------------------------------------------------->\n";
        cout << "\t\t\t\t\tWELCOME TO AUTO CARS WORLD\n";
        cout << "<----------------------------------------------------------------------------------------->\n\n";
        cout << "Select the brand from below which you want to see:\n\n";
        cout << "currently avaliable brands:-\n\n";
        cout << "1: MARUTI SUZUKI\n"
             << "2: TATA\n"
             << "3: MAHINDRA\n"
             << "4: RANGE ROVER\n\n";
        cout << "SELECT OPTION:";
        cin >> brand;
        cout << endl;
    }
} car;

class MODEL
{
public:
    int maruti800_price = 250000;
    int alto_price = 300000;
    int wagonr_price = 450000;
    int brezza_price = 750000;
    int tiago_price = 500000;
    int harrier_price = 1400000;
    int altroz_price = 550000;
    int safari_price = 1700000;
    int bolero_price = 850000;
    int thar_price = 1200000;
    int scorpion_price = 1250000;
    int xuv300_price = 1000000;
    int velar_price = 9000000;
    int defender_price = 10000000;
    int sport_price = 15000000;
    int discovery_price = 8000000;

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
        cout << "S.No\t\t\t\tMODEL_NAME\t\t\tPRICE/-\n";
        cout << "1)\t\t\t\tMARUTI 800\t\t\t" << maruti800_price << "/-" << endl;
        cout << "2)\t\t\t\tALTO\t\t\t\t" << alto_price << "/-" << endl;
        cout << "3)\t\t\t\tWAGONR\t\t\t\t" << wagonr_price << "/-" << endl;
        cout << "4)\t\t\t\tBREZZA\t\t\t\t" << brezza_price << "/-" << endl;
        cout << "******************************************************************************\n\n";
    }
    void TATA()
    {
        cout << "Currently avalaible models for selected brands is:-\n\n";
        cout << "******************************************************************************\n";
        cout << "S.No\t\t\t\tMODEL_NAME\t\t\tPRICE/-\n";
        cout << "1)\t\t\t\tTIAGO\t\t\t\t" << tiago_price << "/-" << endl;
        cout << "2)\t\t\t\tHARRIER\t\t\t\t" << harrier_price << "/-" << endl;
        cout << "3)\t\t\t\tALTROZ\t\t\t\t" << altroz_price << "/-" << endl;
        cout << "4)\t\t\t\tSAFARI\t\t\t\t" << safari_price << "/-" << endl;
        cout << "******************************************************************************\n\n";
    }
    void MAHINDRA()
    {
        cout << "Currently avalaible models for selected brands is:-\n\n";
        cout << "******************************************************************************\n";
        cout << "S.No\t\t\t\tMODEL_NAME\t\t\tPRICE/-\n";
        cout << "1)\t\t\t\tBOLERO\t\t\t\t" << bolero_price << "/-" << endl;
        cout << "2)\t\t\t\tTHAR\t\t\t\t" << thar_price << "/-" << endl;
        cout << "3)\t\t\t\tSCORPIO-N\t\t\t" << scorpion_price << "/-" << endl;
        cout << "4)\t\t\t\tXUV300\t\t\t\t" << xuv300_price << "/-" << endl;
        cout << "******************************************************************************\n\n";
    }
    void RANGE_ROVER()
    {
        cout << "Currently avalaible models for selected brands is:-\n\n";
        cout << "******************************************************************************\n";
        cout << "S.No\t\t\t\tMODEL_NAME\t\t\tPRICE/-\n";
        cout << "1)\t\t\t\tVELAR\t\t\t\t" << velar_price << "/-" << endl;
        cout << "2)\t\t\t\tDEFENDER\t\t\t" << defender_price << "/-" << endl;
        cout << "3)\t\t\t\tSPORT\t\t\t\t" << sport_price << "/-" << endl;
        cout << "4)\t\t\t\tDISCOVERY\t\t\t" << discovery_price << "/-" << endl;
        cout << "******************************************************************************\n\n";
    }
};

class DETAILS : public MODEL
{
public:
    string maruti1;
    string cc;
    string mileage;
    string colour;
    string airbags;
    string power;
    string car_name;
    string carname;
    string price;
    string price1;
    string pprice;

    void specifications()
    {
        ifstream specs("features.txt");
        if (!specs.is_open())
        {
            cout << "Failed to open file\n";
            return;
        }
        // while (specs >> carname >> cc >> mileage >> colour >> airbags >> power >> price>>price1)
        while (getline(specs, carname) && getline(specs, cc) && getline(specs, mileage) && getline(specs, colour) && getline(specs, airbags) && getline(specs, power) && getline(specs, price) && getline(specs, price1) && getline(specs, pprice))
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

void billing()
{
    MODEL model;
    CARS car;
    int gst;
    int insaurance;

    gst = BASE_PRICE * (0.18);
    insaurance = BASE_PRICE * (0.034);
    car.contactdetail();
    system("cls");

    cout << "*************************************************************************************************\n";
    cout << "AUTO CARS WORLD\n";
    cout << "JIIT,NOIDA,SECTOR-62\n";
    cout << "UTTAR PRADESH\n\n";

    cout << "->SOLD TO:\n";
    cout << "NAME:" << car.buyer_name << endl;
    cout << "CONTACT NUMBER:" << car.contact_no << endl;
    cout << "EMAIL:" << car.buyer_mail << endl
         << endl;

    cout << "->VECHILE INFORMATION:\n";
    cout << "MODEL NAME:" << model_name << endl;
    cout << "MODEL COLOUR:" << model_colour << endl
         << endl;

    cout << "->PRICE BREAKDOWN:\n";
    cout << "BASE PRICE:" << BASE_PRICE << endl;
    cout << "GST:" << gst << endl;
    cout << "INSAURANE CHARGE:" << insaurance << endl;
    cout << "TOTAL:" << gst + BASE_PRICE + insaurance << endl
         << endl;

    cout << "Thank you for your deal! If you have any question or concerns,please do not hesitate to contact us.\n";
    cout << "*************************************************************************************************\n\n";

    ofstream file;
    file.open("billing.txt");
    if (file.is_open())
    {

        file << car.buyer_name << endl;
        file << car.contact_no << endl;
        file << car.buyer_mail << endl;

        file << model_name << endl;
        file << model_colour << endl;

        file << BASE_PRICE << endl;
        file << gst << endl;
        file << insaurance << endl;
        file << gst + BASE_PRICE + insaurance << endl;
    }
}

int main()
{

    mainnn:
    MODEL model;
    DETAILS detail;
    int opt;


    cout << "*************************************************************************************************\n";
    cout << "AUTO CARS WORLD\n";
    cout << "JIIT,NOIDA,SECTOR-62\n";
    cout << "UTTAR PRADESH\n\n";
    cout << "----------------------------------------------------------------------------------------------------\n\n\n";
    cout << " ENTER 1 FOR BUYING A CAR " << endl<<endl;
    cout << " ENTER 2 FOR SERVICING " << endl<<endl;
    cout << " ENTER 3 TO GO BACK TO THE MAIN MENU " <<endl<< endl;
    cout << "*************************************************************************************************\n\n\n\n";


    cin >> opt;
    if (opt == 1)
    {
        char choice;
    getagain:
        car.getdetails();
        switch (car.brand)
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
            goto getagain;
            break;
        }
    optionagain:
        int option;
        cout << "Select which model do you want to purchase:";
        cin >> option;
        cout << endl;
        switch (option)
        {
        case 1:
            switch (car.brand)
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
            switch (car.brand)
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
            switch (car.brand)
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
            switch (car.brand)
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

    if (opt == 2)
    {
         mm:

        string name;
        long long no;
        string buy_nm;
        string cnctno;
        string bb_mail;
        string md_name;
        string md_color;
        string base_prc;
        string insurnce;
        string gst_base;
        string gstt;
       cout<<endl<<endl ;
        cout << " WELCOME TO THE AUTO CARS WORLD  \n\n\n\n";
        cout << " -----------CAR SERVICING-------------\n\n\n";

        cout << " FOR FURTHER NAVIGATION PLEASE ENTER THE FOLLOWING DETAILS " << endl;
        cout << " ENTER YOU NAME ";
        cin >> name;

        cout << endl
             << " ENTER YOUR CONTACT NUMBER ";
        cin >> no;

        cout << " YOUR RECENT PURCHASES ARE  ----\n\n";

        ifstream obj("billing.txt");
        if (obj.is_open())
        {

            while (obj >> buy_nm >> cnctno >> bb_mail >> md_name >> md_color >> base_prc >> gstt >> insurnce >> gst_base)
            {
                if (buy_nm == name)
                {

                    cout << "*************************************************************************************************\n";
                    cout << "AUTO CARS WORLD\n";
                    cout << "JIIT,NOIDA,SECTOR-62\n";
                    cout << "UTTAR PRADESH\n\n";

                    cout << "->SOLD TO:\n";
                    cout << "NAME:" << buy_nm << endl;
                    cout << "CONTACT NUMBER:" << cnctno << endl;
                    cout << "EMAIL:" << bb_mail << endl
                         << endl;

                    cout << "->VECHILE INFORMATION:\n";
                    cout << "MODEL NAME:" << md_name << endl;
                    cout << "MODEL COLOUR:" << md_color << endl
                         << endl;

                    cout << "->PRICE BREAKDOWN:\n";
                    cout << "BASE PRICE:" << base_prc << endl;
                    cout << "GST:" << gstt << endl;
                    cout << "INSAURANE CHARGE:" << insurnce << endl;
                    cout << "TOTAL:" << gstt + base_prc + insurnce << endl
                         << endl;

                    cout << "Thank you for your deal! If you have any question or concerns,please do not hesitate to contact us.\n";
                    cout << "*************************************************************************************************\n\n";
                }

                else
                {

                    cout << " PLEASE ENTER YOUR CORRECT CREDENTIALS "<<endl<<endl;
                    goto mm;
                    break;
                }
            }
        }
        else
        {
            cout << " FILE CANNOT BE OPENED " << endl;
        }

        int kms;

        cout << "Enter the no of kms car has travelled" << endl;
        cin >> kms;
        string model_nm;

        cout << "Enter your car model " << endl;
        cin >> model_nm;

        if (kms <= 1000)
        {
            cout << " Congratulations ....";
            cout << " THIS IS YOUR FIRST SERVICING AND IT IS COMPLETELY FREE ";
            cout << " No of free services left : 2";
        }

        else if (kms > 1000 && kms <= 5000)
        {
            cout << " Congratulations ....";
            cout << " THIS IS YOUR SECOND SERVICING AND IT IS COMPLETELY FREE ";
            cout << " No of free services left : 1";
        }

        else if (kms > 5000 && kms <= 10000)
        {
            cout << " Congratulations ....";
            cout << " THIS IS YOUR THIRD SERVICING AND IT IS COMPLETELY FREE ";
            cout << " No of free services left : 0";
        }

        else
        {

            cout << " FREE SERVICES EXHAUSTED " << endl;
            cout << " THIS IS THE AMOUNT THAT YOU WILL HAVE TO PAY FOR THE SERVICING "<<endl;


            string maruti1;
            string cc;
            string mileage;
            string colour;
            string airbags;
            string power;
            string car_name;
            string carname;
            string price;
            string price1;
            string pprice;

            ifstream specs("features.txt");
            if (!specs.is_open())
            {
                cout << "Failed to open file and show the cost\n";
                exit(0);
            }
            // while (specs >> carname >> cc >> mileage >> colour >> airbags >> power >> price>>price1)
            while (getline(specs, carname) && getline(specs, cc) && getline(specs, mileage) && getline(specs, colour) && getline(specs, airbags) && getline(specs, power) && getline(specs, price) && getline(specs, price1) && getline(specs, pprice))
            {
                if (carname == model_nm)
                {

                    cout << "     "<<pprice << endl;
                    exit(0);
                }

               
            }
        }

        //return 0;
    }


    if (opt == 3 ){
        goto mainnn;

    }
    
}