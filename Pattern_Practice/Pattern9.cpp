// Program to print 0-1 Triangle
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include <iostream>
using namespace std;
int main()
{
    int rows;
    cin>>rows;
    for(int i=0;i<rows;i++){
        int k=(i+1)%2;
        for(int j=0;j<=i;j++){
            if(k==0){
                cout<<k;
                k++;
            }
            else{
                cout<<k;
                k--;
            }
        }
        cout<<endl;
    }
    return 0;
}
