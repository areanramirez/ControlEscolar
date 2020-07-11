/*
 * Conexion.cpp
 *
 *  Created on: Jun 3, 2020
 *      Author: curso
 */

#include "Conexion.h"
#include <iostream>
#include <pqxx/pqxx>
#include <string>
using namespace std;
using namespace pqxx;

Conexion::Conexion() {


}

Conexion::~Conexion() {
// TODO Auto-generated destructor stub
}

/*int  Conexion::conectar(){
try{
connection c(cadenaConexion);
if(c.is_open()){
nontransaction N(c);
int size=sql->size();
result R(N.exec(this->consultar()));
cout<<"\n\n|Nombre\t\t    |RFC                           |"<<endl;
cout<<"|==================================================|"<<endl;
for(result::const_iterator c=R.begin(); c!=R.end();++c){
cout<<"| "<<c[0].as<string>()<<"\t\t  ";
cout<<"   RFC-"<<c[1].as<string>()<<"\t\t|"<<endl;
}

//cout<<"Se conecto a la BD "<<" "<<c.dbname();
}else {
cout<<"No se conecto a la Base de datos"<<endl;
return 1;
}
c.disconnect();
}catch (const std::exception &e) {
cerr<<e.what()<<std::endl;
return 1;
}
return 0;
}

char* Conexion::consultar(){
sql=new string("select * from persona");
int size;
size=sql->size()+1;
char *query=new char[size];
strcpy(query, sql->c_str());
return query;

}

int Conexion::conecbd(){
	try{
	connection c(cadenaConexion);
	if(c.is_open()){
	nontransaction N(c);
	int size=sql->size();
	result R(N.exec(this->ins()));
	//cout<<"Se conecto a la BD "<<" "<<c.dbname();
	}else {
	cout<<"No se conecto a la Base de datos"<<endl;
	return 1;
	}
	c.disconnect();
	}catch (const std::exception &e) {
	cerr<<e.what()<<endl;
	return 1;
	}
	return 0;
	}

char* Conexion::ins(){
	string nombre, rfc;
		cout<<"Llena los datos correspondientes"<<endl;
		cout << "Nombre de la persona:";
		cin >> nombre;
		cout << "\nRFC:";
		cin >> rfc;
		sql=new string("INSERT INTO persona (nombre,rfc) " \
				       "VALUES ('" + nombre + "', '" + rfc + "');\n");
	//sql= new string("INSERT INTO persona(nombre,rfc)" \
			"VALUES ('Jaime', 'DOJA040707MDF');");

	int size;
	size=sql->size()+1;
	char *query=new char[size];
	strcpy(query, sql->c_str());
	return query;

}

int Conexion::elimina(){
	try{
	connection c(cadenaConexion);
	if(c.is_open()){
	nontransaction N(c);
	int size=sql->size();
	result R(N.exec(this->eli()));
	//cout<<"\n Se conecto a la BD "<<" "<<c.dbname();
	}else {
	cout<<"No se conecto a la Base de datos"<<endl;
	return 1;
	}
	c.disconnect();
	}catch (const std::exception &e) {
	cerr<<e.what()<<std::endl;
	return 1;
	}
	return 0;
	}

char* Conexion::eli(){
	string columna, reg;
		cout<<"Llena los datos correspondientes"<<endl;
		cout << "Nombre de la columna:";
		cin >> columna;
		cout << "Registro que quieres eliminar:";
		cin >> reg;
		sql =new string ("DELETE from persona WHERE " + columna + "='" + reg + "';");
	//sql=new string("DELETE from persona where nombre='Alan'");
	int size;
	size=sql->size()+1;
	char *query=new char[size];
	strcpy(query, sql->c_str());
	return query;
}

int Conexion::conecmod(){
		try{
		connection c(cadenaConexion);
		if(c.is_open()){
		nontransaction N(c);
		int size=sql->size();
		result R(N.exec(this->mod()));
		//cout<<"\n Se conecto a la BD "<<" "<<c.dbname();
		}else {
		cout<<"No se conecto a la Base de datos"<<endl;
		return 1;
		}
		c.disconnect();
		}catch (const std::exception &e) {
		cerr<<e.what()<<std::endl;
		return 1;
		}
		return 0;
		}

char* Conexion::mod(){
	string columna, registro, newRegistro;
		cout<<"Llena los dastos correspondientes"<<endl;
		cout << "Nombre de la columna:";
		cin >> columna;
		cout << "Nombre registro que quieres cambiar:";
		cin >> registro;
		cout << "Nombre del nuevo registro que quieres poner:";
		cin >> newRegistro;
		sql =new string("UPDATE persona SET " + columna + "='" + newRegistro + "' WHERE " + columna + "='" + registro + "';");
	//sql= new string("update persona set nombre='Lobo' where nombre='Antonio'");

		int size;
		size=sql->size()+1;
		char *query=new char[size];
		strcpy(query, sql->c_str());
		return query;
}*/

int  Conexion::conMate(){
try{
connection c(cadenaConexion);
if(c.is_open()){
nontransaction N(c);
int size=sql->size();
result R(N.exec(this->conM()));
cout<<"\n\n|Clave \t\t |Nombre Materia\t |Grado\t\t |"<<endl;
cout<<"|========================================================|"<<endl;
for(result::const_iterator c=R.begin(); c!=R.end();++c){
cout<<"|"<<c[0].as<string>()<<"\t\t";
cout<<" "<<c[1].as<string>()<<"\t\t\t";
cout<<" "<<c[2].as<string>()<<"\t |"<<endl;
}

//cout<<"Se conecto a la BD "<<" "<<c.dbname();
}else {
cout<<"No se conecto a la Base de datos"<<endl;
return 1;
}
c.disconnect();
}catch (const std::exception &e) {
cerr<<e.what()<<std::endl;
return 1;
}
return 0;
}

