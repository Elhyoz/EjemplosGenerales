#include <string.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <cstring>
using namespace std; 
void FuncionSimple();

int main(void){
	double b, a, c, x, y;
	cout<<"Ingrese los valores de a, b, c"<<endl;
	cin>>a>>b>>c;
	x = -b + sqrt((pow(b,2)) - 4*(a*c))/(2*a);
	y = -b - sqrt((pow(b,2))- 4*(a*c))/(2*a);
	if (x <= y){
		
		cout<<"El resultado es cierto"<<endl;
		cout<<"Resultado X1: "<<x<<endl;
		cout<<"Resultado X2: "<<y<<endl;
	}
	cout<<"Raiz negativa. Por tanto no se puede resolver por este metodo"<<endl;
	system("pause");
}

