#include<iostream>
#include<string>
using namespace std;
class duck{
	public:
		void setname(string x)
		{ name =x;
		}
		string getname()
		{
			return name;
		}
	private:
		 string name;
};
int main (){
	
	duck hi;
	hi.setname ("sir hitendra");
	cout<<hi.getname()<<endl;
	return 0;
}
