#include <iostream>
using namespace std;

double cost, A_saved_if_B, A_saved_if_C;

void packageA_Cost(double consumption){
    if (consumption > 2){
       cost = (100 + ((consumption-2)/0.1)*30);
       cout << cost << " PKR due" << endl;
       if (cost>1000 && consumption > 2){
        cout << "The user would save " << cost-1000 << " PKR if they switch to package C" << endl;
       }else if(consumption < 5.5 && consumption > 2){
        cout << "The user would save " << cost-250 << " PKR if they switch to package B" << endl;
       }
    }else{
        cout << "100 PKR due" << endl;
    }
    
}   

void packageB_Cost(double consumption){
    cost = (250 + ((consumption-5.5)/0.1)*20);
    if (consumption > 5.5){
       cout << cost << " PKR due" << endl;
    }else{
        cout << "250 PKR due" << endl;
    }
    if (cost>1000 && consumption > 5.5){
        cout << "The user would save " << cost-1000 << " PKR if they switch to package C" << endl;
    }else if (consumption < 2){
        cout << "The user would save " << cost-100 << " PKR if they switch to package A" << endl;
    }
    
}

void packageC_Cost(double consumption){
    cout << "1000 PKR due" << endl;
    cost = 1000;
    if (consumption < 2){
        cout << "The user would save " << cost-100 << " PKR if they switch to package A" << endl;
    }else if(consumption > 2 && consumption < 5.5){
        cout << "The user would save " << cost-250 << " PKR if they switch to package B" << endl;
    }
}

int main(){
    char packageSelection;
    double consumption;
    cout << "Input the package you're currently subscribed to: " << endl;
    cin >> packageSelection;
    cout << "Input your monthly consumption: " << endl;
    cin >> consumption;
    if (packageSelection == 'A'){
        packageA_Cost(consumption);
    }else if (packageSelection == 'B'){
        packageB_Cost(consumption);
    }else{
        packageC_Cost(consumption);
    }
    
    
}