#include <iostream>
using namespace std;

/* MUHAMMAD ASHHAR AMIR
I222420 NUCES ISB
SE B*/

double n1, n2, n3;


// making the strict comparison function
// getting the values in the func

double strict(){
    cout << "Enter the three numbers to compare: " << endl;
    cin >> n1, n2, n3;
    if(n1<n2<n3){//if ascending
        cout << "The numbers are increasing" << endl;
    }else if(n1>n2>n3){ //if descending
        {
            cout << "The numbers are decreasing" << endl;
        }
    }else{
        cout << "Neither" << endl; //else neither
    }
}

// leniant comparison func
double lenient(){
    cout << "Enter the three numbers to compare: " << endl;
    cin >> n1, n2, n3;
    if(n1<=n2<=n3){
        cout << "The numbers are increasing" << endl;
    }else if(n1>=n2>=n3){
        {
            cout << "The numbers are decreasing" << endl;
        }
    }else if (!(n1<=n2<=n3) && !(n1>=n2>=n3)){
        cout << "Neither" << endl;
    }
}

// asking the user for the mode of comparison
// applying appropriate functions using ifs 
// calling said functions
int main(){
    int choice;
    cout << "Select the mode for comparing. \n 1. Strict \n 2. Lenient \n";
    cin >> choice;
    if (choice==1){
        strict();
    }else{
        lenient();
    }

}