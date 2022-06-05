#include<iostream>
using namespace std;
int count_jumlah(int num)
{
static int count=0;
    if(num>0)
    {

        if(num%10==0)
        count++;

        count_jumlah(num/10);
    }
    return count;
}
int main()
{
    int n;
    cout<<"Masukkan angka";
    cin>>n;
    cout<<"Jumlah nol dalam angka yang dimasukkan adalah "<<count_digit(n);
}
