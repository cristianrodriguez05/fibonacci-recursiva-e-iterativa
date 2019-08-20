#include <iostream>

using namespace std;

int fibonacci(int);

int main() {
	
	int n, g;
	
	cout<<"Ingrese el termino n-esimo que desea conocer de la serie de fibonacci"<<endl;
	cin>>n;
	while (n<0) {
		cout<<"Ingrese un numero positivo o igual a cero"<<endl;
		cin>>n;
	}
	g=fibonacci(n);
	cout<<"El termino "<<n<<" en la serie de fibonacci es "<<g<<endl;
	system("PAUSE");
	return 0;
}

int fibonacci(int n) {
	if (n==0) {
		return 0;
	}
	if (n==1) {
		return 1;
	}
	else {
		int p;
		p=fibonacci(n-1)+fibonacci(n-2);
		return p;
	}
}
