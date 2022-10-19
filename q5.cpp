#include <iostream>
#include <iomanip>
using namespace std;

double budget, upgrades = 0;

bool isTaxFiler(){
    string filerInput;
    cout << "Are you a filer?" << endl;
    cin >> filerInput;
    if (filerInput== "YES" || filerInput == "yes" || filerInput == "Yes"){
        return true;
    }else{
        return false;
    }
}

void upgradeCost(){
    string f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11;
    cout << " \n " << endl;
    cout << "Select your features, Input 'yes' to add to cart" << endl;
    cout << "Do you want feature # 1 [Manual (+3,769,000 PKR)]?";
    cin >> f1;
    if (f1 == "yes"){
        upgrades+=3769000;
    }
    cout << "Do you want feature # 2 [Automatic (+3,899,000 PKR)]?" << endl;
    cin >> f2;
    if (f2 == "yes"){
        upgrades+=3899000;
    }
    cout << "Do you want feature # 3 [Infotainment System with Navigation (+59,500 PKR)]?" << endl;
    cin >> f3;
    if (f3 == "yes"){
        upgrades+=59500;
    }
    cout << "Do you want feature # 4 [Infotainment System without Navigation (+8000 PKR)]?" << endl;
    cin >> f4;
    if (f4 == "yes"){
        upgrades+=8000;
    }
    cout << "Do you want feature # 5 [Fog Lights (Halogen) (+2000 PKR)]?" << endl;
    cin >> f5;
    if (f5 == "yes"){
        upgrades+=2000;
    }
    cout << "Do you want feature # 6 [Fog Lights (LED) (+5000 PKR)]?" << endl;
    cin >> f6;
    if (f6 == "yes"){
        upgrades+=5000;
    }
    cout << "Do you want feature # 7 [High Grade Interior (Leather Seats) (45,000 PKR)]?" << endl;
    cin >> f7;
    if (f7 == "yes"){
        upgrades+=45000;
    }
    cout << "Do you want feature # 8 [High Grade Interior (Sofa Seats) (25,000 PKR)]?" << endl;
    cin >> f8;
    if (f8 == "yes"){
        upgrades+=25000;
    }
    cout << "Do you want feature # 9 [Floor Mats (60,000 PKR)]?" << endl;
    cin >> f9;
    if (f9 == "yes"){
        upgrades+=60000;
    }
    cout << "Do you want feature # 10 [Door Visors (60,000 PKR)]?" << endl;
    cin >> f10;
    if (f10 == "yes"){
        upgrades+=60000;
    }
    cout << "Do you want feature # 11 [Trunk Tray (8,500 PKR)]?" << endl;
    cin >> f11;
    if (f11 == "yes"){
        upgrades+=8500;
    }
    //cout << "Total upgrades: " << fixed << upgrades << " pkr" << endl;
}

void features(){
    cout << "Available Features: " << endl;
    cout << " 1. Manual (+3,769,000 PKR) \n 2. Automatic (+3,899,000 PKR) \n 3. Infotainment System with Navigation (+59,500 PKR) \n 4. Infotainment System without Navigation (+8000 PKR) \n 5. Fog Lights (Halogen) (+2000 PKR) \n 6. Fog Lights (LED) (+5000 PKR) \n 7. High Grade Interior (Leather Seats) (45,000 PKR) \n 8. High Grade Interior (Sofa Seats) (25,000 PKR) \n 9. Floor Mats (60,000 PKR) \n 10. Door Visors (60,000 PKR) \n 11. Trunk Tray (8,500 PKR)" << endl;
    upgradeCost();
}

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