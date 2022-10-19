#include <iostream>
using namespace std;

string intToRoman(int number){
    string M0 = "", M = "M", MM = "MM", MMM = "MMM";
    string C0 = "", C = "C", CC = "CC", CCC = "CCC", CD = "CD", D = "D", DC = "DC", DCC = "DCC", DCCC = "DCCC", CM = "CM" 

}

string error(string err){
    cout << err;
}

int main(){
    int number;
    cout << "Input the integer to convert from decimal to roman: " << endl;
    if(number > 1 && number < 3999){
         cin >> number;
         intToRoman(number);
    }else{
        error("Number out of range!");
    }
}