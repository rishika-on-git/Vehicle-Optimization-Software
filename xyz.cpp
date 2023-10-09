//customer apni details se login krega aur use apni details show hogii 
// use apni recent purchases show hogi 
//      q4567832 

//

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main(){
    int option;
    cin>>option;
    string name;
    long long no;

if (option == 4){
 cout << " WELCOME TO THE AUTO CARS WORLD  \n\n\n\n";
 cout << " -----------CAR SERVICING-------------\n\n\n";

 cout << " FOR FURTHER NAVIGATION PLEASE ENTER THE FOLLOWING DETAILS ";
 cout << " ENTER YOU NAME ";
 cin>> name;

 cout << " ENTER YOUR CONTACT NUMBER ";
 cin>>no;

 cout << " YOUR RECENT PURCHASES ARE  ----\n\n";


 
    // ofstream file;
    // file.open("billing.txt");
    // if (file.is_open())
    // {
    //     file << "->SOLD TO:\n";
    //     file << "NAME:" << car.buyer_name << endl;
    //     file << "CONTACT NUMBER:" << car.contact_no << endl;
    //     file << "EMAIL:" << car.buyer_mail << endl;

    //     file << "->VECHILE INFORMATION:\n";
    //     file << "MODEL NAME:" << model_name << endl;
    //     file << "MODEL COLOUR:" << model_colour << endl;

    //     file << "->PRICE BREAKDOWN:\n";
    //     file << "BASE PRICE:" << BASE_PRICE << endl;
    //     file << "GST:" << gst << endl;
    //     file << "INSAURANE CHARGE:" << insaurance << endl;
    //     file << "TOTAL:" << gst + BASE_PRICE + insaurance << endl << endl;
    // }

 while file >> soldto>> namee >> contact >> email >> vehicleinfo >> modelname >> modelcolor>>pricebreak>>baseprice>>gst>>insurance>>total;
 if (name == buyer_name ){
  cout << " print bill ";
  void billing();

 }

 else {
  cout << " please enter your correct credentials ";

 }

 if(model_name == modelname ){

    specifications();

 } 

 int kms;

 cout << "Enter the no of kms car has travelled" <<endl;
 cin>> kms;

 if (kms <=1000 ){
    cout << " Congratulations ....";
    cout << " THIS IS YOUR FIRST SERVICING AND IT IS COMPLETELY FREE ";
    cout << " No of free services left : 2";
 }

 else if (kms >1000 && km <=5000){
    cout << " Congratulations ....";
    cout << " THIS IS YOUR SECOND SERVICING AND IT IS COMPLETELY FREE ";
    cout << " No of free services left : 1";
 }

 else if (kms >5000 && km <=10000){
    cout << " Congratulations ....";
    cout << " THIS IS YOUR THIRD SERVICING AND IT IS COMPLETELY FREE ";
    cout << " No of free services left : 0";
 }

 else {

    cout << " FREE SERVICES EXHAUSTED "<<endl;
    cout << " THIS IS THE AMOUNT THAT YOU WILL HAVE TO PAY FOR THE SERVICING ";

 }























}


}