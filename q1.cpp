#include <iostream>
using namespace std;
int StartTime_One, EndTime_One, StartTime_Two, EndTime_Two, date_One, date_Two;

void error(string err){
    cout << err;
}

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

void getdate(){    
    cout << "What is the date your first appointment is scheduled for? " << endl;
    cin >> date_One;
    cout << "What is the date your second appointment is scheduled for? " << endl;
    cin >> date_Two;
}

bool validate(){
    if((date_One > 30 || date_Two > 30)){
        error("Invalid date entered");
        return false;
    }//also add time range validaiton
    return true;
}

bool isoverlapping(){
    if (validate()){
        if(date_One == date_Two){
            if (StartTime_Two < EndTime_One){
                error("Two appoitments are overlapping");
                return true;
        }
        return false;
    }return true;
    }
}

int main(){
    getdate();
    gettime();
    if(validate()){
        if(isoverlapping()){
        // error("Two appoitments are overlapping");
    }   else{
        cout << "dates r fine!";
    }
    }else{
        error("invalid date entered"); //eror here
    }
    
    return 0;
}

//inpout validation andrecheck
