
#include <iostream>

using namespace std;

int factorial(int n,int r)
{
    int result=1;
    for(int i=0; i<r; i++)
    {
        result*=(n-i);
        result/=(i+1);
    }
  return result;
}
int main()
{
    cout<<"Factorial with O(r) time cmplexity"<<endl;
    cout<<"4C2 "<<factorial(4,2)<<endl;

    return 0;
}
