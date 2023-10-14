/*Takes length of the password as input and generates a new password*/

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

string getPassword(int length){
    string password = "";
    string characters = "aquickbrownfoxjumpsoverthelazydog@#$%&AQUICKBROWNFOXJUMPSOVERTHELAZYDOG0123456789";
    int charSize = characters.size();
    srand(time(0));
    int randomIndex;
    for(int i=0; i<length; i++){
        randomIndex = rand()%charSize;
        password = password + characters[randomIndex]; 
    }
    return password;
}

int main(){
    int length;
    cout << "Enter length of the password (minimum length of 8 is required): "; 
    cin >> length;
    if(length < 8){
        cout << "Invalid length" << endl << "Can't generate Password for length less than 8" << endl;
        main();
        exit(0);
    }
    string password = getPassword(length);
    cout << "Generated Password : " << password << endl;

    return 0;
}