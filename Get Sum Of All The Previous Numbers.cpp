#include<iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cin>>num;

    for (int i = 0; i < num; i++)
    {
        sum += i;
    }

    cout<<"Sum of all the previous numbers is : "<<sum;
    
    return 0;
}