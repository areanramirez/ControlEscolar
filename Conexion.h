/*
 * Conexion.h
 *
 *  Created on: Jun 16, 2020
 *      Author: curso
 */
#include<iostream>
#include <string>
#include <pqxx/pqxx>
using namespace std;
using namespace pqxx;
#ifndef CONEXION_H_
#define CONEXION_H_

class Conexion {
public:
	string *sql;
	const string cadenaConexion=" dbname=controlescolar user=fpoo password=fpoo hostaddr=127.0.0.1 port=5432";
	//char cadenaConexion[76]={'dbname=controlescolar user=fpoo password=fpoo hostaddr=127.0.0.1 port=5432'};

	Conexion();
	virtual ~Conexion();
	int conMate();
	char* conM();
	int insMate();
	char* insM();
	int eliMate();
	char* eliM();
	int modMate();
	char* modM();
	int conPro();
	char* conP();
	int insPro();
	char* insP();
	int eliPro();
	char* eliP();
	int modPro();
	char* modP();
	int conAlu();
	char* conA();
	int insAlu();
	char* insA();
	int eliAlu();
	char* eliA();
	int modAlu();
	char* modA();
	int conicurso();
	char* conIC();
	int insicurso();
	char* insIC();
	int eliicurso();
	char* eliIC();
	int modicurso();
	char* modIC();
	int conagrupos();
	char* conAG();
	int insagrupos();
	char* insAG();
	int eliagrupos();
	char* eliAG();
	int modagrupos();
	char* modAG();
	int conamp();
	char* conAMP();
	int insamp();
	char* insAMP();
	int eliamp();
	char* eliAMP();
	int modamp();
	char* modAMP();




};
#endif /* CONEXION_H_ */
