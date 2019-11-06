//
// Created by Maria Hilda Bermejo on 11/5/19.
//

#include "CRectangulo.h"

CRectangulo::CRectangulo( sf::RenderWindow *_palCanvas,tnumeroReal _lado1, tnumeroReal _lado2,
                          tnumeroReal _posX, tnumeroReal _posY,
                          tnumeroReal _desX, tnumeroReal _desY, sf::Color _color):
  CFigura(_palCanvas,_posX,_posY,_desX,_desY,_color),
  lado1(_lado1),
  lado2(_lado2)
{ }


CRectangulo::~CRectangulo()
{ }


void CRectangulo::Muestrate()
{
  sf::RectangleShape rectangle(sf::Vector2f(lado1, lado2));
  rectangle.setPosition(posX,posY);
  rectangle.setFillColor(color);
  palCanvas->draw(rectangle);
}

void CRectangulo::Muevete()
{
  if( posX + desX + lado1 > palCanvas->getSize().x)
    desX = desX*(-1);
  if( posX + desX < 0)
    desX = desX*(-1);
  if( posY + desY + lado2 > palCanvas->getSize().y)
    desY = desY*(-1);
  if( posY + desY < 0)
    desY = desY*(-1);
  posX += desX;
  posY += desY;
}

