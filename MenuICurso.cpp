/*
 * MenuICurso.cpp
 *
 *  Created on: Jul 2, 2020
 *      Author: curso
 */

#include "MenuICurso.h"

MenuICurso::MenuICurso() {
	// TODO Auto-generated constructor stub

}

MenuICurso::~MenuICurso() {
	// TODO Auto-generated destructor stub
}

int MenuICurso::mMIC(){
	int res=0;
				do{
					int opc;

						cout<<"\tMenu Inscribir Curso"<<endl;
						cout<<"¿Que opcion deseas realizar?"<<endl;
						cout<<"1. Consulta  Base de Datos"<<endl;
						cout<<"2. Registra Curso"<<endl;
						cout<<"3. Modifica Curso"<<endl;
						cout<<"4. Elimina Curso"<< endl;
						cin>>opc;

						switch(opc){
						Conexion *ic;
							case 1:
								ic= new Conexion();
								ic->conicurso();
								break;

							case 2:
								ic= new Conexion();
								ic->insicurso();
								ic->conicurso();
								break;

							case 3:
								ic= new Conexion();
								ic->modicurso();
								ic->conicurso();
								break;

							case 4:
								ic= new Conexion();
								ic->eliicurso();
								ic->conicurso();
								break;
						}
						cout<<"¿Quieres regresar el Menu Inscribir Curso? Si=1/N=0?"<<endl;
						cin>>res;
			}while(res== 1);

	return 0;
}