char* Conexion::conM(){
sql=new string("select * from Materia");
int size;
size=sql->size()+1;
char *query=new char[size];
strcpy(query, sql->c_str());
return query;

}

int Conexion::insMate(){
	try{
	connection c(cadenaConexion);
	if(c.is_open()){
	nontransaction N(c);
	int size=sql->size();
	result R(N.exec(this->insM()));
	//cout<<"Se conecto a la BD "<<" "<<c.dbname();
	}else {
	cout<<"No se conecto a la Base de datos"<<endl;
	return 1;
	}
	c.disconnect();
	}catch (const std::exception &e) {
	cerr<<e.what()<<endl;
	return 1;
	}
	return 0;
	cout<<"Se realizo con exito el registro"<<endl;
	}

char* Conexion::insM(){
	string clave,nombre, grado;
	cout<<"Llena los datos correspondientes"<<endl;
	cout<<"Clave de la materia:";
	cin>>clave;
	cout << "Nombre de la materia:";
	cin >> nombre;
	cout << "Grado de la materia:";
	cin >> grado;
		sql=new string("INSERT INTO materia (clavemateria, nombrema, grado) " \
				       "VALUES ('" + clave + "', '" + nombre + "','"+ grado + "'\n);");
	//sql= new string("INSERT INTO persona(nombre,rfc)" \
			"VALUES ('Jaime', 'DOJA040707MDF');");

	int size;
	size=sql->size()+1;
	char *query=new char[size];
	strcpy(query, sql->c_str());
	return query;

}

int Conexion::eliMate(){
	try{
	connection c(cadenaConexion);
	if(c.is_open()){
	nontransaction N(c);
	int size=sql->size();
	result R(N.exec(this->eliM()));
	//cout<<"\n Se conecto a la BD "<<" "<<c.dbname();
	}else {
	cout<<"No se conecto a la Base de datos"<<endl;
	return 1;
	}
	c.disconnect();
	}catch (const std::exception &e) {
	cerr<<e.what()<<std::endl;
	return 1;
	}
	return 0;
	}

char* Conexion::eliM(){
	string columna, reg;
		cout<<"Llena los datos correspondientes"<<endl;
		cout << "Nombre de la columna:";
		cin >> columna;
		cout << "Registro que quieres eliminar:";
		cin >> reg;
		sql =new string ("DELETE from materia WHERE " + columna + "='" + reg + "';");
	//sql=new string("DELETE from persona where nombre='Alan'");
	int size;
	size=sql->size()+1;
	char *query=new char[size];
	strcpy(query, sql->c_str());
	return query;
}

int Conexion::modMate(){
		try{
		connection c(cadenaConexion);
		if(c.is_open()){
		nontransaction N(c);
		int size=sql->size();
		result R(N.exec(this->modM()));
		cout<<"\n Se conecto a la BD "<<" "<<c.dbname();
		}else {
		cout<<"No se conecto a la Base de datos"<<endl;
		return 1;
		}
		c.disconnect();
		}catch (const std::exception &e) {
		cerr<<e.what()<<std::endl;
		return 1;
		}
		return 0;
		}

char* Conexion::modM(){
	int opcActualizar;
		string claveMateria, nueClaveMat, nueNomb, nueGrado, nueMatriculaAl;
		cout << "\nPara actualizar el registro de una materia debe ingresar su identificador:";
		cout <<"\nClave de la materia:"<<endl;
		cin >>claveMateria;
		cout << "\nAhora para actualizar el registro se necesita saber que dato deseas actualizar de la materia " + claveMateria;
		cout << "\n\t1. Clave";
		cout << "\n\t2. Nombre";
		cout << "\n\t3. Grado";
		cout << "\nTeclee la opcion que desea actualizar:"<<endl;
		cin >>opcActualizar;
		if (opcActualizar==1){
			cout <<"\nIngrese la nueva clave de la materia:";
			cin >> nueMatriculaAl;
			sql= new string ("UPDATE materia SET clavemateria = '" + nueMatriculaAl + "' WHERE clavemateria = '" + claveMateria + "';");
						int size;
						size=sql->size()+1;
						char *query=new char[size];
						strcpy(query, sql->c_str());
						return query;
		} else{
			if (opcActualizar==2){
				cout <<"\nIngrese el nuevo nombre de la materia:";
				cin >> nueNomb;
				sql= new string ("UPDATE materia SET nombrema = '" + nueNomb + "' WHERE clavemateria = '" + claveMateria + "';");
						int size;
						size=sql->size()+1;
						char *query=new char[size];
						strcpy(query, sql->c_str());
						return query;
						}else {
						if (opcActualizar==3){
							cout <<"\nIngrese el nuevo grado de la materia:";
							cin >> nueGrado;
							sql= new string ("UPDATE materia SET grado = '" + nueGrado + "' WHERE clavemateria = '" + claveMateria + "';");
									int size;
									size=sql->size()+1;
									char *query=new char[size];
									strcpy(query, sql->c_str());
									return query;
									} else{
											cout<<"\nError, no existe esa opcion"<<endl;
								}
					}
		}
		return 0;
}

