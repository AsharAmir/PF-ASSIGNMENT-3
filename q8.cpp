#include <iostream>
using namespace std;

string name;
double income;
bool postalCheck;
int day, month, year, age, day_today = 19, month_today = 10, year_today = 22, ageday, agemonth, ageyear, postalcode;

int findAge(int day, int month, int year){
    ageday = day_today - day;
    if (ageday < 1){
        ageday *= -1;
    }
    agemonth = month_today - month;
    if (agemonth < 1){
        agemonth *= -1;
    }
    ageyear = year_today - year;
    if (ageyear < 1){
        ageyear *= -1;
    }
}

bool checkPostalA(int postalcode){
    int dig_One, dig_Three;
    dig_One = postalcode/1000;
    dig_Three = (postalcode/10)%10;
    if((dig_One == 4) && (dig_Three == 3)){
        return true;
    }else{
        return false;
    }
}

bool checkPostalB(int postalcode){
    int dig_One, dig_Three;
    dig_One = postalcode/10000;
    dig_Three = (postalcode/100)%10;
    if((dig_One == 5) && ((dig_Three == 5) || (dig_Three == 3))){
        return true;
    }else{
        return false;
    }
}

string error(string err){
    cout << err;
    return err;
}

bool validation(int day, int month){
    if((day<=31) && (month<=12)){
        return true;
    }else{
        error("Invalid date entered.");
        return false;
    }
}

double discountCheck(double income, bool postalCheck, string name){
    if (ageyear<22){
        cout << "Congratulations! " << name << " You're eligible for a discount of 50%" << endl;
    }else if(postalCheck){
            cout << "Congratulations! " << name << " You're eligible for a discount of 20%" << endl;      
    }else if(income<10000){
            cout << "Congratulations! " << name << " You're eligible for a discount of 90%" << endl;
    }
}

int main(){
    cout << "Input your name: " << endl;
    cin >> name;
    cout << "Input your date of birth (DD MM YY) (eg: 18 10 03) seperated by a space" << endl;
    cin >> day >> month >> year;
    if(validation(day, month)){
        findAge(day, month, year);
    }
    cout << "Input your income: " << endl;
    cin >> income;
    cout << "Input your postal code " << endl;
    cin >> postalcode;
    if(checkPostalA(postalcode) || checkPostalB(postalcode)){
        postalCheck = true;
    }
    discountCheck(income, postalCheck, name);


}