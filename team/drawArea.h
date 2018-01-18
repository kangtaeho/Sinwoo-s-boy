#pragma once
#include "gameNode.h"
#include "tileNode.h"
#include "tile.h"
#include <vector>


class SelectTile;


static HWND _scrollvert;
static HWND _scrollhorz;
static int vertScrollMove = 0;
static int horzScrollMove = 0;

#define TILESIZE 50

#define TILEX 10
#define TILEY 10

#define TILESIZEX TILESIZE * TILEX
#define TILESIZEY TILESIZE * TILEY

static image* _drawArea = IMAGEMANAGER->addImage("drawArea", 800, 700);

#define CAMERASIZEX 3000
#define CAMERASIZEY 3000

struct tagtiles
{
	RECT rc;
};
class drawArea : public gameNode					
{
private:
	vector<tile*> _vtile;

	int x, y;
	tagtiles _tiles[TILEX * TILEY];
	RECT _cameraRc;
	POINT _camera;								
	int _tileX, _tileY; //타일인덱스 구하는 용도.
	int _position;  //현재 타일의 인덱스.

	SelectTile* _SelectedTile;
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


	LRESULT getScrollhWnd(HWND hWnd, UINT imessage, WPARAM wParam, LPARAM lParam);
	void setCamera();
};

