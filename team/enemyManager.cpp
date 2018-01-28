#include "stdafx.h"
#include "enemyManager.h"
#include"player.h"

enemyManager::enemyManager()
{
}


enemyManager::~enemyManager()
{

}


HRESULT enemyManager::init()
{
	this->setGreenSolider();
	this->setBlueSolider();
	IMAGEMANAGER->addImage("������", "./image/Monster/����������Ʈ.bmp", 350, 62, true, RGB(255, 0, 255));
	EFFECTMANAGER->addEffect("������", "./image/Monster/����������Ʈ.bmp", 350, 62, 7, 1, 1.0f, 0.1f, 10);
	_backMoveCount = 0;
	return S_OK;
}
void enemyManager::release()
{
	_effect->release();
}
void enemyManager::update()
{
	for (_viEnemy = _vEnemy.begin(); _viEnemy != _vEnemy.end(); ++_viEnemy)
	{
		(*_viEnemy)->update();
	}

	collision();
	
	sprintf_s(str, "_vEnemy[0] : %d", _vEnemy[0]->getECondistion());

	sprintf_s(str2, "_vEnemy[1] : %d", _vEnemy[1]->getECondistion());
}
void enemyManager::render()	
{
	for (_viEnemy = _vEnemy.begin(); _viEnemy != _vEnemy.end(); ++_viEnemy)
	{
		(*_viEnemy)->render();
	}
	EFFECTMANAGER->render();
	TextOut(getMemDC(), 200, 230, str, strlen(str));
	TextOut(getMemDC(), 200, 260, str2, strlen(str2));
}

void enemyManager::setGreenSolider()
{
	enemyParent* Gsolder;
	Gsolder = new GreenSolider();
	Gsolder->init(PointMake(300,300),0);
	_vEnemy.push_back(Gsolder);
	_vAgro.push_back(Gsolder->getAggro());
}

void enemyManager::setBlueSolider()
{
	for (int i = 0; i < 2; i++)
	{
		enemyParent* Bsolder;
		Bsolder = new BlueSolider();
		Bsolder->init(PointMake(i * 200 + 50, i * 100 + 50), i);

		_vEnemy.push_back(Bsolder);
		_vAgro.push_back(Bsolder->getAggro());
	}
	
}

void enemyManager::collision()
{
	_backMoveCount++;
	
	RECT temp;
	for (int i = 0; i < _vEnemy.size(); i++)
	{
		/*if (IntersectRect(&temp, &_vEnemy[i]->getDefRc(), &RectMake(_ptMouse.x, _ptMouse.y, 50, 50)))
		{
			_vEnemy[i]->backmove(_ptMouse.x, _ptMouse.y , _vEnemy[i]->getImageRC().left, _vEnemy[i]->getImageRC().top);
			_vEnemy[i]->setECondistion(ECondision_Detect);
			//_vEnemy[i]->setAggro(50);
		}
		else
		{
			_vEnemy[i]->setECondistion(ECondision_Patrol);
		}*/

		// ���� ����Ʈ ��׷�
		if (IntersectRect(&temp, &_vEnemy[i]->getDetectRc(), &RectMakeCenter(_ptMouse.x, _ptMouse.y,50,50)))
		{
			for (int j = 0; j < _vAgro.size(); j++)
			{
				if (*_vEnemy[j]->getAggro() == -1) continue;
				else {
					if (*_vEnemy[i]->getAggro() < 0 ) continue;
						_vEnemy[j]->getAni()->stop();
						_vEnemy[j]->setECondistion(ECondision_Detect);
						_vEnemy[j]->getAni()->onceStart();
					
					}
			}
		}

		

		if (_vEnemy[i]->getECondistion() == ECondision_Hited)
		{
			if (_backMoveCount > 80)
			{
				_vEnemy[i]->setECondistion(ECondision_Detect);
				_backMoveCount = 0;
			}
		}
	}
	
}

void enemyManager::removeEnemy(int arrNum)
{

	EFFECTMANAGER->play("������", _vEnemy[arrNum]->getImageRC().left, _vEnemy[arrNum]->getImageRC().top);
	SAFE_DELETE(_viEnemy[arrNum]);
	_vEnemy.erase(_vEnemy.begin() + arrNum);
	
}
