PROJECT_ROOT = $(dir $(abspath $(lastword $(MAKEFILE_LIST))))

OBJS = MenuPrincipal.o MenuAGrupos.o MenuAMP.o MenuICurso.o MenuProfesor.o MenuMateria.o MenuAlumno.o MenuPersona.o Conexion.o ConexionPs.o 

ifeq ($(BUILD_MODE),debug)
	CFLAGS += -g
else ifeq ($(BUILD_MODE),run)
	CFLAGS += -O2
else
	$(error Build mode $(BUILD_MODE) not supported by this Makefile)
endif

all:	ConexionPs

ConexionPs:	$(OBJS)
	$(CXX) -o $@ $^ -lpqxx -lpq 

%.o:	$(PROJECT_ROOT)%.cpp
	$(CXX) -c $(CFLAGS) $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

%.o:	$(PROJECT_ROOT)%.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ -lpqxx -lpq $<

clean:
	rm -fr ConexionPs $(OBJS)
