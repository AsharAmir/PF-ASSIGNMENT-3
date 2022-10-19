#include <iostream>
#include <iomanip>
using namespace std;

double calculated, value;
double convert(string from, string to){
    if(from == "fl .oz" && to == "ml"){
        calculated = value * 29.57;
    }else if(from == "fl .oz" && to == "l"){
        calculated = value * 0.02957;
    }else if(from == "gal" && to == "ml"){
        calculated = value * 3758.41;
    }else if(from == "gal" && to == "l"){
        calculated = value * 3.78;
    }else if(from == "lb" && to == "g"){
        calculated = value * 453.59;
    }else if(from == "lb" && to == "kg"){
        calculated = value * 0.45359;
    }else if(from == "oz" && to == "g"){
        calculated = value * 28.34;
    }else if(from == "oz" && to == "kg"){
        calculated = value * 0.02834;
    }else if(from == "in" && to == "mm"){
        calculated = value * 25.4;
    }else if(from == "in" && to == "cm"){
        calculated = value * 2.54;
    }else if(from == "in" && to == "m"){
        calculated = value * 0.0254;
    }else if(from == "in" && to == "km"){
        calculated = value * 0.0000254;
    }else if(from == "ft" && to == "mm"){
        calculated = value * 304.8;
    }else if(from == "ft" && to == "cm"){
        calculated = value * 30.48;
    }else if(from == "ft" && to == "m"){
        calculated = value * 0.3048;
    }else if(from == "ft" && to == "km"){
        calculated = value * 0.0003048;
    }else if(from == "mi" && to == "mm"){
        calculated = value * 1609000;
    }else if(from == "mi" && to == "cm"){
        calculated = value * 160934;
    }else if(from == "mi" && to == "m"){
        calculated = value * 1609.34;
    }else if(from == "mi" && to == "km"){
        calculated = value * 1.609;
    }

    return calculated;
        
}

string err(string err){
    cout << err;
    return err;
}

bool check(string from, string to){
    if((from == "fl .oz" || from == "gal") && (to == "ml" || to == "l")){
        // convert(from, to);
        return true;
    }else if(from == "lb" || from == "oz" && (to == "g" || to == "kg")){
        // convert(from, to);
        return true;
    }else if((from == "in" || from == "ft" || from == "mi") && (to == "mm" || to == "cm" || to == "m" || to == "km")){
        // convert(from, to);
        return true;
    }else{
        return false;
    }
    
}   

int main(){
    string from, to;
    cout << "Convert from (fl. oz, gal, oz, lb, in, ft, mi): " << endl;
    cin >> from;
    cout << "Convert to (ml, l, g, kg, mm, cm, m, km): " << endl;
    cin >> to;
    cout << "Value: " << endl;
    cin >> value;
    //check(from, to);
    if ((check(from, to)) == true){
        cout << value << " " << from << " = " << fixed <<  convert(from, to) << " " << to;
    }else{
        err("invalid conversion");
    }
    
}