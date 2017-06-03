#pragma once

class Map
{
private:
	char **mapMatrix;
	int numRows, numColumns;// 36x74;
public:
	Map(void);
	void printMap();
	void modifyMap(int &x, int &y, char element);
	int getX(char element);
	int getY(char element);
	char getCharMatrix(int x, int y); //funci� per retornar el car�cter que es troba en la cel�la
};