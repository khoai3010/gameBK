#include "Header\common.h"

string mapPath = "C:\\projects\\Cpp\\GameBKProject\\gameBK\\map\\";

Map::Map(int id, Vector2 position)
{
	srand(time(0));
	Map::path = mapPath + Map::name + to_string(Map::id);
	Map::position = position;
}

void Map::GenerateMap()
{

}

void Map::GenerateFile()
{

}

void Map::MapOverview()
{

}

string Map::MapPath()
{
	return Map::path;
}