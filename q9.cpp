#include <iostream>
#include <string>
using namespace std;

/* MUHAMMAD ASHHAR AMIR
I222420 NUCES ISB
SE B*/

string filename;

bool isConnected(){

}

float availableBandwidth(){

}

void startApplication(){

}

void stopApplication(){
    
}

string error(string err){
    cout << err << endl;
    return err;
}

char getFileType(char type){

}

void saveFile(string location, string filename){

}

bool isFileSaved(string filename){

}

string sendMessage(string message){
    
}

void filesaver(string filename){
    if(filename==".txt"){
        saveFile("Text Files", filename);
    }else if(filename==".mp3"){
        saveFile("Sound Files", filename);
    }else if(filename==".mp4"){
        saveFile("Video Files", filename);
    }else if(filename==".invalid"){
        error("Invalid File!");
}
}


void networkSend(string returnMessage, string filename){
    if((isFileSaved) && (isConnected()) && (availableBandwidth() > 10)){
        networkSend("RETURN MESSAGE", filename);
    }else{
        error("ERROR: File not saved / Not connected / Avaiable bandwitch is less than 10.0");
    }
}

void networkStartValidator(){
    if((isConnected()) && (availableBandwidth() > 2.00) ){
        startApplication();
    }else{
        error("Error: Application is not connected to the WiFi or the available bandwitch is less than 2.0");
    }
    if((isConnected()) && (availableBandwidth() > 5.00) ){
        filesaver(filename);
        
    }
}