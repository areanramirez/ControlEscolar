/*
 * MenuAMP.h
 *
 *  Created on: Jul 3, 2020
 *      Author: curso
 */
#include "Conexion.h"
#include <iostream>
#include<string>
using namespace pqxx;
using namespace std;
#ifndef MENUAMP_H_
#define MENUAMP_H_

class MenuAMP {
public:
	MenuAMP();
	virtual ~MenuAMP();
	int mMAMP();
};

#endif /* MENUAMP_H_ */
