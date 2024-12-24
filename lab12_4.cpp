#include<iostream>

using namespace std;

void mySwap(int &x ,int &y);
void mySwap(string &a ,string &b );
void mySwap(char &p ,char &q);

int main(){
	int x, y;
	string a, b;
	char p, q;
	
	cin >> x >> y >> a >> b >> p >> q;
	
	cout << "Before swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	mySwap(x,y);
	cout << "After swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	
	cout << "Before swapping:\n";
	cout << "a = " << a << ", b = " << b << "\n";
	mySwap(a,b);
	cout << "After swapping:\n";
	cout << "a = " << a << ", b = " << b << "\n";
	
	cout << "Before swapping:\n";
	cout << "p = " << p << ", q = " << q << "\n";
	mySwap(p,q);
	cout << "After swapping:\n";
	cout << "p = " << p << ", q = " << q << "\n";

	return 0;
}

void mySwap(int &x ,int &y){
	int i = y;
	
	y = x;
	x = i;
}

void mySwap(string &a ,string &b ){
string i = a;
	a = b;
	b = i;
}

void mySwap(char &p ,char &q){
	char i = p;
	p = q;
	q = i;
}
