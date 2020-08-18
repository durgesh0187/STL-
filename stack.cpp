#include <iostream>
#include <stack>
using namespace std;

void printStack(stack <int> s)
{
	while(!s.empty())
	{
		cout<<s.top()<<" ";  // s.top(); is use for print stack from last to first 
		s.pop();   
	}
}


int main()
{
	stack<int>s;
	
	s.push(2);  // first push
	s.push(3);
	s.push(4);
	s.push(5);  // last push  
	
    //	cout<<s.size();    use for check size 
    //  cout<<s.empty();    use for stack empty
    
    printStack(s);  
    
    return 0;
}
