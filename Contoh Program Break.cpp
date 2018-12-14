#include<iostream>
using namespace std;
int main()
{
    int a=1,jumlah=0;
    cout<<"=======PROGRAM BREAK======="<<endl;
    cin>>jumlah;
    cout<<"Hasilnya\n";
   for(int a=1;a<=jumlah;a++)
    {
        if(a>3)break;
        cout<< a <<endl;
    }
    return 0;
}
