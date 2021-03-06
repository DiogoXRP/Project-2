#include "POSITION.h"
#include "BOMB.h"
#include <cstdlib>
#include <iostream>

Bomb::Bomb(Position<char> targetPosition)
{
	targetLine = toupper(targetPosition.lin);
	targetColumn = tolower(targetPosition.col);

	bomb_deviation();
}

void Bomb::bomb_deviation()
{
	int i;
	i = rand() % 10; // gera um numero entre 0 e 9 para ter uma probabilidade de 40% de alterar a trajectória

	if (i == 0)
		targetLine = targetLine - 1;

	else if (i == 1)
		targetColumn = targetColumn - 1;

	else if (i == 2)
		targetLine = targetLine + 1;

	else if (i == 3)
		targetColumn = targetColumn + 1;
}

Position<char> Bomb::getTargetPosition() const
{
	Position<char> bom_position;

	bom_position.lin = targetLine;
	bom_position.col = targetColumn;

	return bom_position;
}

void Bomb::show() const
{
	std::cout << targetLine << targetColumn;
}



