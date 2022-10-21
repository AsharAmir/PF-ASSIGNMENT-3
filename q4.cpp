#include <iostream>
using namespace std;

/* MUHAMMAD ASHHAR AMIR
I222420 NUCES ISB
SE B*/

void intToRoman(int number){
    //declaring the variables
    int rem, thousands, hundreds, tens, fives, ones;
    string romanConverted = "";
    //splitting the numbers using math
    thousands = number / 1000;
    rem = number % 1000;
    hundreds = rem / 100;
    rem = rem % 100;
    tens = rem / 10;
    rem = rem % 10;
    ones = rem;

    //the conversion

    // THOUSANDS
    // APPENDING TO THE EMPTY STRING AS WE ITERATE THRU THE CONVERSION USING OUR CONDITIONS
    if(thousands==1){
        romanConverted += "M";
    }else if (thousands==2){
        romanConverted += "MM";
    }else if (thousands==3){
        romanConverted += "MMM";
    }

    // HUNDREDS
    // CONCATENTATING TO THE EMPTY STRING AS WE ITERATE THRU THE CONVERSION USING OUR CONDITIONS
    if(hundreds==1){
        romanConverted += "C";
    }else if(hundreds==2){
        romanConverted += "CC";
    }else if(hundreds==3){
        romanConverted += "CCC";
    }else if(hundreds==4){
        romanConverted += "CD";
    }else if(hundreds==5){
        romanConverted += "D";
    }else if(hundreds==6){
        romanConverted += "DC";
    }else if(hundreds==7){
        romanConverted += "DCC";
    }else if(hundreds==8){
        romanConverted += "DCCC";
    }else if(hundreds==9){
        romanConverted += "CM";
    
    //TENS
    // CONCATENTATING TO THE EMPTY STRING AS WE ITERATE THRU THE CONVERSION USING OUR CONDITIONS
    if(tens==1){
        romanConverted += "X";
    }else if(tens==2){
        romanConverted += "XX";
    }else if(tens==3){
        romanConverted += "XXX";
    }else if(tens==4){
        romanConverted += "XL";
    }else if(tens==5){
        romanConverted += "L";
    }else if(tens==6){
        romanConverted += "LX";
    }else if(tens==7){
        romanConverted += "LXX";
    }else if(tens==8){
        romanConverted += "LXXX";
    }else if(tens==9){
        romanConverted += "XC";
    }

    // ONES
    // CONCATENTATING TO THE EMPTY STRING AS WE ITERATE THRU THE CONVERSION USING OUR CONDITIONS

    if(ones==1){
        romanConverted += "I";
    }else if(ones==2){
        romanConverted += "II";
    }else if(ones==3){
        romanConverted += "III";
    }else if(ones==4){
        romanConverted += "IV";
    }else if(ones==5){
        romanConverted += "V";
    }else if(ones==6){
        romanConverted += "VI";
    }else if(ones==7){
        romanConverted += "VII";
    }else if(ones==8){
        romanConverted += "VIII";
    }else if(ones==9){
        romanConverted += "IX";
    }
    }
    //displaying the final converted roman numeral string
    cout << romanConverted;
}

bool validate(int number){ //checking for the range bw 0 and 3999 using a boolean func
    if(number > 0 && number < 3999){
        return true;
    }else{
        return false;
    }
}

// error prompt
void error(string err){
    cout << err;
}


//main func
int main(){
    //calling for inputs
    int number;
    cout << "Input the decimal number to convert to roman: " << endl;
    cin >> number;
    //if range validation passed, proceed to the conversion, else raise an error
    if (validate(number)){
        intToRoman(number);
    }else{
        error("Number Out Of Range");
    }
}

