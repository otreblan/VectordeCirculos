//
// Created by Maria Hilda Bermejo on 10/29/19.
//

#include "CmCirculos.h"
#include <iostream>

CmCirculos::CmCirculos(sf::RenderWindow *_palCanvas, size_t n): palCanvas(_palCanvas)
{
	cirArr = new CCirculo[n];
	size = n;
	//--- creamos todos los circulos con valores al azar
	tnumeroReal _radio;
	tnumeroReal _posX;
	tnumeroReal _posY;
	tnumeroReal _desX;
	tnumeroReal _desY;
	for(size_t i=0; i<n; i++)
	{
		_radio = rand()%50+2;
		_posX = (float) palCanvas->getSize().x/2 - _radio;
		_posY = (float) palCanvas->getSize().y/2 - _radio;
		_desX = rand()%9;
		_desY = rand()%9;
		auto _color = sf::Color(rand()%250,rand()%250,rand()%250);
		cirArr[i] = CCirculo(palCanvas, _radio, _posX, _posY, _desX, _desY,_color);
		//v.push_back(cirArr[n]);
		//cirArr[n] = unCirculo;
	}
}


CmCirculos::~CmCirculos()
{
	delete [] cirArr;
	cirArr = NULL;
}

void CmCirculos::mostrarCirculos()
{
	for(size_t i=0; i< size; i++)
	{
		cirArr[i].Muestrate();
	}
}

void CmCirculos::moverCirculos()
{
	for(size_t i=0; i< size; i++)
		cirArr[i].Muevete();
}
