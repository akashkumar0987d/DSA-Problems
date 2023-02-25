// charcter pattern
// A
// BC
// DEF
// GHIJ
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=65;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<(char)k++;
        }
        cout<<endl;
    }
    return 0;
}
