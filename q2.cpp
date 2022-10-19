#include <iostream>
using namespace std;

bool DS_L, DS_R, CL, ML, R_IL, R_OL, L_IL, L_OL, GEAR;
// dashboard left, dashboard right, child lock, master lock, right inside lock, right outside lock, left inside lock, left outside lock, gearshift

bool getswitchstatus(){
    cout << "Dashboard Switch Left Door Lock (Activated = 1, Off = 0): " << endl;
    cin >> DS_L;
    cout << "Dashboard Switch Right Door Lock (Activated = 1, Off = 0): " << endl;
    cin >> DS_R;
    cout << "Child Lock (Activated = 1, Off = 0): " << endl;
    cin >> CL;
    cout << "Master Unlock (Activated = 1, Off = 0): " << endl;
    cin >> ML;
}

bool gethandle(){
    cout << "Inside Handle Left Door Lock (Activated = 1, Off = 0): " << endl;
    cin >> L_IL;
    cout << "Inside Handle Right Door Lock (Activated = 1, Off = 0): " << endl;
    cin >> R_IL;
    cout << "Outside Handle Left Door Lock (Activated = 1, Off = 0): " << endl;
    cin >> L_OL;
    cout << "Outside Handle Right Door Lock (Activated = 1, Off = 0): " << endl;
    cin >> R_OL;

}

bool getgearshift(){
    cout << "Gearshift Status (P = 1, (R,N,D,1,2,3)=0): " << endl;
    cin >> GEAR;
}

// bool validate(){
//     if(ML==false){
//         if(GEAR==true){
//             if(CL==false){
//                 if(DS_L==false){
//                     cout << "Left door opens"
//                 }else if(DS)
//             }
//         }
//     }
// }

bool validate(){

}

int control(){
    switch (ML)
    {
    case false:
        switch (GEAR)
        {
        case true:
            switch (CL)
            {
            case false:
                switch (DS_L || L_IL || L_OL)
                {
                case false:
                    cout << "Left Door Opens";
                case true:
                    switch (DS_R || R_IL || R_OL)
                    {
                    case false:
                        cout << "Right Door Opens";
                    default:
                        break;   
                    }
                }
            
            case true:
                switch (L_OL)
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
    }
}

int main(){
    getswitchstatus();
    gethandle();
    getgearshift();
    control();
}


//do input validation and check output w values 

