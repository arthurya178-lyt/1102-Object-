#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
	srand(time(NULL));
	string name[5]={"dog","cat","chicken","yoyo","zxc"};
	int rnd;
	double rnd2;
	rnd=rand()%5;
	cout<<name[rnd]<<" ";
	rnd=rand()%40+51;
	cout<<rnd<<" ";
	rnd2=1+(rand()%7+1)*0.1;
	cout<<rnd2; 
}
