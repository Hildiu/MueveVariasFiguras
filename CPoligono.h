//
// Created by Maria Hilda Bermejo on 11/5/19.
//

#ifndef PACMAN_CPOLIGONO_H
#define PACMAN_CPOLIGONO_H

#include "Udefiniciones.h"
#include "CFigura.h"

class CPoligono:public CFigura {
private:
    tnumeroReal  lado;
    tnumeroReal  numDeLados;
public:
    CPoligono( sf::RenderWindow *_palCanvas,tnumeroReal _lado, tnumeroReal _numDeLados,
               tnumeroReal _posX, tnumeroReal _posY,
               tnumeroReal _desX, tnumeroReal _desY, sf::Color _color);
    virtual ~CPoligono();

    //--- metodos de acceso ---
    void setLado(tnumeroReal _lado) { lado = _lado;}
    tnumeroReal getRadio(){ return lado;}

    void setNumDeLados(tnumeroReal _numDeLados) {numDeLados  = _numDeLados;}
    tnumeroReal getLado2(){ return numDeLados;}
    void Muestrate() override;
    void Muevete() override;
};



#endif //PACMAN_CPOLIGONO_H
