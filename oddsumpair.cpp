#include <iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if ((a+b)%2==1 || (b+c)%2==1 || (c+a)%2==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    
    
    
    
    }   
    return 0;


}
