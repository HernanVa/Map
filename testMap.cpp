#include <iostream>
#include <map>
#include <string>

using namespace std;

int main ()
{
	std::map<char,int> trading;
	int menor, mayor,aux;					//Declaracion de variables
	
	trading['a1'] = 32;						//Valores de la tabla
	trading['a2'] = 22;
	trading['a3'] = 12;
	trading['a4'] = 42;
	trading['a5'] = 27;

	for (std::map<char,int>::iterator it=trading.begin(); it!=trading.end(); ++it)	//Busqueda del Menor valor de LivesContracts
	{
		for (std::map<char,int>::iterator iter=trading.begin(); iter!=trading.end(); ++iter)
  		{
  			if(it->second > iter->second)
  			{
  				menor = iter->second;
			}
		} 
	}
	cout << "El menor es: " << menor << endl;

	for (std::map<char,int>::iterator it=trading.begin(); it!=trading.end(); ++it) //Busqueda del Mayor valor de LivesContracts
	{
		for (std::map<char,int>::iterator iter=trading.begin(); iter!=trading.end(); ++iter)
  		{
  			if(it->second < iter->second)
  			{
				mayor = iter->second;
			}
		}
	}
	cout << "El mayor es: " << mayor << endl;

	cout<<"\n"<<endl;
	std::map<char,int>::reverse_iterator rit;	 //funcion reversa
	for (rit=trading.rbegin(); rit!=trading.rend(); ++rit){
		std::cout << rit->first << " -> " << rit->second << '\n';
	}

	trading.erase('a1');						//Borrado del contenido de la tabla
	trading.erase('a2');
	trading.erase('a3');
	trading.erase('a4');
	trading.erase('a5');
	cout << "\n Contenido borrado \n" <<endl;
	
	trading.insert(std::pair<char, int>('a1', 10)); //Ingresa un valor en la tabla
	trading.insert(std::pair<char, int>('a2', 20)); 
	trading.insert(std::pair<char, int>('a3', 30)); 
	trading.insert(std::pair<char, int>('a4', 40)); 
	trading.insert(std::pair<char, int>('a5', 50)); 
	cout << "\n Contenido ingresado \n" <<endl;	
	
/*	for (std::map<char,int>::iterator it=trading.begin(); it!=trading.end(); ++it){  //Impresion del contenido actual de la tabla
		std::cout << it->first << " => " << it->second << '\n';
	}*/
	for (std::map<char,int>::iterator it=trading.begin(); it!=trading.end(); ++it){  //Entrega la suma total de LivesConstracts
		aux = aux + it->second;
	}
	cout << "\n La suma de Lives Constracts es: " << aux << endl;
}





