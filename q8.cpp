#include <iostream>
using namespace std;

/* MUHAMMAD ASHHAR AMIR
I222420 NUCES ISB
SE B*/


// declaring all variables here in global scope since theyre called everywhere
string name;
double income;
bool postalCheck;
int day, month, year, age, day_today = 19, month_today = 10, year_today = 22, ageday, agemonth, ageyear, postalcode;

// using the findAge function, geting day month year and calculating using the hardcoded present date value
void findAge(int day, int month, int year){
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

// checking if the user belongs to city A
bool checkPostalA(int postalcode){
    int dig_One, dig_Three;
    dig_One = postalcode/1000; //finding the first digit of their postal code to compare with the format
    dig_Three = (postalcode/10)%10;//finding the third digit of their postal code to compare with the format
    if((dig_One == 4) && (dig_Three == 3)){//comparing
        return true;
    }else{
        return false;
    }
}

// checking if the user belongs to city B
bool checkPostalB(int postalcode){
    int dig_One, dig_Three;
    dig_One = postalcode/10000;//finding the first digit of their postal code to compare with the format
    dig_Three = (postalcode/100)%10;//finding the third digit of their postal code to compare with the format
    if((dig_One == 5) && ((dig_Three == 5) || (dig_Three == 3))){//comparing
        return true;
    }else{
        return false;
    }
}

// error prompt
string error(string err){
    cout << err;
    return err;
}

//checking if the values entered are correct and passing false otherwise
bool validation(int day, int month, int year){
    if((day<=31) && (month<=12) && (year < 22)){
        return true;
    }else{
        error("Invalid date entered.");
        return false;
    }
}


// func to check the discount amount and printing the said discount
void discountCheck(double income, bool postalCheck, string name){
    if (ageyear<22){
        cout << "Congratulations! " << name << " You're eligible for a discount of 50%" << endl;
    }else {
        if(postalCheck){
            cout << "Congratulations! " << name << " You're eligible for a discount of 20%" << endl;
    }else{
        }if(income<10000){
            cout << "Congratulations! " << name << " You're eligible for a discount of 90%" << endl;
    }
    }
    
}

// main func, getting inputs, using validation check before calling appropriate functions
int main(){
    cout << "Input your name: " << endl;
    cin >> name;
    cout << "Input your date of birth (DD MM YY) (eg: 18 10 03) seperated by a space" << endl;
    cin >> day >> month >> year;
    if(validation(day, month, year)){
        findAge(day, month, year);
    }
    cout << "Input your income: " << endl;
    cin >> income;
    cout << "Input your postal code " << endl;
    cin >> postalcode;
    if(checkPostalA(postalcode) || checkPostalB(postalcode)){
        postalCheck = true;
    }
    discountCheck(income, postalCheck, name); //calling the discount func


}