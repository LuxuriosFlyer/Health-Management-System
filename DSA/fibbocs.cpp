#include<iostream>

using namespace std;


int main(){
	int n;
	cin>>n;
    int a=-1;
	int b=1;
	int next;
	for(int i=0;i<=n;i++)
	{
		next = a+b;
		a=b;
		b=next;
		
	}
	cout<<next;
	return 0;
}
