#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>
#include <windows.h>
#include <sstream>
#include <stdlib.h>
//#include "BOMB.h"
#include "BOARD.h"
#include "SHIP.h"

using namespace std;

int main()
{
	srand(time(NULL));
	/*
	string name1, name2;
	string fich1, fich2;

	cout << "Jogador 1 introduza o nome: ";
	getline(cin, name1);
	cout << name1 << " introduza o nome do ficheiro a utilizar: ";
	cin >> fich1;
	cin.ignore(1000, '\n');

	cout << "Jogador 2 introduza o nome: ";
	getline(cin, name2);
	cout << name2 << " introduza o nome do ficheiro a utilizar: ";
	cin >> fich2;
	cin.ignore(1000, '\n');
	*/
	Board b("p1.txt");
	
	b.show();
	cout << endl;
	

	for (int i = 0; i < 10; i++)
		b.putShip(b.navios()[i], i);

	b.display();

	return 0;
}