#include <iostream>
using namespace std;
class st{
	int x;
	int y;
	int a;
public:
st(int _crX,int _crY,int _crGr){
	x=_crX;
	y=_crY;
	a=_crGr;
}
public:
int getcrX()
{return x;}

int getcrY()
{return y;}

int getcrGr()
{return a;}
};
		class d: public st
		{
			int j;
		public:
		d( int _crX, int _crY, int _crGr,int _crJ): st(_crX,_crY,_crGr){
		j=_crJ;}
		int getcrJ()
		{return j;}
		};
void main(){
d c(4,3,2,5);
cout<<c.getcrX();
cout<<" ";
cout<<c.getcrY();
cout<<" ";
cout<<c.getcrGr();
cout<<" ";
cout<<c.getcrJ();
cout<<"\n"; 
system("pause");
}