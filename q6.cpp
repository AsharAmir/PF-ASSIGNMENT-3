#include <iostream>
using namespace std;

double n1, n2, n3;

double strict(){
    cout << "Enter the three numbers to compare: " << endl;
    cin >> n1, n2, n3;
    if(n1<n2<n3){
        cout << "The numbers are increasing" << endl;
    }else if(n1>n2>n3){
        {
            cout << "The numbers are increasing" << endl;
        }
    }else{
        cout << "Neither" << endl;
    }
}

double lenient(){
    cout << "Enter the three numbers to compare: " << endl;
    cin >> n1, n2, n3;
    if(n1<=n2<=n3){
        cout << "The numbers are increasing" << endl;
    }else if(n1>=n2>=n3){
        {
            cout << "The numbers are increasing" << endl;
        }
    }else if (!(n1<=n2<=n3) && !(n1>=n2>=n3)){
        cout << "Neither" << endl;
    }
}

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