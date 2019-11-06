//
// Created by MARIA HILDA BERMEJO RIOS on 10/28/19.
//
//----
#ifndef PACMAN_CCIRCULO_H
#define PACMAN_CCIRCULO_H

#include "Udefiniciones.h"
#include "CFigura.h"

class CCirculo:public CFigura {
private:
    tnumeroReal  radio;
public:
    CCirculo( sf::RenderWindow *_palCanvas,tnumeroReal _radio, tnumeroReal _posX, tnumeroReal _posY,
              tnumeroReal _desX, tnumeroReal _desY, sf::Color _color);
    virtual ~CCirculo();
    //--- metodos de acceso ---
    void        setRadio(tnumeroReal _radio) { radio = _radio;}
    tnumeroReal getRadio(){ return radio;}
    void Muestrate() override;
    void Muevete() override;
};


#endif //PACMAN_CCIRCULO_H
