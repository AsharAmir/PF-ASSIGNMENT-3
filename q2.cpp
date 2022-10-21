#include <iostream>
using namespace std;

/* MUHAMMAD ASHHAR AMIR
I222420 NUCES ISB
SE B*/

bool DS_L, DS_R, CL, ML, R_IL, R_OL, L_IL, L_OL, GEAR;
// dashboard left, dashboard right, child lock, master lock, right inside lock, right outside lock, left inside lock, left outside lock, gearshift

//getting the switch status from user in a boolean value by using a void func
void getswitchstatus(){
    cout << "Dashboard Switch Left Door Lock (Activated = 1, Off = 0): " << endl;
    cin >> DS_L;
    cout << "Dashboard Switch Right Door Lock (Activated = 1, Off = 0): " << endl;
    cin >> DS_R;
    cout << "Child Lock (Activated = 1, Off = 0): " << endl;
    cin >> CL;
    cout << "Master Unlock (Activated = 1, Off = 0): " << endl;
    cin >> ML;
}

//getting the inside/outside handle status from user in a boolean value by using a void func
void gethandle(){
    cout << "Inside Handle Left Door Lock (Activated = 1, Off = 0): " << endl;
    cin >> L_IL;
    cout << "Inside Handle Right Door Lock (Activated = 1, Off = 0): " << endl;
    cin >> R_IL;
    cout << "Outside Handle Left Door Lock (Activated = 1, Off = 0): " << endl;
    cin >> L_OL;
    cout << "Outside Handle Right Door Lock (Activated = 1, Off = 0): " << endl;
    cin >> R_OL;

}

//getting the gear status from user in a boolean value by using a void func
void getgearshift(){
    cout << "Gearshift Status (P = 1, (R,N,D,1,2,3)=0): " << endl;
    cin >> GEAR;
}

//checking if just 0 and 1's entered 
//returning false if invalid boolean values entered
//else true
bool validate(){
    if(DS_L == 1 || DS_L == 0 || DS_R == 1 || DS_R == 0 || CL == 1 || CL == 0 || ML == 1 || ML == 0 || R_IL == 1 || R_IL == 0 || R_OL == 1 || R_OL == 0 || L_IL == 1 || L_IL == 0 || L_OL == 1 || L_OL == 0 || GEAR == 1 || GEAR == 0){
        return true;
    }else{
        return false;
    }
}

//[error promts]
void error(string err){
    cout << err;
}

//the function where all the algorithm applies.
void control(){
    switch (ML)//making a switch 
    {
    case false:
        switch (GEAR)
        {
        case true:
            switch (CL)
            {
            case false:
                switch (DS_L || L_IL || L_OL)//if dashboard left or left inside handle or left outside handle open, left door opens as long as gear in park and childlock deactivated
                {
                case false:
                    cout << "Left Door Opens";
                case true:
                    switch (DS_R || R_IL || R_OL)//if dashboard right or right inside handle or right outside handle open, right door opens as long as gear in park and childlock deactivated
                    {
                    case false:
                        cout << "Right Door Opens";
                    default:
                        break;   
                    }
                }
            
            case true:
                switch (L_OL)//else if childlock is applied, only outside handles work
                {
                case false:
                    cout << "Right Door Opens";
                
                case true:
                    switch (R_OL)
                    {
                    case false:
                        cout << "Left Door Opens";
                    
                    default:
                        break;
                    }
                }
            }
        
        default:
            break;
        }
    
    default:
        break;
    }//checking if all locks are locked, we say that both doors are closed
    if(DS_L == 1 && DS_R == 1 && CL == 1 && ML == 1 && R_IL == 1 && R_OL == 1 && L_IL == 1 && L_OL == 1 && GEAR == 1){
        cout << "Both doors stay closed!";
    }
}

//main func
// we call the functions here
// if validatation is passed(all boolean values given), we move on to getting the other switch statuses
// otherwise we raise an error promt using our error prompt function
int main(){
    if (validate()){
        getswitchstatus();
        gethandle();
        getgearshift();
        control();
    }else{
        error("Invalid input entered!");
    }
    
}



