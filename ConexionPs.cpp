#include "MenuPrincipal.h"
#include <iostream>
#include<string>
using namespace std;

int main(int argc, char**argv){
	cout<<"\tControl Escolar"<<endl;
	int res=0;
	do{
			MenuPrincipal *mP;
			mP= new MenuPrincipal();
			mP->mMP();
			cout<<"¿Quieres regresar el Menu Principal? Si=1/N=0?"<<endl;
			cin>>res;
	}while(res== 1);
	return 0;

}
