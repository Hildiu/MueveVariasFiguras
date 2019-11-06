//
// Created by Maria Hilda Bermejo on 11/5/19.
//

#ifndef PACMAN_CRECTANGULO_H
#define PACMAN_CRECTANGULO_H

#include "Udefiniciones.h"
#include "CFigura.h"

class CRectangulo:public CFigura {
private:
    tnumeroReal  lado1;
    tnumeroReal  lado2;
public:
    CRectangulo( sf::RenderWindow *_palCanvas,tnumeroReal _lado1, tnumeroReal _lado2,
                 tnumeroReal _posX, tnumeroReal _posY,
                 tnumeroReal _desX, tnumeroReal _desY, sf::Color _color);
    virtual ~CRectangulo();

    //--- metodos de acceso ---
    void setLado1(tnumeroReal _lado1) { lado1 = _lado1;}
    tnumeroReal getRadio(){ return lado1;}

    void setLado2(tnumeroReal _lado2) { lado2 = _lado2;}
    tnumeroReal getLado2(){ return lado2;}

    void Muestrate() override;
    void Muevete() override;
};


#endif //PACMAN_CRECTANGULO_H
