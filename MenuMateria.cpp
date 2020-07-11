/*
 * MenuMateria.cpp
 *
 *  Created on: Jun 30, 2020
 *      Author: curso
 */
#include"Conexion.h"
#include "MenuMateria.h"
#include <iostream>
#include<string>
using namespace std;
using namespace pqxx;

MenuMateria::MenuMateria() {
	// TODO Auto-generated constructor stub

}

MenuMateria::~MenuMateria() {
	// TODO Auto-generated destructor stub
}

int MenuMateria::mMMA(){

	int res=0;
			do{
				int opc;

					cout<<"\tMenu Materia"<<endl;
					cout<<"¿Que opcion deseas realizar?"<<endl;
					cout<<"1. Consulta  Base de Datos"<<endl;
					cout<<"2. Registra Materia"<<endl;
					cout<<"3. Modifica Materia"<<endl;
					cout<<"4. Elimina Materia "<< endl;
					cin>>opc;

					switch(opc){
					Conexion *prueba;
						case 1:
							prueba= new Conexion();
							prueba->conMate();
							break;

						case 2:
							prueba= new Conexion();
							prueba->insMate();
							prueba->conMate();
							break;

						case 3:
							prueba = new Conexion();
							prueba->modMate();
							prueba->conMate();
							break;

						case 4:
							prueba= new Conexion();
							prueba->eliMate();
							prueba->conMate();
							break;
					}
					cout<<"¿Quieres regresar el Menu Materia? Si=1/N=0?"<<endl;
					cin>>res;
		}while(res== 1);

return 0;
}
