#include <iostream>
using namespace std;
int main()

{
    int num= 0;
    int sum=0;
    int total=0;
	do
   {
   cout << "Enter an integer: " ;
   cin >> num ;
   sum = sum + num;
   total++;
	} while(sum <= 4000);
   
	cout << "The total is " << sum << endl;
	
	cout << "Number of integers:" << total << endl;
 return 0;
}
 
 //OR//

 int main()
{
    int num;
    double sum = 0.0;

    cout <<"Enter positive numbers: ";
    
    do
    {
        cin >> num;
        sum += num;
    } while (sum <= 4000);
    
    
    cout <<" The sum is " << sum << endl;
}
