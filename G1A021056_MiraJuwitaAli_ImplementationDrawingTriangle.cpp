#include <iostream>
 
using namespace std;
void printbentuk(int n, int k)
{
    if (n < 0) 
        return;

    printbentuk(n - 1, k + 1);
 
    int i;
    for (i = 0; i < k; i++) 
        cout << " ";
    for (i = 0; i < n; i++) 
        cout<<"* ";
    cout<<"\n";
}
 
int main()
{
    int n = 7;
 
    printbentuk(n, 0);
    return 0;
}
