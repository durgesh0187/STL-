#include <bits/stdc++.h>
#include <map>

using namespace std;
int main()
{
	map<int, int>person;
	
	person.insert({1,50});
	person.insert({3,70});
	person.insert({2,60});
	person.insert({4,100});
	
	// map print
	for(auto itr=person.begin(); itr != person.end(); ++itr)
	{
		cout<< itr->first <<" "<< itr->second<<endl;
	}
	
	// .begin() -> retrun iterator
	cout<<"map first key and value :  ";
	auto var=person.begin();
	cout<< var->first <<" "<< var->second<<endl;
	
	// .end() is not actual map
	
	// .size()
	cout<<"Total no. of size map is : ";
	cout<< person.size() <<endl;
	
	// .erase()
	auto it = person.find(3);
	person.erase(it);  // 3 number key is erase
	
	// .empty -> wether map is empty or not
	// 0 -> if map is  empty then return 0
	// 1 -> if map is not empty then return 1
	
	cout<<"map is empty or not "<<person.empty();
	

	return 0;
}
