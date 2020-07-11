/*
 * MenuAMP.cpp
 *
 *  Created on: Jul 3, 2020
 *      Author: curso
 */

#include "MenuAMP.h"

MenuAMP::MenuAMP() {
	// TODO Auto-generated constructor stub

}

MenuAMP::~MenuAMP() {
	// TODO Auto-generated destructor stub
}

int MenuAMP::mMAMP(){
	int res=0;
					do{
						int opc;

							cout<<"\tMenu de Asignar Materias"<<endl;
							cout<<"¿Que opcion deseas realizar?"<<endl;
							cout<<"1. Consulta  Base de Datos"<<endl;
							cout<<"2. Registra la Asignacion"<<endl;
							cout<<"3. Modifica la Asignacion"<<endl;
							cout<<"4. Elimina la Asignacion"<< endl;
							cin>>opc;

							switch(opc){
							Conexion *amp;
								case 1:
									amp= new Conexion();
									amp->conamp();
									break;

								case 2:
									amp= new Conexion();
									amp->insamp();
									amp->conamp();
									break;

								case 3:
									amp= new Conexion();
									amp->modamp();
									amp->conamp();
									break;

								case 4:
									amp= new Conexion();
									amp->eliamp();
									amp->conamp();
									break;
							}
							cout<<"¿Quieres regresar el Menu Asignar Materias? Si=1/N=0?"<<endl;
							cin>>res;
				}while(res== 1);
					return 0;
}
