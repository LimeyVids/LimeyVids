// This is just me playing with what i know so far it will probably break lowkey
#include <iostream>

using namespace std;

int main(){
    cout << "Hello INPUT_NAME! oh wait what's your name? ";
    string INPUT_NAME;
    getline(cin, INPUT_NAME);
    

    
    cout << "Hello. " << INPUT_NAME << "!" << endl;


    cout << "How are you?..... ";
    
    string Feeling;
    getline(cin, Feeling);

    cout << "Well I am a dumb program but I hope you said Good!" << endl;
    cout << "Now... tell me your favorite song right now... ";

    
    string song;
    getline(cin, song);

    cout << "WOW WAIT REALLY I LOVE " << song <<  "!!! WE SHOULD BE FRIENDS!!" << endl;
    cout << "Goodbye " << INPUT_NAME << "!" << endl;

    cout << endl;

    return 0;



}