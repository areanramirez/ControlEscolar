/*
 * MenuProfesor.cpp
 *
 *  Created on: Jul 1, 2020
 *      Author: curso
 */

#include "MenuProfesor.h"

MenuProfesor::MenuProfesor() {
	// TODO Auto-generated constructor stub

}

MenuProfesor::~MenuProfesor() {
	// TODO Auto-generated destructor stub
}

int MenuProfesor::mMP(){
	int res=0;
	do{
		int opc;
						cout<<"\tMenu Profesor"<<endl;
						cout<<"¿Que opcion deseas realizar?"<<endl;
						cout<<"1. Consulta  Base de Datos"<<endl;
						cout<<"2. Registra Profesor"<<endl;
						cout<<"3. Modifica Profesor"<<endl;
						cout<<"4. Elimina Profesor "<< endl;
						cin>>opc;
						Conexion *profe;
						profe= new Conexion();
						switch(opc){
							case 1:
								profe->conPro();
								break;

							case 2:
								profe->insPro();
								profe->conPro();
								break;

							case 3:
								profe->modPro();
								profe->conPro();
								break;

							case 4:
								profe->eliPro();
								profe->conPro();
								break;

						}
						cout<<"\n¿Quieres regresar al Menu Profesor? Si=1/No=0"<<endl;
						cin>>res;
	}while(res==1);

						return 0;
}
