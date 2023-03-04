// Alternate code to solve 0-1 triangle

#include <iostream>
using namespace std;
int main()
{
    int rows;
    cin>>rows;
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<=i;j++){
            cout<<(i+j+1)%2;
        }
        cout<<endl;
    }
}
