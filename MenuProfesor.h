/*
 * MenuProfesor.h
 *
 *  Created on: Jul 1, 2020
 *      Author: curso
 */
#include "Conexion.h"
#include <iostream>
#include<string>
using namespace std;
using namespace pqxx;
#ifndef MENUPROFESOR_H_
#define MENUPROFESOR_H_

class MenuProfesor {
public:
	MenuProfesor();
	virtual ~MenuProfesor();
	int mMP();
};

#endif /* MENUPROFESOR_H_ */
