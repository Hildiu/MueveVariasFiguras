//
// Created by Maria Hilda Bermejo on 11/5/19.
//

#include "CFigura.h"


CFigura::CFigura(sf::RenderWindow *_palCanvas, tnumeroReal _posX, tnumeroReal _posY,
                 tnumeroReal _desX, tnumeroReal _desY, sf::Color _color):palCanvas(_palCanvas),
                                                                         posX(_posX),
                                                                         posY(_posY),
                                                                         desX(_desX),
                                                                         desY(_desY),
                                                                         color(_color)
{}

CFigura::~CFigura()
{}
