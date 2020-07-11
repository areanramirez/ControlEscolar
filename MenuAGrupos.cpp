/*
 * MenuAGrupos.cpp
 *
 *  Created on: Jul 3, 2020
 *      Author: curso
 */

#include "MenuAGrupos.h"

MenuAGrupos::MenuAGrupos() {
	// TODO Auto-generated constructor stub

}

MenuAGrupos::~MenuAGrupos() {
	// TODO Auto-generated destructor stub
}

int MenuAGrupos::mMAG(){
	int res=0;
					do{
						int opc;

							cout<<"\tMenu Administrar Grupos"<<endl;
							cout<<"¿Que opcion deseas realizar?"<<endl;
							cout<<"1. Consulta  Base de Datos"<<endl;
							cout<<"2. Registra Grupos"<<endl;
							cout<<"3. Modifica Grupos"<<endl;
							cout<<"4. Elimina Grupos"<< endl;
							cin>>opc;

							switch(opc){
							Conexion *ag;
								case 1:
									ag= new Conexion();
									ag->conagrupos();
									break;

								case 2:
									ag= new Conexion();
									ag->insagrupos();
									ag->conagrupos();
									break;

								case 3:
									ag= new Conexion();
									ag->modagrupos();
									ag->conagrupos();
									break;

								case 4:
									ag= new Conexion();
									ag->eliagrupos();
									ag->conagrupos();
									break;
							}
							cout<<"¿Quieres regresar el Menu Asignar Grupos? Si=1/N=0?"<<endl;
							cin>>res;
				}while(res== 1);
					return 0;
}
