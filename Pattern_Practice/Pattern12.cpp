// Program to print solid rhombus

#include <iostream>
using namespace std;
int main()
{
    int rows;
    cin>>rows;
    for(int i=0;i<rows;i++){
        for(int j=0;j<2*rows-1;j++){
            if(j>rows-i-2&&j<2*rows-i-1){
                cout<<"*";
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
}
