#include <iostream>
using namespace std;


//Clase padre, contiene todos los metodos que se van a heredar
class ClasePadre {
protected:
public:
	void metodo1(void) {
		cout << "Metodo que sera llamado desde la subclase 1" << endl;
	}
	void metodo2(void) {
		cout << "Metodo que sera llamado desde la subclase 2" << endl;
	}
	void metodo3(void) {
		cout << "Metodo que sera llamado desde la subclase 3" << endl;
	}
	void metodo4(void) {
		cout << "Metodo que sera llamado desde la subclase 4" << endl;
	}
	void metodo5(void) {
		cout << "Metodo que sera llamado desde la subclase 5" << endl;
	}
};

//Se crean las subclases que heredan de la clase padre
class claseDerivada1: public ClasePadre {};
class claseDerivada2: public ClasePadre {};
class claseDerivada3: public ClasePadre{};
class claseDerivada4: public ClasePadre{};
class claseDerivada5: public ClasePadre{};

int main() {
	//Se crean los objetos
	//subclase		objeto
	claseDerivada1 obj1;
	claseDerivada2 obj2;
	claseDerivada3 obj3;
	claseDerivada4 obj4;
	claseDerivada5 obj5;

	//llamamos al metodo x desde el objeto x
	//objeto 1, metodo1
	obj1.metodo1();
	obj2.metodo2();
	obj3.metodo3();
	obj4.metodo4();
	obj5.metodo5();

	cout << "\nComo todos los metodo estan en la clase principal, las subclases heredan TODOS los metodos" << endl;
	cout << "por ejemplo, al intentar llamar el metodo 1 desde la subclase 5 este es el resultado: " << endl;
	//objeto creado desde la subclase 5, llamando al metodo1
	obj5.metodo1();
	cout << "\n y aunque parece que estamos haciendo lo mismo de antes si vemos el codigo el objeto es de la subclase 5" << endl;

	return 0;
}