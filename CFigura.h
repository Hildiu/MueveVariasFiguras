//
// Created by Maria Hilda Bermejo on 11/5/19.
//

#ifndef PACMAN_CFIGURA_H
#define PACMAN_CFIGURA_H

#include "Udefiniciones.h"

class CFigura {
protected:
    sf::RenderWindow *palCanvas= nullptr;
    tnumeroReal  posX;
    tnumeroReal  posY;
    tnumeroReal  desX;
    tnumeroReal  desY;
    sf::Color color;
public:
    CFigura(sf::RenderWindow *_palCanvas, tnumeroReal _posX, tnumeroReal _posY,
            tnumeroReal _desX, tnumeroReal _desY, sf::Color _color);
    virtual ~CFigura();
    //--- metodos de acceso ---
    void setPosX(tnumeroReal _posX) {posX =_posX; }
    tnumeroReal getPosX(){ return posX;}

    void setPosY(tnumeroReal _posY) {posY =_posY; }
    tnumeroReal getPosY(){ return posY;}

    void setDesX(tnumeroReal _desX) {desX =_desX; }
    tnumeroReal getDesX(){ return desX;}

    void setDesY(tnumeroReal _desY) {desY =_desY; }
    tnumeroReal getDesY(){ return desY;}

    void setColor(sf::Color _color) { color = _color;}
    sf::Color getColor(){ return color;}

    virtual void Muestrate()=0;
    virtual void Muevete()=0;
};



#endif //PACMAN_CFIGURA_H
