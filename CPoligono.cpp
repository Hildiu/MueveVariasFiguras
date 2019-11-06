//
// Created by Maria Hilda Bermejo on 11/5/19.
//

#include "CPoligono.h"

CPoligono::CPoligono( sf::RenderWindow *_palCanvas,tnumeroReal _lado, tnumeroReal _numDeLados,
                      tnumeroReal _posX, tnumeroReal _posY,
                      tnumeroReal _desX, tnumeroReal _desY, sf::Color _color):
  CFigura(_palCanvas,_posX,_posY,_desX,_desY,_color),
  lado(_lado),
  numDeLados(_numDeLados)
{}

CPoligono::~CPoligono()
{}


void CPoligono::Muestrate()
{
  sf::CircleShape shape(lado,numDeLados);
  shape.setPosition(posX,posY);
  shape.setFillColor(color);
  sf::CircleShape triangle(80.f, 3);
  palCanvas->draw(shape);
}


void CPoligono::Muevete()
{
  if( posX + desX + 2*lado > palCanvas->getSize().x)
    desX = desX*(-1);
  if( posX + desX < 0)
    desX = desX*(-1);
  if( posY + desY + 2*lado > palCanvas->getSize().y)
    desY = desY*(-1);
  if( posY + desY < 0)
    desY = desY*(-1);
  posX += desX;
  posY += desY;

}