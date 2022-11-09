#include<iostream>
using namespace std;

class Node
{
	public:
		int *data;
		node *next;
};

Node *input(Node* head, int d)
{
	
}

int main()
{
	int n;
	Node *head = NULL;
	cout<<"enter number of elements in a list"<<endl;
	cin>>n;
	cout<<"enter elements"<<endl;
	int temp;
	cin>>temp;
	
	head = new Node();
	head->data = temp;
	head->next = NULL;
	
	for(int i=0; i<n-1; i++)
	{
		cin>>temp;
		head = input(head,temp);
	}
	
}

