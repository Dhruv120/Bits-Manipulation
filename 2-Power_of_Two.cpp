#include <iostream>
using namespace std;
// for all 2^n numnber (n & n-1= 0) 
bool ispower(int n)
{
    return (n && !(n & n-1));
}
int main()
{
    int n;
    cin>>n;
    cout<<ispower(60);
}