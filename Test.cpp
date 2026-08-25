// This is just me playing with what i know so far it will probably break lowkey
#include <iostream>

using namespace std;

int main(){
    cout << "Hello. Isabelle." << endl;
    cout << "How are you?..... ";
    
    string Feeling;
    getline(cin, Feeling);

    cout << "Well I am a dumb program but I hope you said Good!" << endl;
    cout << "Now... tell me youe favorite song right now... ";

    
    string song;
    getline(cin, song);

    cout << "WOW WAIT REALLY I LOVE " << song <<  "!!! WE SHOULD BE FRIENDS!!" << endl;
    cout << "Goodbye Isabelle.";

    cout << endl;

    return 0;



}