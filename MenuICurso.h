/*
 * MenuICurso.h
 *
 *  Created on: Jul 2, 2020
 *      Author: curso
 */
#include "Conexion.h"
#include <iostream>
#include<string>
using namespace pqxx;
using namespace std;
#ifndef MENUICURSO_H_
#define MENUICURSO_H_

class MenuICurso {
public:
	MenuICurso();
	virtual ~MenuICurso();
	int mMIC();
};

#endif /* MENUICURSO_H_ */