int  Conexion::conPro(){
try{
connection c(cadenaConexion);
if(c.is_open()){
nontransaction N(c);
int size=sql->size();
result R(N.exec(this->conP()));
cout<<"\n|Matricula\t Nombre\t\t |Primer Apellido\t |Segundo Apellido \t |RFC \t\t\t |Dia  |Mes  |Año\t |Medio de Contacto \t |Estudio\t|"<<endl;
cout<<"|=======================================================================================================================================================================|"<<endl;
for(result::const_iterator c=R.begin(); c!=R.end();++c){
cout<<"| "<<c[0].as<string>()<<"\t";
cout<<" "<<c[1].as<string>()<<"\t\t";
cout<<" "<<c[2].as<string>()<<"\t\t";
cout<<" "<<c[3].as<string>()<<"\t\t";
cout<<" "<<c[4].as<string>()<<"\t\t ";
cout<<" "<<c[5].as<string>()<<"  ";
cout<<" "<<c[6].as<string>()<<"   ";
cout<<" "<<c[7].as<string>()<<"\t";
cout<<" "<<c[8].as<string>()<<"\t\t";
cout<<" "<<c[9].as<string>()<<"\t|"<<endl;;
}

//cout<<"Se conecto a la BD "<<" "<<c.dbname();
}else {
cout<<"No se conecto a la Base de datos"<<endl;
return 1;
}
c.disconnect();
}catch (const std::exception &e) {
cerr<<e.what()<<endl;
return 1;
}
return 0;
}

char* Conexion::conP(){
sql=new string("select * from profesor");
int size;
size=sql->size()+1;
char *query=new char[size];
strcpy(query, sql->c_str());
return query;

}

int Conexion::insPro(){
	try{
	connection c(cadenaConexion);
	if(c.is_open()){
	nontransaction N(c);
	int size=sql->size();
	result R(N.exec(this->insP()));
	//cout<<"Se conecto a la BD "<<" "<<c.dbname();
	}else {
	cout<<"No se conecto a la Base de datos"<<endl;
	return 1;
	}
	c.disconnect();
	}catch (const std::exception &e) {
	cerr<<e.what()<<endl;
	return 1;
	}
	return 0;
	}

char* Conexion::insP(){
	string matri ,nombre,primer,sA, rfc, FN, Est, MeC, dia, mes;
		cout<<"Llena los datos correspondientes"<<endl;
		cout<<"Matricula:";
		cin>>matri;
		cout<< "Nombre:";
		cin >> nombre;
		cout<<"Primer Apellido:";
		cin>>primer;
		cout<<"Segundo Apellido:";
		cin>>sA;
		cout<<"RFC:";
		cin>> rfc;
		cout<<"Dia:";
		cin>>dia;
		cout<<"Mes:";
		cin>>mes;
		cout<<"Año:";
		cin>>FN;
		cout<<"Medio de Contacto:";
		cin>>MeC;
		cout<<"Estudio:";
		cin>>Est;
		cout<<endl;
		sql=new string("INSERT INTO profesor(matriculap,nombrep,primerapellido, segundoapeliido,rfc,dia,mes,year,mediocontacto, estudio)" \
				       "VALUES ('" +matri+"','"+ nombre + "','" + primer + "','"+ sA +"','"+ rfc +"','"+ dia+"','"+mes+ "','"+FN+"','"+ MeC +"','"+ Est +"');\n");
	//sql= new string("INSERT INTO persona(nombre,rfc)" \
			"VALUES ('Jaime', 'DOJA040707MDF');");

	int size;
	size=sql->size()+1;
	char *query=new char[size];
	strcpy(query, sql->c_str());
	return query;

}

int Conexion::eliPro(){
	try{
	connection c(cadenaConexion);
	if(c.is_open()){
	nontransaction N(c);
	int size=sql->size();
	result R(N.exec(this->eliP()));
	//cout<<"\n Se conecto a la BD "<<" "<<c.dbname();
	}else {
	cout<<"No se conecto a la Base de datos"<<endl;
	return 1;
	}
	c.disconnect();
	}catch (const std::exception &e) {
	cerr<<e.what()<<std::endl;
	return 1;
	}
	return 0;
	}

char* Conexion::eliP(){
		string reg, nRegistro, matri;
			cout << "\nPara eliminar el registro de profesor debe ingresar su identificador:";
			cout <<"\nMatricula:"<<endl;
			cin >>matri;
			sql =new string ("DELETE profesor WHERE matriculap ='" + matri + "';");
			int size;
			size=sql->size()+1;
			char *query=new char[size];
			strcpy(query, sql->c_str());
			return query;
}

int Conexion::modPro(){
		try{
		connection c(cadenaConexion);
		if(c.is_open()){
		nontransaction N(c);
		int size=sql->size();
		result R(N.exec(this->modP()));
		cout<<"\n Se conecto a la BD "<<" "<<c.dbname();
		}else {
		cout<<"No se conecto a la Base de datos"<<endl;
		return 1;
		}
		c.disconnect();
		}catch (const std::exception &e) {
		cerr<<e.what()<<std::endl;
		return 1;
		}
		return 0;
		}

