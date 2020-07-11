/*
 * MenuMateria.h
 *
 *  Created on: Jun 30, 2020
 *      Author: curso
 */
#include "Conexion.h"
#include <iostream>
#include<string>
using namespace pqxx;
using namespace std;
#ifndef MENUMATERIA_H_
#define MENUMATERIA_H_

class MenuMateria {
public:
	MenuMateria();
	virtual ~MenuMateria();
	int mMMA();
};

#endif /* MENUMATERIA_H_ */
