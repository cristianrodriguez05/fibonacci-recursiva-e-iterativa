#include <iostream>

using namespace std;

int fibonacci(int);

int main() {
	
	int n, f1, f2;
	f1=0;
	f2=1;
	
	cout<<"Ingrese el termino n-esimo que desea conocer de la serie de fibonacci"<<endl;
	cin>>n;
	while (n<0) {
		cout<<"Ingrese un numero positivo o igual a cero"<<endl;
		cin>>n;
	}
	if (n==0) {
		cout<<"El termino "<<n<<" en la serie de fibonacci es "<<n<<endl;
	} else {
		for(int i=0; i<(n-1); i++){
			f2= f1+f2;
			f1= f2-f1;
		}
		cout<<"El termino "<<n<<" en la serie de fibonacci es "<<f2<<endl;
		system("PAUSE");
		return 0;
		
	}
}	