char* Conexion::modP(){
			int opcActualizar;
				string reg, nRegistro, matri;
				cout << "\nPara actualizar el registro de una materia debe ingresar su identificador:";
				cout <<"\nMatricula:"<<endl;
				cin >>matri;
				cout << "\nAhora para actualizar el registro se necesita saber que dato deseas actualizar del profesor" + matri;
				cout << "\n\t1. Matricula";
				cout << "\n\t2. Nombre";
				cout << "\n\t3. Primer Apellido";
				cout << "\n\t4. Segundo Apellido";
				cout << "\n\t5. RFC";
				cout << "\n\t6. Dia";
				cout << "\n\t7. Mes";
				cout << "\n\t8. Año";
				cout << "\n\t9. Medio de Contacto";
				cout << "\n\t10. Estuio";
				cout << "\nTeclee la opcion que desea actualizar:"<<endl;
				cin >>opcActualizar;
				if (opcActualizar==1){
					cout <<"\nIngrese la nueva matricula:";
					cin >> reg;
					sql= new string ("UPDATE profesor SET matriculap = '" + reg + "' WHERE matriculap = '" + matri + "';");
								int size;
								size=sql->size()+1;
								char *query=new char[size];
								strcpy(query, sql->c_str());
								return query;
				} else{
					if (opcActualizar==2){
						cout <<"\nIngrese el nuevo nombre:";
						cin >> reg;
						sql= new string ("UPDATE profesor SET nombrep = '" + reg + "' WHERE matriculap = '" + matri + "';");
								int size;
								size=sql->size()+1;
								char *query=new char[size];
								strcpy(query, sql->c_str());
								return query;
				}else {
					if (opcActualizar==3){
						cout <<"\nIngrese el nuevo primer apellido:";
						cin >> reg;
						sql= new string ("UPDATE profesor SET primerapellido = '" + reg + "' WHERE matriculap= '" + matri + "';");
								int size;
								size=sql->size()+1;
								char *query=new char[size];
								strcpy(query, sql->c_str());
								return query;
				} else {
					if (opcActualizar==4){
						cout <<"\nIngrese el nuevo segundo apellido:";
						cin >> reg;
						sql= new string ("UPDATE profesor SET segundoapeliido = '" + reg + "' WHERE matriculap = '" + matri + "';");
								int size;
								size=sql->size()+1;
								char *query=new char[size];
								strcpy(query, sql->c_str());
								return query;
				}else {
						if (opcActualizar==5){
						cout <<"\nIngrese el nuevo rfc:";
						cin >> reg;
						sql= new string ("UPDATE profesor SET rfc = '" + reg + "' WHERE matriculap = '" + matri + "';");
								int size;
								size=sql->size()+1;
								char *query=new char[size];
								strcpy(query, sql->c_str());
								return query;
				}else {
						if (opcActualizar==6){
						cout <<"\nIngrese el nuevo dia:";
						cin >> reg;
						sql= new string ("UPDATE profesor SET dia = '" + reg + "' WHERE matriculap = '" + matri + "';");
								int size;
								size=sql->size()+1;
								char *query=new char[size];
								strcpy(query, sql->c_str());
								return query;
				}else {
						if (opcActualizar==7){
						cout <<"\nIngrese el nuevo mes:";
						cin >> reg;
						sql= new string ("UPDATE profesor SET mes = '" + reg + "' WHERE matriculap = '" + matri + "';");
								int size;
								size=sql->size()+1;
								char *query=new char[size];
								strcpy(query, sql->c_str());
								return query;
				}else {
						if (opcActualizar==8){
						cout <<"\nIngrese el nuevo año:";
						cin >> reg;
						sql= new string ("UPDATE profesor SET year= '" + reg + "' WHERE matriculap = '" + matri + "';");
								int size;
								size=sql->size()+1;
								char *query=new char[size];
								strcpy(query, sql->c_str());
								return query;
				}else {
						if (opcActualizar==9){
						cout <<"\nIngrese el nuevo medio de contacto:";
						cin >> reg;
						sql= new string ("UPDATE profesor SET mediocontacto = '" + reg + "' WHERE matriculap = '" + matri + "';");
								int size;
								size=sql->size()+1;
								char *query=new char[size];
								strcpy(query, sql->c_str());
								return query;
				}else {
						if (opcActualizar==10){
						cout <<"\nIngrese el nuevo estudio:";
						cin >> reg;
						sql= new string ("UPDATE profesor SET estudio = '" + reg + "' WHERE matriculap = '" + matri + "';");
								int size;
								size=sql->size()+1;
								char *query=new char[size];
								strcpy(query, sql->c_str());
								return query;
										}
				else{
						cout<<"\nError, no existe esa opcion"<<endl;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
return 0;
}


int  Conexion::conAlu(){
try{
connection c(cadenaConexion);
if(c.is_open()){
nontransaction N(c);
int size=sql->size();
result R(N.exec(this->conA()));
cout<<"\n|Matricula \tNombre\t\t |Primer Apellido\t |Segundo Apellido \t\t |Dia  |Mes  |Año\t |Medio de Contacto|"<<endl;
cout<<"|==================================================================================================================================|"<<endl;
for(result::const_iterator c=R.begin(); c!=R.end();++c){
cout<<"| "<<c[0].as<string>()<<" \t";
cout<<" "<<c[1].as<string>()<<"\t\t ";
cout<<" "<<c[2].as<string>()<<"\t\t";
cout<<" "<<c[3].as<string>()<<"\t\t\t";
cout<<" "<<c[4].as<string>()<<"    ";
cout<<" "<<c[5].as<string>()<<"   ";
cout<<" "<<c[6].as<string>()<<"\t";
cout<<" "<<c[7].as<string>()<<"\t   |"<<endl;

}

//cout<<"Se conecto a la BD "<<" "<<c.dbname();
}else {
cout<<"No se conecto a la Base de datos"<<endl;
return 1;
}
c.disconnect();
}catch (const std::exception &e) {
cerr<<e.what()<<endl;
return 1;
}
return 0;
}

char* Conexion::conA(){
sql=new string("select * from alumno1");
int size;
size=sql->size()+1;
char *query=new char[size];
strcpy(query, sql->c_str());
return query;

}

int Conexion::insAlu(){
	try{
	connection c(cadenaConexion);
	if(c.is_open()){
	nontransaction N(c);
	int size=sql->size();
	result R(N.exec(this->insA()));
	//cout<<"Se conecto a la BD "<<" "<<c.dbname();
	}else {
	cout<<"No se conecto a la Base de datos"<<endl;
	return 1;
	}
	c.disconnect();
	}catch (const std::exception &e) {
	cerr<<e.what()<<endl;
	return 1;
	}
	return 0;
	}

char* Conexion::insA(){
	string matri,nombre,primer,sA,dia, mes, FN,  MeC;
			cout<<"Llena los datos correspondientes"<<endl;
			cout<<"Matricula:";
			cin>>matri;
			cout<< "Nombre:";
			cin >> nombre;
			cout<<"Primer Apellido:";
			cin>>primer;
			cout<<"Segundo Apellido:";
			cin>>sA;
			cout<<"Dia:";
			cin>>dia;
			cout<<"Mes:";
			cin>>mes;
			cout<<"Año:";
			cin>>FN;
			cout<<"Medio de Contacto:";
			cin>>MeC;
			cout<<endl;
			sql=new string("INSERT INTO alumno1 (matricula,nombrea, primerapellido, segundoapellido,dia,mes,year, mediocontacto)" \
					       "VALUES ('"+matri+"','" + nombre + "','" + primer + "','"+ sA +"','"+dia+"','"+mes+"','"+ FN + "','"+ MeC +"');\n");
		//sql= new string("INSERT INTO persona(nombre,rfc)" \
				"VALUES ('Jaime', 'DOJA040707MDF');");
		int size;
		size=sql->size()+1;
		char *query=new char[size];
		strcpy(query, sql->c_str());
		return query;

}

int Conexion::eliAlu(){
	try{
	connection c(cadenaConexion);
	if(c.is_open()){
	nontransaction N(c);
	int size=sql->size();
	result R(N.exec(this->eliA()));
	//cout<<"\n Se conecto a la BD "<<" "<<c.dbname();
	}else {
	cout<<"No se conecto a la Base de datos"<<endl;
	return 1;
	}
	c.disconnect();
	}catch (const std::exception &e) {
	cerr<<e.what()<<std::endl;
	return 1;
	}
	return 0;
	}

char* Conexion::eliA(){
					string reg, nRegistro, matri;
					cout << "\nPara eliminar el registro de un alumno  debe ingresar su identificador:";
					cout <<"\nMatricula:"<<endl;
					cin >>matri;
					sql =new string ("DELETE from alumno1 WHERE matricula ='" + matri + "';");
								int size;
								size=sql->size()+1;
								char *query=new char[size];
								strcpy(query, sql->c_str());
								return query;
		return 0;
}

int Conexion::modAlu(){
		try{
		connection c(cadenaConexion);
		if(c.is_open()){
		nontransaction N(c);
		int size=sql->size();
		result R(N.exec(this->modA()));
		cout<<"\n Se conecto a la BD "<<" "<<c.dbname();
		}else {
		cout<<"No se conecto a la Base de datos"<<endl;
		return 1;
		}
		c.disconnect();
		}catch (const std::exception &e) {
		cerr<<e.what()<<std::endl;
		return 1;
		}
		return 0;
		}

char* Conexion::modA(){
			int opcActualizar;
				string reg, nRegistro, matri;
				cout << "\nPara modificar el registro de una materia debe ingresar su identificador:";
				cout <<"\nMatricula:"<<endl;
				cin >>matri;
				cout << "\nAhora para modificar el registro se necesita saber que dato deseas actualizar del alumno " + matri;
				cout << "\n\t1. Matricula";
				cout << "\n\t2. Nombre";
				cout << "\n\t3. Primer Apellido";
				cout << "\n\t4. Segundo Apellido";
				cout << "\n\t5. Dia";
				cout << "\n\t6. Mes";
				cout << "\n\t7. Año";
				cout << "\n\t8. Medio de Contacto";
				cout << "\nTeclee la opcion que desea actualizar:"<<endl;
				cin >>opcActualizar;
				if (opcActualizar==1){
					cout <<"\nIngrese la nueva matricula:";
					cin >> reg;
					sql= new string ("UPDATE alumno1 SET matricula = '" + reg + "' WHERE matricula = '" + matri + "';");
							int size;
							size=sql->size()+1;
							char *query=new char[size];
							strcpy(query, sql->c_str());
							return query;
				} else{
						if (opcActualizar==2){
						cout <<"\nIngrese el nuevo nombre:";
						cin >> reg;
						sql= new string ("UPDATE alumno1 SET nombrea = '" + reg + "' WHERE matricula = '" + matri + "';");
								int size;
								size=sql->size()+1;
								char *query=new char[size];
								strcpy(query, sql->c_str());
								return query;
				}else {
						if (opcActualizar==3){
						cout <<"\nIngrese el nuevo primer apellido:";
						cin >> reg;
						sql= new string ("UPDATE alumno1 SET primerapellido = '" + reg + "' WHERE matricula= '" + matri + "';");
								int size;
								size=sql->size()+1;
								char *query=new char[size];
								strcpy(query, sql->c_str());
								return query;
				} else {
						if (opcActualizar==4){
						cout <<"\nIngrese el nuevo segundo apellido:";
						cin >> reg;
						sql= new string ("UPDATE alumno1 SET segundoapellido = '" + reg + "' WHERE matricula = '" + matri + "';");
								int size;
								size=sql->size()+1;
								char *query=new char[size];
								strcpy(query, sql->c_str());
								return query;
				}else {
						if (opcActualizar==5){
						cout <<"\nIngrese el nuevo dia:";
						cin >> reg;
						sql= new string ("UPDATE alumno1 SET dia = '" + reg + "' WHERE matricula = '" + matri + "';");
								int size;
								size=sql->size()+1;
								char *query=new char[size];
								strcpy(query, sql->c_str());
								return query;
				}else {
						if (opcActualizar==6){
						cout <<"\nIngrese el nuevo mes:";
						cin >> reg;
						sql= new string ("UPDATE alumno1 SET mes = '" + reg + "' WHERE matricula = '" + matri + "';");
								int size;
								size=sql->size()+1;
								char *query=new char[size];
								strcpy(query, sql->c_str());
								return query;
				}else {
						if (opcActualizar==7){
						cout <<"\nIngrese el nuevo año:";
						cin >> reg;
						sql= new string ("UPDATE alumno1 SET year= '" + reg + "' WHERE matricula = '" + matri + "';");
								int size;
								size=sql->size()+1;
								char *query=new char[size];
								strcpy(query, sql->c_str());
								return query;
				}else {
						if (opcActualizar==8){
						cout <<"\nIngrese el nuevo medio de contacto:";
						cin >> reg;
						sql= new string ("UPDATE alumno1 SET mediocontacto = '" + reg + "' WHERE matricula = '" + matri + "';");
								int size;
								size=sql->size()+1;
								char *query=new char[size];
								strcpy(query, sql->c_str());
								return query;
				}else{
						cout<<"\nError, no existe esa opcion"<<endl;
									}
								}
							}
						}
					}
				}
			}
		}
	return 0;
}


int  Conexion::conicurso(){
try{
connection c(cadenaConexion);
if(c.is_open()){
nontransaction N(c);
int size=sql->size();
result R(N.exec(this->conIC()));
cout<<"\n\n|Clave Materia \t\t |Matricula Profesor\t |Matricula Alumno\t|"<<endl;
cout<<"|=======================================================================|"<<endl;
for(result::const_iterator c=R.begin(); c!=R.end();++c){
cout<<"|"<<c[0].as<string>()<<"\t\t\t";
cout<<" "<<c[1].as<string>()<<"\t\t\t";
cout<<" "<<c[2].as<string>()<<"\t\t|"<<endl;
}

//cout<<"Se conecto a la BD "<<" "<<c.dbname();
}else {
cout<<"No se conecto a la Base de datos"<<endl;
return 1;
}
c.disconnect();
}catch (const std::exception &e) {
cerr<<e.what()<<std::endl;
return 1;
}
return 0;
}

char* Conexion::conIC(){
sql=new string("select * from icurso");
int size;
size=sql->size()+1;
char *query=new char[size];
strcpy(query, sql->c_str());
return query;

}

int Conexion::insicurso(){
	try{
	connection c(cadenaConexion);
	if(c.is_open()){
	nontransaction N(c);
	int size=sql->size();
	result R(N.exec(this->insIC()));
	//cout<<"Se conecto a la BD "<<" "<<c.dbname();
	}else {
	cout<<"No se conecto a la Base de datos"<<endl;
	return 1;
	}
	c.disconnect();
	}catch (const std::exception &e) {
	cerr<<e.what()<<endl;
	return 1;
	}
	return 0;
	cout<<"Se realizo con exito el registro"<<endl;
	}

char* Conexion::insIC(){
	string clave,map, maa;
	cout<<"Llena los datos correspondientes"<<endl;
	cout<<"Clave de la materia:";
	cin>>clave;
	cout << "Matricula del Profesor:";
	cin >> map;
	cout << "Matricula del Alumno:";
	cin >> maa;
		sql=new string("INSERT INTO icurso(clavemateria, matriculap, matricula) " \
				       "VALUES ('" + clave + "', '" + map + "','"+ maa + "'\n);");
	//sql= new string("INSERT INTO persona(nombre,rfc)" \
			"VALUES ('Jaime', 'DOJA040707MDF');");

	int size;
	size=sql->size()+1;
	char *query=new char[size];
	strcpy(query, sql->c_str());
	return query;

}

int Conexion::eliicurso(){
	try{
	connection c(cadenaConexion);
	if(c.is_open()){
	nontransaction N(c);
	int size=sql->size();
	result R(N.exec(this->eliIC()));
	//cout<<"\n Se conecto a la BD "<<" "<<c.dbname();
	}else {
	cout<<"No se conecto a la Base de datos"<<endl;
	return 1;
	}
	c.disconnect();
	}catch (const std::exception &e) {
	cerr<<e.what()<<std::endl;
	return 1;
	}
	return 0;
	}

char* Conexion::eliIC(){
	string columna, reg;
		cout<<"Llena los datos correspondientes"<<endl;
		cout << "Nombre de la columna:";
		cin >> columna;
		cout << "Registro que quieres eliminar:";
		cin >> reg;
		sql =new string ("DELETE from icurso WHERE " + columna + "='" + reg + "';");
	//sql=new string("DELETE from persona where nombre='Alan'");
	int size;
	size=sql->size()+1;
	char *query=new char[size];
	strcpy(query, sql->c_str());
	return query;
}

int Conexion::modicurso(){
		try{
		connection c(cadenaConexion);
		if(c.is_open()){
		nontransaction N(c);
		int size=sql->size();
		result R(N.exec(this->modIC()));
		cout<<"\n Se conecto a la BD "<<" "<<c.dbname();
		}else {
		cout<<"No se conecto a la Base de datos"<<endl;
		return 1;
		}
		c.disconnect();
		}catch (const std::exception &e) {
		cerr<<e.what()<<std::endl;
		return 1;
		}
		return 0;
		}

char* Conexion::modIC(){
	string columna, registro, newRegistro;
		cout<<"Llena los datos correspondientes"<<endl;
		cout << "Nombre de la columna:";
		cin >> columna;
		cout << "Nombre registro que quieres cambiar:";
		cin >> registro;
		cout << "Nombre del nuevo registro que quieres poner:";
		cin >> newRegistro;
		sql =new string("UPDATE icurso SET " + columna + "='" + newRegistro + "' WHERE " + columna + "='" + registro + "';");
	//sql= new string("update persona set nombre='Lobo' where nombre='Antonio'");

		int size;
		size=sql->size()+1;
		char *query=new char[size];
		strcpy(query, sql->c_str());
		return query;
}

int  Conexion::conagrupos(){
try{
connection c(cadenaConexion);
if(c.is_open()){
nontransaction N(c);
int size=sql->size();
result R(N.exec(this->conAG()));
cout<<"\n\n|Clave Materia \t\t |Grado   \t |Matricula Profesor\t|"<<endl;
cout<<"|===============================================================|"<<endl;
for(result::const_iterator c=R.begin(); c!=R.end();++c){
cout<<"|"<<c[0].as<string>()<<"\t\t\t";
cout<<" "<<c[1].as<string>()<<"\t\t";
cout<<" "<<c[2].as<string>()<<"\t\t\t|"<<endl;
}

//cout<<"Se conecto a la BD "<<" "<<c.dbname();
}else {
cout<<"No se conecto a la Base de datos"<<endl;
return 1;
}
c.disconnect();
}catch (const std::exception &e) {
cerr<<e.what()<<std::endl;
return 1;
}
return 0;
}

char* Conexion::conAG(){
sql=new string("select * from agrupos");
int size;
size=sql->size()+1;
char *query=new char[size];
strcpy(query, sql->c_str());
return query;

}

int Conexion::insagrupos(){
	try{
	connection c(cadenaConexion);
	if(c.is_open()){
	nontransaction N(c);
	int size=sql->size();
	result R(N.exec(this->insAG()));
	//cout<<"Se conecto a la BD "<<" "<<c.dbname();
	}else {
	cout<<"No se conecto a la Base de datos"<<endl;
	return 1;
	}
	c.disconnect();
	}catch (const std::exception &e) {
	cerr<<e.what()<<endl;
	return 1;
	}
	return 0;
	cout<<"Se realizo con exito el registro"<<endl;
	}

char* Conexion::insAG(){
	string clave,map, maa;
	cout<<"Llena los datos correspondientes"<<endl;
	cout<<"Clave de la materia:";
	cin>>clave;
	cout << "Grado:";
	cin >> map;
	cout << "Matricula Profesor:";
	cin >> maa;
		sql=new string("INSERT INTO agrupos(clavemateria, grado, matriculap) " \
				       "VALUES ('" + clave + "', '" + map + "','"+ maa + "'\n);");
	//sql= new string("INSERT INTO persona(nombre,rfc)" \
			"VALUES ('Jaime', 'DOJA040707MDF');");

	int size;
	size=sql->size()+1;
	char *query=new char[size];
	strcpy(query, sql->c_str());
	return query;

}

int Conexion::eliagrupos(){
	try{
	connection c(cadenaConexion);
	if(c.is_open()){
	nontransaction N(c);
	int size=sql->size();
	result R(N.exec(this->eliAG()));
	//cout<<"\n Se conecto a la BD "<<" "<<c.dbname();
	}else {
	cout<<"No se conecto a la Base de datos"<<endl;
	return 1;
	}
	c.disconnect();
	}catch (const std::exception &e) {
	cerr<<e.what()<<std::endl;
	return 1;
	}
	return 0;
	}

char* Conexion::eliAG(){
	string columna, reg;
		cout<<"Llena los datos correspondientes"<<endl;
		cout << "Nombre de la columna:";
		cin >> columna;
		cout << "Registro que quieres eliminar:";
		cin >> reg;
		sql =new string ("DELETE from agrupos WHERE " + columna + "='" + reg + "';");
	//sql=new string("DELETE from persona where nombre='Alan'");
	int size;
	size=sql->size()+1;
	char *query=new char[size];
	strcpy(query, sql->c_str());
	return query;
}

int Conexion::modagrupos(){
		try{
		connection c(cadenaConexion);
		if(c.is_open()){
		nontransaction N(c);
		int size=sql->size();
		result R(N.exec(this->modAG()));
		cout<<"\n Se conecto a la BD "<<" "<<c.dbname();
		}else {
		cout<<"No se conecto a la Base de datos"<<endl;
		return 1;
		}
		c.disconnect();
		}catch (const std::exception &e) {
		cerr<<e.what()<<std::endl;
		return 1;
		}
		return 0;
		}

char* Conexion::modAG(){
	string columna, registro, newRegistro;
		cout<<"Llena los datos correspondientes"<<endl;
		cout << "Nombre de la columna:";
		cin >> columna;
		cout << "Nombre registro que quieres cambiar:";
		cin >> registro;
		cout << "Nombre del nuevo registro que quieres poner:";
		cin >> newRegistro;
		sql =new string("UPDATE agrupos SET " + columna + "='" + newRegistro + "' WHERE " + columna + "='" + registro + "';");
	//sql= new string("update persona set nombre='Lobo' where nombre='Antonio'");

		int size;
		size=sql->size()+1;
		char *query=new char[size];
		strcpy(query, sql->c_str());
		return query;
}

int  Conexion::conamp(){
try{
connection c(cadenaConexion);
if(c.is_open()){
nontransaction N(c);
int size=sql->size();
result R(N.exec(this->conAMP()));
cout<<"\n\n|Clave Materia \t\t |Nombre Materia \t |Matricula Profesor\t |Nombre Profesor \t|"<<endl;
cout<<"|===============================================================================================|"<<endl;
for(result::const_iterator c=R.begin(); c!=R.end();++c){
cout<<"|"<<c[0].as<string>()<<"\t\t\t";
cout<<" "<<c[1].as<string>()<<"\t\t\t";
cout<<" "<<c[2].as<string>()<<"\t\t\t";
cout<<" "<<c[3].as<string>()<<"\t\t\t|"<<endl;
}

//cout<<"Se conecto a la BD "<<" "<<c.dbname();
}else {
cout<<"No se conecto a la Base de datos"<<endl;
return 1;
}
c.disconnect();
}catch (const std::exception &e) {
cerr<<e.what()<<std::endl;
return 1;
}
return 0;
}

char* Conexion::conAMP(){
sql=new string("select * from amp");
int size;
size=sql->size()+1;
char *query=new char[size];
strcpy(query, sql->c_str());
return query;

}

int Conexion::insamp(){
	try{
	connection c(cadenaConexion);
	if(c.is_open()){
	nontransaction N(c);
	int size=sql->size();
	result R(N.exec(this->insAMP()));
	//cout<<"Se conecto a la BD "<<" "<<c.dbname();
	}else {
	cout<<"No se conecto a la Base de datos"<<endl;
	return 1;
	}
	c.disconnect();
	}catch (const std::exception &e) {
	cerr<<e.what()<<endl;
	return 1;
	}
	return 0;
	}

char* Conexion::insAMP(){
	string clave,map, maa, mp;
	cout<<"Llena los datos correspondientes"<<endl;
	cout<<"Clave de la materia:";
	cin>>clave;
	cout <<"Nombre materia:";
	cin >>map;
	cout <<"Matricula Profesor:";
	cin >>maa;
	cout<<"Nombre Profesor:";
	cin>>mp;
		sql=new string("INSERT INTO amp(clavemateria, nombrema,matriculap, nombrep) " \
				       "VALUES ('" + clave + "', '" + map + "','"+ maa +"','"+mp+"'\n);");
	//sql= new string("INSERT INTO persona(nombre,rfc)" \
			"VALUES ('Jaime', 'DOJA040707MDF');");

	int size;
	size=sql->size()+1;
	char *query=new char[size];
	strcpy(query, sql->c_str());
	return query;

}

int Conexion::eliamp(){
	try{
	connection c(cadenaConexion);
	if(c.is_open()){
	nontransaction N(c);
	int size=sql->size();
	result R(N.exec(this->eliAMP()));
	//cout<<"\n Se conecto a la BD "<<" "<<c.dbname();
	}else {
	cout<<"No se conecto a la Base de datos"<<endl;
	return 1;
	}
	c.disconnect();
	}catch (const std::exception &e) {
	cerr<<e.what()<<std::endl;
	return 1;
	}
	return 0;
	}

char* Conexion::eliAMP(){
	string columna, reg;
		cout<<"Llena los datos correspondientes"<<endl;
		cout << "Nombre de la columna:";
		cin >> columna;
		cout << "Registro que quieres eliminar:";
		cin >> reg;
		sql =new string ("DELETE from amp WHERE " + columna + "='" + reg + "';");
	//sql=new string("DELETE from persona where nombre='Alan'");
	int size;
	size=sql->size()+1;
	char *query=new char[size];
	strcpy(query, sql->c_str());
	return query;
}

int Conexion::modamp(){
		try{
		connection c(cadenaConexion);
		if(c.is_open()){
		nontransaction N(c);
		int size=sql->size();
		result R(N.exec(this->modAMP()));
		cout<<"\n Se conecto a la BD "<<" "<<c.dbname();
		}else {
		cout<<"No se conecto a la Base de datos"<<endl;
		return 1;
		}
		c.disconnect();
		}catch (const std::exception &e) {
		cerr<<e.what()<<std::endl;
		return 1;
		}
		return 0;
		}

char* Conexion::modAMP(){
	string columna, registro, newRegistro;
		cout<<"Llena los datos correspondientes"<<endl;
		cout << "Nombre de la columna:";
		cin >> columna;
		cout << "Nombre registro que quieres cambiar:";
		cin >> registro;
		cout << "Nombre del nuevo registro que quieres poner:";
		cin >> newRegistro;
		sql =new string("UPDATE amp SET " + columna + "='" + newRegistro + "' WHERE " + columna + "='" + registro + "';");
	//sql= new string("update persona set nombre='Lobo' where nombre='Antonio'");

		int size;
		size=sql->size()+1;
		char *query=new char[size];
		strcpy(query, sql->c_str());
		return query;
}


