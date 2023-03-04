// Program to print hollow rhombus pattern

#include <iostream>
using namespace std;
int main()
{
    int rows;
    cin>>rows;
    for(int i=0;i<rows;i++){
        for(int j=0;j<2*rows-1;j++){
            if((i==0||i==rows-1)&&(j>rows-i-2&&j<2*rows-i-1)){
                cout<<"*";
            }
            else if(j==rows-i-1||j==2*rows-i-2){
                cout<<"*";
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
}
