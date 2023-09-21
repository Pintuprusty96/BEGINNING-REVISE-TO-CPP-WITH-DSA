// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number: ";
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         cout<<i*2;
//         cout<<endl;
//     }
// }

// Print “India will win the World Cup 2023”, 20 times

#include <iostream>
using namespace std;

int main()
{
    // int wintimes;
    // cin>>wintimes;

    // for(int i=1; i<=wintimes; i++){
    //     cout<<"win INDIA the World cup";

    // cout<<endl;
    // }

    // Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        if(i%4==0){
            cout<<i<<endl;
        }
    }
}