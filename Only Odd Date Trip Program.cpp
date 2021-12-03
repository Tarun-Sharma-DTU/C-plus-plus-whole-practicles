#include<iostream>
using namespace std;

int main()
{
    int date_day, pocket_money = 6000;

    for (int i = 1; i < 31; i++)
    {
        if (i%2==0)
        {
            continue;
        }
        if (pocket_money<=0)
        {
            break;
        }
        
        cout<<i<<" : You Can Go Outside And Enjoy."<<endl;
        pocket_money -= 300;
    }
    
}