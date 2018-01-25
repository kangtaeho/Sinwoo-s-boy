#pragma once
#include "gameNode.h"
#include "SelectTile.h"
#include "drawArea.h"
#include "tileNode.h"




class mapTool : public gameNode
{
private:
	
	HWND _goMainSwitch;

	//타일 레이어 선택 4개
	HWND _btn[4];

	//타일 지우개
	HWND eraser;
	//맵 추가
	HWND addMapBtn;
	HWND addMapPage;
	HWND textMapName;
	HWND textMapSizeX, textMapSizeY;
	HWND addMapOK, addMapFALSE;
	HWND deleteMapBtn;

//타일 개별 속성 설정
	BOOL setAttribute;
	//basic
	HWND setAttribute_Page;

	HWND setAttribute_pageSelect;
	HWND setAttribute_btnOK;
	HWND setAttribute_btnNO;
	//character Attribute
	HWND setAttribute_Char_Patrol;//체크박스?
	//event Attribute
	HWND setAttribute_Ev_Index; //콤보박스 show - EVENT ENUM
	HWND setAttribute_Ev_ActCondition; //콤보박스 show - ACT CONDITION
	HWND setAttribute_Ev_color; // 색 입력
		//index-> 다른맵 이동의 형태 일 때
	HWND setAttribute_Ev_InputParam;


	//맵선택
	HWND comboBoxMap;
	
	//세이브 로드
	HWND save_load[4];



	PAGE_INDEX current_PAGE;
	SWITCH_TILE_LAYER _setTileMode;
	SelectTile* currentTileMode;
	drawArea* _drawArea;
	
	
	
public:
	mapTool();
	~mapTool();

	LRESULT MainProc(HWND, UINT, WPARAM, LPARAM);
	HRESULT init();
	void release();
	void update();
	void render();


	void  setBtnSelect(WPARAM wParam);

	void setUp();


};

