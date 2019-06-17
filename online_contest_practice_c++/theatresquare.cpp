#include<iostream>
using namespace std;
int main  ()
{ int m,n,a;
cin >>n>>m>>a;
if(n%a==0){
	n=n;
}
else
{
	n=n+a;
}
if(m%a==0){
	m=m;
}
else
{
	m=m+a;
}
//n=n+1;
n=n/a;
//m=m+1;
m=m/a;
cout<<m*n<<endl;
	
	return 0;
}