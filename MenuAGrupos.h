/*
 * MenuAGrupos.h
 *
 *  Created on: Jul 3, 2020
 *      Author: curso
 */
#include "Conexion.h"
#include <iostream>
#include<string>
using namespace pqxx;
using namespace std;
#ifndef MENUAGRUPOS_H_
#define MENUAGRUPOS_H_

class MenuAGrupos {
public:
	MenuAGrupos();
	virtual ~MenuAGrupos();
	int mMAG();
};

#endif /* MENUAGRUPOS_H_ */
