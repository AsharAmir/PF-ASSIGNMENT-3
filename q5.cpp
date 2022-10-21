#include <iostream>
#include <iomanip>
using namespace std;

double budget, upgrades = 0;


// getting filer information using a bool
bool isTaxFiler(){
    string filerInput;
    cout << "Are you a filer? (yes / no)" << endl;
    cin >> filerInput;
    if (filerInput== "YES" || filerInput == "yes" || filerInput == "Yes"){
        return true;
    }else{
        return false;
    }
}

// iterating thru all the upgrade options and asking the user if they want to get it
// using this method since the user could be having more than one upgrade
void upgradeCost(){
    bool f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11;
    cout << " \n " << endl;
    cout << "Select your features, Input '1' to add to cart, '2' to deny." << endl;
    cout << "Do you want feature # 1 [Manual (+3,769,000 PKR)]?";
    cin >> f1;
    switch (f1)
    {
    case true:
        cout << "added feature # 1 \n";
    }
    // if (f1 == "yes"){
    //     upgrades+=3769000;
    // }
    cout << "Do you want feature # 2 [Automatic (+3,899,000 PKR)]?" << endl;
    cin >> f2;
    switch (f2)
    {
    case true:
        cout << "added feature # 2 \n";
        upgrades+=3899000;
    }
    cout << "Do you want feature # 3 [Infotainment System with Navigation (+59,500 PKR)]?" << endl;
    cin >> f3;
    switch (f3)
    {
    case true:
        cout << "added feature # 3 \n";
        upgrades+=59500;
    }
    
    cout << "Do you want feature # 4 [Infotainment System without Navigation (+8000 PKR)]?" << endl;
    cin >> f4;
    switch (f4)
    {
    case true:
        cout << "added feature # 4 \n";
        upgrades+=8000;
    }
    cout << "Do you want feature # 5 [Fog Lights (Halogen) (+2000 PKR)]?" << endl;
    cin >> f5;
    switch (f5)
    {
    case true:
        cout << "added feature # 5 \n";
        upgrades+=2000;
    }
    cout << "Do you want feature # 6 [Fog Lights (LED) (+5000 PKR)]?" << endl;
    cin >> f6;
    switch (f6)
    {
    case true:
        cout << "added feature # 6 \n";
        upgrades+=5000;
    }
    cout << "Do you want feature # 7 [High Grade Interior (Leather Seats) (45,000 PKR)]?" << endl;
    cin >> f7;
    switch (f7)
    {
    case true:
        cout << "added feature # 7 \n";
        upgrades+=45000;
    }
    cout << "Do you want feature # 8 [High Grade Interior (Sofa Seats) (25,000 PKR)]?" << endl;
    cin >> f8;
    switch (f8)
    {
    case true:
        cout << "added feature # 8 \n";
        upgrades+=25000;
    }
    cout << "Do you want feature # 9 [Floor Mats (60,000 PKR)]?" << endl;
    cin >> f9;
    switch (f9)
    {
    case true:
        cout << "added feature # 9 \n";
        upgrades+=60000;
    }
    cout << "Do you want feature # 10 [Door Visors (60,000 PKR)]?" << endl;
    cin >> f10;
    switch (f10)
    {
    case true:
        cout << "added feature # 10 \n";
        upgrades+=60000;
    }
    cout << "Do you want feature # 11 [Trunk Tray (8,500 PKR)]?" << endl;
    cin >> f11;
    switch (f11)
    {
    case true:
        cout << "added feature # 11 \n";
        upgrades+=8500;
    }
    cout << "Total upgrades: " << fixed << upgrades << " pkr" << endl;
}

// printing the available features in a menu format
void features(){
    cout << "Available Features: " << endl;
    cout << " 1. Manual (+3,769,000 PKR) \n 2. Automatic (+3,899,000 PKR) \n 3. Infotainment System with Navigation (+59,500 PKR) \n 4. Infotainment System without Navigation (+8000 PKR) \n 5. Fog Lights (Halogen) (+2000 PKR) \n 6. Fog Lights (LED) (+5000 PKR) \n 7. High Grade Interior (Leather Seats) (45,000 PKR) \n 8. High Grade Interior (Sofa Seats) (25,000 PKR) \n 9. Floor Mats (60,000 PKR) \n 10. Door Visors (60,000 PKR) \n 11. Trunk Tray (8,500 PKR)" << endl;
    upgradeCost();
}

// main func
// getting the budget
// calculating the tax amount
// calling the upgrade amount 
// if grandTotal > budget, out of budget
// otherwise finalising the deal
int main(){
    cout << "What is your total budget: " << endl;
    cin >> budget;
    features(); 
    double finalCost, tax;
    if (isTaxFiler() == true){
        tax += 25000;
    }else{
        tax += 75000;
    }
    finalCost = upgrades + tax;
    cout << "Grand Total: " << fixed << finalCost << endl;
    if (finalCost > budget){
        cout << "Sorry you cant afford this!";
    }else{
        cout << "You've a good taste!";
    }

}
