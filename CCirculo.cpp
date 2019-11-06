//
// Created by MARIA HILDA BERMEJO RIOS on 10/28/19.
//
#include <SFML/Graphics.hpp>
#include "CCirculo.h"
//---
CCirculo::CCirculo( sf::RenderWindow *_palCanvas,tnumeroReal _radio, tnumeroReal _posX, tnumeroReal _posY,
                    tnumeroReal _desX, tnumeroReal _desY, sf::Color _color):CFigura(_palCanvas,_posX,_posY,_desX,_desY,_color),
                                                                            radio(_radio)
{}


CCirculo::~CCirculo()
{}


void CCirculo::Muestrate()
{
  sf::CircleShape shape;
  shape.setRadius(radio);
  shape.setPosition(posX,posY);
  shape.setFillColor(color);
  palCanvas->draw(shape);
}

void CCirculo::Muevete()
{
  if( posX + desX + 2*radio > palCanvas->getSize().x)
    desX = desX*(-1);
  if( posX + desX < 0)
    desX = desX*(-1);
  if( posY + desY + 2*radio > palCanvas->getSize().y)
    desY = desY*(-1);
  if( posY + desY < 0)
    desY = desY*(-1);
  posX += desX;
  posY += desY;
}


