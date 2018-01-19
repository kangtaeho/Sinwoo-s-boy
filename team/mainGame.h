#pragma once
#include "gameNode.h"
#include"enemyManager.h"
#include "inventory.h"
#include "player.h"
#include "shop.h"
#include "redEye.h"

class mainGame : public gameNode
{
private:

	//출력 실험용(재호)
	inventory* _inven;

	//통신 실험용(재호)
	player* _mainPlayer;

	//상점 실험용(재호)
	shop* _shop;

	//
	enemyParent* _redEye;

	//적 실험용(태현)
	enemyManager* _em;



public:
	virtual HRESULT init();			
	virtual void release();			
	virtual void update();			
	virtual void render();	


	mainGame();
	~mainGame();
};

