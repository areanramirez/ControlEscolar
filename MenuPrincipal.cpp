/*
 * MenuPrincipal.cpp
 *
 *  Created on: Jun 30, 2020
 *      Author: curso
 */
#include <iostream>
#include<string>
using namespace std;
#include "MenuPrincipal.h"
#include "MenuProfesor.h"
#include"MenuAlumno.h"
#include"MenuICurso.h"
#include"MenuAGrupos.h"
#include"MenuAMP.h"

MenuPrincipal::MenuPrincipal() {
	// TODO Auto-generated constructor stub

}

MenuPrincipal::~MenuPrincipal() {
	// TODO Auto-generated destructor stub
}

int MenuPrincipal::mMP(){

		int opc;

	cout<<"\tMenu Principal"<<endl;
	cout<<"¿Donde quieres trabajar?"<<endl;
	cout<<"1. Materia"<<endl;
	cout<<"2. Profesor"<<endl;
	cout<<"3. Alumno"<<endl;
	cout<<"4. Inscribir Curso"<<endl;
	cout<<"5. Administrar Grupos"<<endl;
	cout<<"6. Asignar Materias"<<endl;
	cin>>opc;


	switch(opc){
	case 1:
		MenuMateria *mM;
		mM= new MenuMateria();
		mM->mMMA();
		break;
	case 2:
		MenuProfesor *mP;
		mP= new MenuProfesor();
		mP->mMP();
		break;
	case 3:
		MenuAlumno *mA;
		mA= new MenuAlumno();
		mA->mMAl();
		break;
	case 4:
		MenuICurso *mIC;
		mIC= new MenuICurso();
		mIC->mMIC();
		break;
	case 5:
		MenuAGrupos *mAG;
		mAG= new MenuAGrupos();
		mAG->mMAG();
		break;

	case 6:
		MenuAMP *mAMP;
		mAMP= new MenuAMP();
		mAMP->mMAMP();
		break;

	}
return 0;

}
