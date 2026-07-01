

// // PASCAL TRIANGLE

// // 0 1 2 3 4  
// //     1            0
// //    1 1          1
// //   1 2 1        2
// //  1 3 3 1      3
// // 1 4 6 4 1    4

// // EVERY CELL IS icj

// #include <iostream>
// using namespace std;

// int fact(int n){
//     int fact = 1;
//     for (int i = 1; i<=n; i++){
//         fact  = fact * i;
//     }
//     return fact;
// }

// int icj(int n, int r){
//     return fact(n)/(fact(r)*fact(n-r));
// }

// int main(){

//     int n;
//     cout<< "Enter value of n: ";
//     cin>> n;
//     for (int i = 0; i<=n-1;i++){

//         for  (int k = 0; k<=(n-i+1); k++){
//             cout << " ";
//         }
//         for  (int j = 0; j<=i; j++){
//             cout << icj(i,j) << " ";
//         }
//         cout<< endl;
//     }

//     return 0;
// }


