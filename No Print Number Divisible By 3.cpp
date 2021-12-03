#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Input The Number Till That You Want To Print : ";
    cin>>num;

    for (int i = 0; i <= num; i++)
    {
        if(i%3==0)
        {
            continue;
        }
        cout<<i<<endl;
    }
    
    return 0;
}