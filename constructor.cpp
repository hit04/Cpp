#include<iostream>
#include<string>
using namespace std;
class duck{
	public:
		duck(string z)
		{
		 setname (z);
		}
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
	
	duck hi("hitendra singh");
	 cout<<hi.getname();
	return 0;
}
