

#include <iostream>
using namespace std;

int main(){

    // // 4
    // // 4 3
    // // 4 3 2 
    // // 4 3 2 1

    // int n;
    // cout<< "Enter the value of n: ";
    // cin>> n;
    // for (int i = n; i>=1; i--){
    //     for (int j = n; j>=i; j--){
    //         cout<< j << " ";
    //     }
    //     cout<< endl;
    // }


    // // 1
    // // 1 3
    // // 1 3 5
    // // 1 3 5 7

    // int n;
    // cout<< "Enter the value of n: ";
    // cin>> n;
    // for (int i = 1; i<=n; i++){
    //     int a = 0;
    //     for (int j = 1; j<=i; j++){
    //         cout<< j + a << " ";
    //         a++;
    //     }
    //     cout<< endl;
    // }


    // // 1
    // // 2 3
    // // 4 5 6
    // // 7 8 9 10

    // int n;
    // cout<< "Enter the value of n: ";
    // cin>> n;
    // int a = 1;
    // for (int i = 1; i<=n; i++){
    //     for (int j = 1; j<=i; j++){
    //         cout<< a << " ";
    //         a++;
    //     }
    //     cout<< endl;
    // }


    // 1
    // 0 1
    // 1 0 1 
    // 0 1 0 1

    // // WRONG METHOD ❌❌ FAILS AT ODD n
    // int n;
    // cout<< "Enter the value of n: ";
    // cin>> n;
    // int a = 1;
    // for (int i = 1; i<=n; i++){
    //     for (int j = 1; j<=i; j++){
    //         cout<< a << " ";
    //         a==1?a=0:a=1;
    //         // a++;
    //     }
    //     cout<< endl;
    // }
    
    // // RIGHT METHOD BUT LITTLE BIT COMPLEX
    // int n;
    // cout<< "Enter the value of n: ";
    // cin>> n;
    // for (int i = 1; i<=n; i++){
    //     for (int j = 1; j<=i; j++){
    //         cout<< (((i+j)%2)+1)%2 << " ";
    //     }
    //     cout<< endl;
    // }

    // // RIGHT METHOD AND EASY TO UNDERSTAND
    // int n;
    // cout<< "Enter the value of n: ";
    // cin>> n;
    // for (int i = 1; i<=n; i++){
    //     for (int j = 1; j<=i; j++){
    //         if((i+j)%2 == 0) cout<<"1 ";
    //         else cout<<"0 ";
    //     }
    //     cout<< endl;
    // }



    //     *
    //     *
    // * * * * *
    //     *
    //     * 

    int n;
    cout<< "Enter the value of n: ";
    cin>> n;
    int m = n/2;
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=i; j++){
            if((i+j)%2 == 0) cout<<"1 ";
            else cout<<"0 ";
        }
        cout<< endl;
    }
        

}