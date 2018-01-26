#pragma once
#include "gameNode.h"
#include "tileNode.h"
#include "tile_maptool.h"
#include <map>
#include <vector>


class SelectTile;

#define areaStartX 50
#define areaStartY 50
#define areaSizeX 800
#define areaSizeY 800

#define TILEX 10
#define TILEY 10

#define TILESIZEX TILESIZE * TILEX
#define TILESIZEY TILESIZE * TILEY

static image* _drawArea = IMAGEMANAGER->addImage("drawArea", 800, 700);



struct tagMapMap
{
	vector<tile_maptool*> vTile;
	string fileName;
	int tileX, tileY;
};


class drawArea : public gameNode					
{
private:
	typedef map<string, tagMapMap> mMap;
private:
	mMap _mMap;
	vector<tile_maptool*>* _vCurrentTile;

	string currentName;
	int tileSizeX, tileSizeY;
	int _tileX, _tileY; //타일인덱스 구하는 용도.
	int _position;  //현재 타일의 인덱스.

	HWND _scrollvert;
	HWND _scrollhorz;
	int horzScrollMove;
	int vertScrollMove;

	int _maxCameraSize;
	int _minCameraSize;
	int tileSize;

	SelectTile* _SelectedTile;

	BOOL eraser;
	SWITCH_TILE_LAYER currentLayer;

	bool _click;
	POINT temp;
public:
	drawArea();
	~drawArea();

	HRESULT init();
	void release();
	void update();
	void render();

	image* getArea() { return _drawArea; }
	HDC getAreaDC() { return _drawArea->getMemDC(); }

	void keyDownUpdate(int key);

	void LinkWithSelectTile(SelectTile* selectedTile) { _SelectedTile = selectedTile; }

	void addMap(LPSTR mapKey, int sizeX, int sizeY);
	void deleteMap(LPSTR mapKey);
	
	void changeCurrentMapSet(string name);

	void setEraser(BOOL state) { eraser = state; }
	void setCurrentLayer(SWITCH_TILE_LAYER layer) { currentLayer = layer; }

	void saveMap();
	void saveMapAll();
	string loadMap(string fileName);
	void addMap_load(tagMapMap mapmap);
	void loadMapAll();
	void sendhorzScrollMessage(WPARAM wParam);
	void sendvertScrollMessage(WPARAM wParam);
	void sendWheelMessage(WPARAM wParam);
	void sendMouseMove(LPARAM lParam);

	//setAttribute관련
	BOOL mouseOnTile() { if ((_tileX >= 0 && _tileX < tileSizeX) && (_tileY >= 0 && _tileY < tileSizeY)) return true; else return false; }
	POINT getTileAtMouse() { return { _tileX,_tileY }; }
	POINT getTileRectPoint(POINT tileIndex) {
		return { (*_vCurrentTile)[tileIndex.x + tileIndex.y*tileSizeX]->getRect().left - horzScrollMove+areaStartX,(*_vCurrentTile)[tileIndex.x + tileIndex.y*tileSizeX]->getRect().top - vertScrollMove +areaStartY};
	}
	BOOL characterInTile(POINT tileIndex) { if ((*_vCurrentTile)[tileIndex.x + tileIndex.y*tileSizeX]->getCharacter().CHARACTER_INDEX != CHARACTER_NONE) return true; else return false; }
	void setCharacterAttribute(POINT tileIndex,vector<POINT> ptrolIndex) { (*_vCurrentTile)[tileIndex.x + tileIndex.y*tileSizeX]->setCharacterAttribute(ptrolIndex); }
	void eraseCharacterAttribute(){}
	void setEventAttribute(POINT tileIndex,EVENT EVENT_INDEX, ACTING_CONDITION ACT_CONDITION_INDEX, COLORREF color, string current, string next, int param1, int param2, int param3)
	{
		(*_vCurrentTile)[tileIndex.x + tileIndex.y*tileSizeX]->setEvent(EVENT_INDEX, ACT_CONDITION_INDEX, color, currentName, next, param1, param2, param3);
	}
};

