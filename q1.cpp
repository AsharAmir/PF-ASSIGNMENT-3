#include <iostream>
using namespace std;
int StartTime_One, EndTime_One, StartTime_Two, EndTime_Two, date_One, date_Two;

/* MUHAMMAD ASHHAR AMIR
I222420 NUCES ISB
SE B*/

//[error promts]
void error(string err){
    cout << err;
}

//Getting the end and start time of every appointment from the user using a void func
void gettime(){
    cout << "What is the time your first appointment is scheduled to start at (in 24h)? " << endl;
    cin >> StartTime_One;
    cout << "What is the time your first appointment is scheduled to end at (in 24h)? " << endl;
    cin >> EndTime_One;
    cout << "What is the time your second appointment is scheduled to start at (in 24h)? " << endl;
    cin >> StartTime_Two;
    cout << "What is the time your second appointment is scheduled to end at (in 24h)? " << endl;
    cin >> EndTime_Two;

}

//using a non return void function to get the date(day) for both the appointments
void getdate(){    
    cout << "What is the date your first appointment is scheduled for? " << endl;
    cin >> date_One;
    cout << "What is the date your second appointment is scheduled for? " << endl;
    cin >> date_Two;
}

//a bool function to check .. if day > 31{raise an error}else{pass} or if time>23{raise an error}else{pass} 
bool validate(){
    if((date_One > 31 || date_Two > 31) && (StartTime_One > 23 || StartTime_Two > 23 || EndTime_One > 23 || EndTime_Two > 23)){
        error("Invalid date/time entered");
        return false;
    }else
    return true;
}

//the algo to verify if overlapping exists between two appointments 
//by checking if startTime of appointmentTwo > endTime of appointmentOne
//if overlappign exists, func returns false
//else returns true
bool isoverlapping(){
    if (validate()){
        if(date_One == date_Two){
            if (StartTime_Two < EndTime_One){
                error("The appointments are overlapping!");
                return true;
        }
        return false;
    }return true;
    }return true;   
}

//main func
//calling all the functions
//checking if validate returns true, we move to isOverlapping func, if true, appointments overlap, else they dont.
//we cout suitable prompts
int main(){
    getdate();
    gettime();
    if(validate()){
        if(isoverlapping()){
    }   else{
        cout << "The appointments are not overlapping!";
    }
    }else{
        error(".");
    }
    
    return 0;
}


