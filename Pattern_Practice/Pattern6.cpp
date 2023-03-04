// Program to print inverted half pyramid:- 

//    *
//   **
//  ***
// ****

#include <iostream>
using namespace std;
int main()
{
    int rows;
    cin>>rows;
	  for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            if(j>=rows-i-1){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}
