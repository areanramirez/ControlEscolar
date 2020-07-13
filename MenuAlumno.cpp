/*
 * MenuAlumno.cpp
 *
 *  Created on: Jul 2, 2020
 *      Author: curso
 */

#include "MenuAlumno.h"
#include "Conexion.h"
#include <iostream>
#include<string>
using namespace std;
using namespace pqxx;

MenuAlumno::MenuAlumno() {
	// TODO Auto-generated constructor stub

}

MenuAlumno::~MenuAlumno() {
	// TODO Auto-generated destructor stub
}

int MenuAlumno::mMAl(){
	int res=0;
		do{
			int opc;
					cout<<"\tMenu Alumno";
					cout<<"¿Que opcion deseas realizar?"<<endl;
					cout<<"1. Consulta  Base de Datos"<<endl;
					cout<<"2. Registra  Alumno"<<endl;
					cout<<"3. Modifica  Alumno"<<endl;
					cout<<"4. Elimina  Alumno"<< endl;
					cin>>opc;
					Conexion *alum;
					alum= new Conexion();
					switch(opc){
						case 1:
							alum->conAlu();
							break;

						case 2:
							alum->insAlu();
							alum->conAlu();
							break;

						case 3:
							alum->modAlu();
							alum->conAlu();
							break;

						case 4:
							alum->eliAlu();
							alum->conAlu();
							break;

					}
					cout<<"¿Quieres regresar el Menu Alumno? Si=1/N=0?"<<endl;
					cin>>res;
		}while(res==1);
					return 0;
}

