#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int f ( int x )
{
	return x * x - 5 * x + 6;
}
main ()
{
	int x;
	
	cout<<"Please enter x:"<<endl;
	cin>>x;
	
	int y;
	y = f ( x );
	cout<<"f(x)="  <<y;
}
