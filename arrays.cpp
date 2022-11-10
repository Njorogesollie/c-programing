//Program to Store values entered by user in 3D array and display it
#include <iostream>
using namespace std;
int main() {
//variable declaration
int i;
int j;
int k;
// This array can store upto 18 elements from 11 to 28 (2x3x3)
    int a[2][3][3]={ {{11, 12, 13}, {14, 15, 16}, {17, 18, 19}},{{20, 21,22},{23, 24, 25}, {26, 27, 28}} };
// use of nested 'for loop '
// access matrix of the array
    for(i=0;i<2;i++)
    {
// access rows of the array
        for(j=0;j<3;j++)
    {
// access columns of the array
        for(k=0;k<3;k++)
        {
// Printing array elements with their proper indexes
   cout << "a[" << i << "][" << j << "][" << k << "] = " <<a[i][j][k]<< endl; 
        }
    }
    }
    
    return 0;
}

