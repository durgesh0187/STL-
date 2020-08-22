#include<iostream>
#include<queue>
using namespace std;

void display(queue <int> q)
{
	while(!q.empty())
	{
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}
int main()
{
	queue <int> q;
	
	q.push(2);   // first in first out 
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);

	display(q);
	
	cout<<"size of : "<<q.size()<<endl;
	cout<<"front : "<<q.front()<<endl;
	
	cout<<"After first element pop :";
	q.pop();
	display(q);
	
	
	return 0;
}
