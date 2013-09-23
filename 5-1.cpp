#include <iostream>
using namespace std;

int change(int a)
{
	int b;
	b=((a-32)*5)/9;
	return b;
}
int main()
{
	int c;
	int f;
	cout<<"please input a temperature number"<<endl;
	cin>>f;
	c=change(f);
	cout<<"c="<<c<<endl;
	return 0;
}
