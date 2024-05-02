#include <iostream>
#include <string>
#include <cctype>
 using namespace std;
int main(){
    string phrase = "vive la plateforme !";

    for (char &c : phrase){
        if (islower(c)){
         c = toupper(c);
        }
    }
     cout<<phrase<<endl;
     return 0;
}