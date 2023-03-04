// Program to print Floyd's triangle
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <iostream>
using namespace std;
int main()
{
    int rows;
    cin>>rows;
    int k=1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<=i;j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }
    return 0;
}
