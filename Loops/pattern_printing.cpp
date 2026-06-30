

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


    // // 1 2 3 4 5
    // //     *      1
    // //     *      2
    // // * * * * *  3
    // //     *      4
    // //     *      5

    // int n;
    // cout<< "Enter the value of n (odd integer): ";
    // cin>> n;
    // if (n%2==0){
    //     cout<< "Invalid input"<< endl;
    //     return 0;
    // }
    // int m = (n/2)+1;
    // for (int i = 1; i<=n; i++){
    //     for (int j = 1; j<=n; j++){
    //         if (i==m or j==m){
    //             cout<< "*";
    //         }
    //         else{
    //             cout<< " ";
    //         }
    //     }
    //     cout<< endl;
    // }
        

    // // 123456
    // // ******  1
    // // *    *  2
    // // *    *  3
    // // ******  4


    // int m,n;
    // cout<< "Enter the value of row number: ";
    // cin>> m;
    // cout<< "Enter the value of column number: ";
    // cin>> n;

    // for (int i = 1; i<=m; i++){
    //     for (int j = 1; j<=n; j++){
    //         if (i==1 or j==1 or i==m or j==n){
    //             cout<< "*";
    //         }
    //         else{
    //             cout<< " ";
    //         }
    //     }
    //     cout<< endl;
    // }


    // // 12345
    // // *   * 1
    // //  * *  2
    // //   *   3
    // //  * *  4
    // // *   * 5

    // int n;
    // cout<< "Enter the value of n (odd integer): ";
    // cin>> n;
    // if (n%2==0){
    //     cout<< "Invalid input"<< endl;
    //     return 0;
    // }

    // for (int i = 1; i<=n; i++){
    //     for (int j = 1; j<=n; j++){
    //         if ((i==j) or (i+j)==(n+1)){
    //             cout<< "*";
    //         }
    //         else{
    //             cout<< " ";
    //         }
    //     }
    //     cout<< endl;
    // }



    // // 12345
    // //     *  1
    // //    **  2
    // //   ***  3
    // //  ****  4
    // // *****  5 

    // // (1,5)
    // // (2,4), (2,5)
    // // (3,3), (3,4), (3,5)
    // // (4,2), (4,3), (4,4), (4,5)
    // // (5,1), (5,2), (5,3), (5,4), (5,5)

    // // method 1
    // int n;
    // cout<< "Enter the value of n: ";
    // cin>> n;
    // for (int i = 1; i<=n; i++){
    //     for (int j = 1; j<=n; j++){
    //         if ((i+j)>=(n+1)){
    //             cout<< "*";
    //         }
    //         else{
    //             cout<< " ";
    //         }
    //     }
    //     cout<< endl;
    // }

    // // method 2
    // int n;
    // cout<< "Enter the value of n: ";
    // cin>> n;
    // for (int i = 1; i<=n; i++){
    //     for (int j = 1; j<=(n-i); j++){
    //         cout<< " ";
    //     }
    //     for (int k = 1; k<=i; k++){
    //         cout<< "*";
    //     }
    //     cout<< endl;
    // }



    // // 1234567
    // //    ****  1  
    // //   ****   2
    // //  ****    3
    // // ****     4
    
    // int n;
    // cout<< "Enter the value of n: ";
    // cin>> n;
    // for (int i = 1; i<=n; i++){
    //     for (int j = 1; j<=(n-i); j++){
    //         cout<< " ";
    //     }
    //     for (int k = 1; k<=n; k++){
    //         cout<< "*";
    //     }
    //     for (int l = 1; l<=(i-1); l++){
    //         cout<< " ";
    //     }
    //     cout<< endl;
    // }
    


    // // 1234567
    // //    *     1
    // //   ***    2
    // //  *****   3
    // // *******  4 

    // int n;
    // cout<< "Enter the value of n: ";
    // cin>> n;
    // for (int i = 1; i<=n; i++){
    //     for (int j = 1; j<=(n-i); j++){
    //         cout<< " ";
    //     }
    //     for (int k = 1; k<=(2*i-1); k++){
    //         cout<< "*";
    //     }
    //     for (int l = 1; l<=(n-i); l++){
    //         cout<< " ";
    //     }
    //     cout<< endl;
    // }


    // 12345
    //   *     1
    //  ***    2
    // *****   3
    //  ***    4
    //   *     5

    // 2 1 2
    // 1 3 1
    // 0 5 0
    // 1 3 1
    // 2 1 2


    // TO BE CONTINUED.....
    int n;
    cout<< "Enter the value of n: ";
    cin>> n;
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=(n-i); j++){
            cout<< " ";
        }
        for (int k = 1; k<=(2*i-1); k++){
            cout<< "*";
        }
        for (int l = 1; l<=(n-i); l++){
            cout<< " ";
        }
        cout<< endl;
    }


}