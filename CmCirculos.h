//
// Created by Maria Hilda Bermejo on 10/29/19.
//

#ifndef PACMAN_CMCIRCULOS_H
#define PACMAN_CMCIRCULOS_H

#include "CCirculo.h"

class CmFiguras {
private:
    sf::RenderWindow *palCanvas= nullptr;
    vector<CFigura*> v;
public:
  CmFiguras(sf::RenderWindow *_palCanvas, size_t n);
  ~CmFiguras();
  void mostrarCirculos();
  void moverCirculos();

  vector<CFigura*> getVectordeCirculos(){ return v;}
};


#endif //PACMAN_CMCIRCULOS_H
