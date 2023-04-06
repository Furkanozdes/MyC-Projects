#include<iostream>
using namespace std;

void edge(int x){
	int i=0,a,b,c,d,f=1;
	if(x==1){
		cout << "0";
	}
	else if(x==2){
		cout << "0";
	}
	else if(x==3){
		
			cout << "enter the edges (1 upright):";
			cin >>a>>b;
			f=(f*a)*b;		
		cout << "your triangle's area is:" << f/2 << endl;
	}
	else if(x==4){
		
			cout << "enter the edges:";
			cin >> a>>b;
			f=(f*a*b);
		cout << "your square's area is:" << f << endl;
}
	else if(x==5 || x==6 || x==7 || x==8){
		cout<<"enter the perimeter:";
		cin>>a;
		cout<<"enter the height";
		cin>>b;
		f=(a*b)/2;
			cout << "your polygon's area is:" << f << endl;
	}

}

	int main(void) {
	int edge1;
	cout << "does it have how many edge?";
	cin >> edge1;
	edge(edge1);
return 0;
}
