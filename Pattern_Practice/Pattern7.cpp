// Program to print inverted half pyramid with numbers
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include <iostream>
using namespace std;
int main()
{
    int rows;
    cin>>rows;
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            if(j<rows-i){
                cout<<(j+1);
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
}
