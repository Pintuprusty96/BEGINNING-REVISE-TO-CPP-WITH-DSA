#include <iostream>
using namespace std;

int main(){
    // char c;
    // cout<<"Enter you charector: ";
    // cin>>c;
    // if(c=='a' || c=='e' || c== 'i' || c=='o' || c=='u'){
    //     cout<<"vowel";

    // }
    // else{
    //     cout<<"consonate";
    // }

    int n;
    cin>>n;
    switch (n)
    {
    case /* constant-expression */1:
        cout<<"January";
        /* code */
        break;
    case 2:
        cout<<"Feb";
        break;
    case 3:
        cout<<"March";
        break;
    case 4:
        cout<<"April";
        break;
    case 5:
        cout<<"May";
        break;
    case 6:
        cout<<"June";
        break;
    case 7:
        cout<<"July";
        break;
    case 8:
        cout<<"Aug";
        break;
    case 9:
        cout<<"Sep";
        break;
    case 10:
        cout<<"Oct";
        break;
    case 11:
        cout<<"Nuv";
        break;
    case 12:
        cout<<"Dec";
        break;
    
    default:
        cout<<"Please Enter a valid number ";
        break;
    }
}