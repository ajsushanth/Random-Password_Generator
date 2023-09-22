/*Takes length of the password as input and generates a new password*/

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

string getPassword(int length){
    string password = "";
    string characters = "aquickbrownfoxjumpsoverthelazydogAQUICKBROWNFOXJUMPSOVERTHELAZYDOG0123456789";
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
    cout << "Enter length of the password: ";
    cin >> length;
    string password = getPassword(length);
    cout << "Generated Password : " << password << endl;

    return 0;
}