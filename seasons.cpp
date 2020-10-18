//print season of year
#include<iostream>
#include<string>
using namespace std;

enum seasons{fall=1,winter,spring,summer};

int main()
{
	for(int seasonOFyear=fall;seasonOFyear<=summer;seasonOFyear++)
	{
		cout<<"seasonOFyear is ="<<seasonOFyear<<endl;;
	}



	return 0;
}
