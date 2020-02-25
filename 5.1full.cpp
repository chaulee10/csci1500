#include <iostream>
using namespace std;

int main()
{
    int fib[20];
    double ratio;
    fib[0]=1, fib[1] =1;

    cout <<"FIB# \t RATIO " << endl;
    for (int i=2; i<20; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        cout.setf(ios::showpoint);
        cout.setf(ios::fixed);
        cout.precision(8);
        ratio = (float)fib[i]/(float) fib[i-1];
        cout << fib[i] << "\t" << ratio << endl;
    }

    
}