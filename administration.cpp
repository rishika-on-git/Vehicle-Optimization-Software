#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
void search()
{
    string in, a, b, c, d, e, f, g, h, i, j, k, l, m, n, o;
    int find2 = 0;
WRONG_INVOICE:
    cout << "ENTER INVOICE FOR WHICH YOU WANT TO CHECK INFORMATION:";
    cin >> in;

    ifstream find1("bills.txt");
    while (getline(find1, a) && getline(find1, b) && getline(find1, c) && getline(find1, d) && getline(find1, e) && getline(find1, f) && getline(find1, g) && getline(find1, h) && getline(find1, i) && getline(find1, j) && getline(find1, k) && getline(find1, l) && getline(find1, m) && getline(find1, n) && getline(find1, o))

    // while (find1 >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l >> m)
    {
        if (in == a)
        {
            find2 = 1;
            break;
        }
    }
    find1.close();
    if (find2 == 1)
    {
        cout << "\n\t\t\t\t\tYOUR INVOICE\n";
        cout << "************************************************************************\n";
        cout << "INVOICE NUMBER:" << a << endl;
        cout << "DATE:" << b << "/" << c << "/" << d << endl;
        cout << "CONTACT NUMBER:" << e << endl;
        cout << "MODEL_NAME:" << f << endl;
        cout << "VECHILE COLOUR:" << g << endl;
        cout << "BASE PRICE:" << h << endl;
        cout << "GST:" << i << endl;
        cout << "INSAURANCE:" << j << endl;
        cout << "TOTAL:" << k << endl;
        cout << "DISCOUNT:" << l << endl;
        cout << "NET TOTAL:" << m << endl;
        cout << "NAME:" << n << endl;
        cout << "MAIL ID:" << o << endl;
        cout << "************************************************************************\n";
    }
    else
    {
        cout << "\nYour invoice is not found ! \n";
        cout << "Either you enter wrong invoice number or you have not purachased  anything\n\n";
        goto WRONG_INVOICE;
    }
}

class Car
{
public:
    // string make;
    string model;
    int year;
    int mileage;
    bool serviced;
};

void addCar(vector<Car> &cars)
{
    Car car;

    // cout << "Enter the make of the car: ";
    // getline(cin, car.make);

    cout << "Enter the model of the car: ";
    getline(cin, car.model);

    cout << "Enter the year of the car: ";
    cin >> car.year;

    cout << "Enter the mileage of the car: ";
    cin >> car.mileage;

    car.serviced = false;

    cars.push_back(car);

    cout << "Car added successfully!" << endl;
}

void displayCars(const vector<Car> &cars)
{
    cout << "Cars in the facility:" << endl;

    for (const auto &car : cars)
    {
        cout << car.model << " (" << car.year << "), " << car.mileage << " miles, ";

        if (car.serviced)
        {
            cout << "serviced" << endl;
        }
        else
        {
            cout << "unserviced" << endl;
        }
    }
}

void serviceCar(vector<Car> &cars)
{
    int index;

    cout << "Enter the index of the car to service: ";
    cin >> index;

    if (index < 0 || index >= cars.size())
    {
        cout << "Invalid index. Please try again." << endl;
        return;
    }

    cars[index].serviced = true;

    cout << "Car serviced successfully!" << endl;
}

int main()
{
    char admin;
    system("cls");
again_input:
    cout << "1) FOR PURCHASING INFORMATION\n2) FOR SERVICING FACILITY\n\n";
    cout << "ENTER WHICH FACILITY DO YOU WANT:";
    cin >> admin;
    cout << "\n";
    switch (admin)
    {
    wrong:
    case '1':
        search();
        char menu;
        cout << "\nENTER FROM GIVEN OPTIONS->\n1) GO BACK\n2)MAIN MENU\n3)EXIT\n";
        cout << "\nENTER HERE:";
        cin >> menu;
        cout << "\n";

        switch (menu)
        {
        case '1':
            goto again_input;
            break;
        case '2':
            system("cls");
            system("main_final_login.exe");
            break;
        default:
            system("cls");
            cout << "BYE BYE!\n\n";
            break;
        }
        break;
    case '2':
    {

    mm:
        string name;
        string aa;
        string dd;
        string mm;
        string yy;
        // long long no;
        string cnctno;
        string md_name;
        string md_color;
        string base_prc;
        string discc;
        string net_totall;
        string gstt;
        string insurnce;
        string totlll;
        string buy_nm;
        string buy_mail;

        cout << endl
             << endl;
        cout << " WELCOME TO THE AUTO CARS WORLD  \n\n\n\n";
        cout << " -----------CAR SERVICING-------------\n\n\n";

        cout << " FOR FURTHER NAVIGATION PLEASE ENTER THE FOLLOWING DETAILS " << endl;
        cout << " ENTER YOU NAME ";
        cin >> name;

        // cout << endl
        //      << " ENTER YOUR CONTACT NUMBER ";
        // cin >> no;

        cout << " YOUR RECENT PURCHASES ARE  ----\n\n";
        int countt = 0;
        ifstream obj("bills.txt");
        if (obj.is_open())
        {

            while (obj >> aa >> dd >> mm >> yy >> cnctno >> md_name >> md_color >> base_prc >> discc >> net_totall >> gstt >> insurnce >> totlll >> buy_nm >> buy_mail)
            {
                if (buy_nm == name)
                {

                    // a = rand() + rand() + rand();
                    cout << "\n\t\t\t\t\t\tINVOICE\n";
                    cout << "*******************************************************************************************************\n";
                    cout << "AUTO CARS WORLD\n";
                    cout << "JIIT,NOIDA,SECTOR-62\n";
                    cout << "UTTAR PRADESH\n\n";

                    cout << "->INVOICE:\n";
                    cout << "INVOICE NUMBER:#" << aa << endl;
                    cout << "DATE:" << dd << "/" << mm << "/" << yy << endl
                         << endl;

                    cout << "->SOLD TO:\n";
                    cout << "NAME:" << buy_nm << endl;
                    cout << "CONTACT NUMBER:" << cnctno << endl;
                    cout << "EMAIL:" << buy_mail << endl
                         << endl;

                    cout << "->VECHILE INFORMATION:\n";
                    cout << "MODEL NAME:" << md_name << endl;
                    cout << "MODEL COLOUR:" << md_color << endl
                         << endl;

                    cout << "->PRICE BREAKDOWN(IN RUPEES):\n";
                    cout << "BASE PRICE:" << base_prc << "/-" << endl;
                    cout << "GST:" << gstt << "/-" << endl;
                    cout << "INSAURANE CHARGE:" << insurnce << "/-" << endl;
                    cout << "TOTAL:" << totlll << "/-" << endl;
                    cout << "DISCOUNT:" << discc << "/-" << endl;
                    cout << "NET TOTAL:" << net_totall << "/-" << endl
                         << endl;

                    cout << "Thank you for your deal! If you have any question or concerns,please do not hesitate to contact us.\n";
                    cout << "*******************************************************************************************************\n\n";

                    countt = 1;
                }

                else
                {

                    cout << " PLEASE ENTER YOUR CORRECT CREDENTIALS " << endl
                         << endl;
                    goto mm;
                    break;
                }
            }
        }
        else
        {
            cout << " FILE CANNOT BE OPENED " << endl;
            break;
        }

        if (countt = 1)
        {

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
                cout << " THIS IS THE AMOUNT THAT YOU WILL HAVE TO PAY FOR THE SERVICING " << endl;

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

                        cout << "     " << pprice << endl;
                        exit(0);
                    }
                }
            }

            // return 0;
        }
    }
    }
    return 0;
}
