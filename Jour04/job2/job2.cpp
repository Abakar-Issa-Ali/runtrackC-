#include <iostream>

using namespace std;

int main(){
    int variable1 = 10;
    int variable2 = 20;

    cout<<"Avant l'echange :"<< endl;
    cout<< "variable1 = " <<variable1 <<" et "<<"variable2 = "<< variable2<<endl;
    
    int *ptr1 = &variable1;
    int *ptr2 = &variable2;

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    
    cout<<"Apres l'echange :"<< endl;
    cout<<"variable1 = " <<variable1 <<" et "<<"variable2 = "<< variable2<<endl;

    return 0;
}