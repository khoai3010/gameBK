#include "Header\common.h"

string mapPath = "C:\\projects\\Cpp\\GameBKProject\\gameBK\\map\\map.txt";

Map::Map(int id, Vector2 position)
{
	Map::path = mapPath + Map::name + to_string(Map::id);
	Map::position = position;
	Map::GenerateFile();
	Map::GenerateMap();
}

void Map::GenerateMap()
{
	Modul tree;
	Vector3 treePos(1, 3, 5);
	XY[treePos.x][treePos.y];
	tree.AddToMap(Map::path);
}

void Map::GenerateFile()
{
	ofstream mapFile;

	mapFile.open(path, ios::out);

	mapFile << name << endl;

}

void Map::MapOverview()
{

}

string Map::MapPath()
{
	return Map::path;
}