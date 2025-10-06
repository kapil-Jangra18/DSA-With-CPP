#include <iostream>
using namespace std;
int main()
{
    // To print star pattern
    // int n;
    // cin >>n;
    // int i=1;
    // while (i<=n)
    // {
    //     int j=1;
    //     while(j<=n){
    //         cout<<"*";
    //         j=j+1;
    //     }
    //     cout<<endl;

    //     i=i+1;
    // }

    // To print triangle pattern
    // int n;
    // cin >>n;
    // int row=1;
    // while (row<=n)
    // {
    //     int col=1;
    //     while(col<=row){
    //         cout<<col;
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    // To print revrse numbers
    // int n;
    // cin >>n;
    // int i=1;
    // while(i<=n){
    //     int j=n;
    //     while(j>=1){
    //         cout<<j;
    //         j--;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // To print squarae pattern
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<j;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // To print floyd's triangle
    // int n;
    // cin>>n;
    // int row=1;
    // int value=row;
    // while(row<=n){
    //     int col=1;
    //     while(col<=row){
    //         cout<<value<<" ";
    //         value++;
    //         col++;

    //     }
    //     cout<<endl;
    //     row++;
    // }

    // To print pattern like 1 21 321 4321
    // int n;
    // cin>>n;
    // int row=1;
    // while(row<=n){
    //     int col=1;
    //     while(col<=row){
    //         cout<<(row-col+1)<<" ";
    //         col++;
    //     }
    //     cout<<endl;
    //     row++;
    // }

    // To print pattern like AAA BBB CCC
    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         char ch = 'A' + row - 1;
    //         cout << ch;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // To print pattern like ABC ABC ABC
    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         char ch = 'A' + col - 1;
    //         cout << ch;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    
    // To print pattern like ABC DEF GHI
    // int n;
    // cin >> n;
    // int row = 1;
    // char value ='A';
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         cout <<value;
    //         value++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    
    // To print pattern like ABC BCD CDE
    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         char ch = 'A'+row +col-2;
    //         cout <<ch;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // To print pattern like A BB CCC
    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         char ch = 'A'+row-1;
    //         cout <<ch;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    
    // To print pattern like A BC DEF GHIJ
    // int n;
    // cin >> n;
    // int row = 1;
    // char ch = 'A';
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout <<ch;
    //         col++;
    //         ch++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    
    // To print pattern like A BC CDE DEFG
    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         char ch = 'A'+row+col-2;
    //         cout <<ch;
    //         col++;
    //         ch++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    
    // To print pattern like D CD BCD ABCD
    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     char ch = 'A'+n-row;
    //     while (col <= row)
    //     {
    //         cout <<ch;
    //         col++;
    //         ch++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    
    //  To print pattern reverse triangle with spaces
    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     // count spaces and print
    //     int space =n-row;
    //     while(space){
    //         cout <<" ";
    //         space--;
    //     }
    //     // Print stras 
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout <<"*";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    
    // To print pattern reverse triangle without spaces
    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
        //     int col = 1;
        //     char start=n-row+1;
        //     while (col<=start)
        //     {
    //         cout <<"*";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    
    // To print pattern reverse triangle with spaces
    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     // count spaces and print
    //     int space =row-1;
    //     while(space){
    //         cout <<" ";
    //         space--;
    //     }
    //     // Print stras 
    //     int col = 1;
    //     int start=n-row+1;
    //     while (col <= start)
    //     {
    //         cout <<"*";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }
    
    // To print pattern  1 121 12321 1234321 
    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     // count spaces and print
    //     int space =n-row;
    //     while(space){
    //         cout <<" ";
    //         space--;
    //     }
    //     // Print 1st triangle
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout <<col;
    //         col++;
    //     }
    //     // Print 2nd triangle
    //     int start=row-1;
    //     while (start)
    //     {
    //         cout <<start;
    //         start--;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // To print dabang pattern

    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        // 1st triangle
        int col = 1;
        int start = n - row + 1;
        while (col <= start)
        {
            cout << col;
            col++; 
        }
        // 2nd triangle;

        int star=2*(row-1);
        while(star>0){
            cout <<"*";
            star--;
        }
        // 3rd triangle
        int k=n-row+1;
        while (k>=1)
        {
            cout << k;
            k--;
        }
        cout << endl;
        row++;
    }

    
}