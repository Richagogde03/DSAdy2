#include<iostream>
using namespace std;

//call by value

int call_by_value(int n)
{
	cout<<"address of n in call_by_value:"<<&n<<endl;
	n *=n;
	return n;
}
void call_by_reference_pointer(int* n)
{
	cout<<"address of n in call_by_reference function :"<<n<<endl;
	*n *=*n;
}
void call_by_reference_address(int& n)
{
	cout<<"address of n in call_by_value function : "<<&n<<endl;
	n *=n;
}

int main()
{
	int n = 8;
	cout<<"address of n in main() :"<<&n<<endl;
	call_by_reference_address(n);
	cout<<"ans :"<<n<<endl;
	cout<<"value of n :"<<n<<endl;
	return 0;
}
