//
// Created by Maria Hilda Bermejo on 10/29/19.
//

#include "CmCirculos.h"
#include "CRectangulo.h"
#include "CPoligono.h"

CmFiguras::CmFiguras(sf::RenderWindow *_palCanvas, size_t n): palCanvas(_palCanvas)
{
  //--- creamos todos los circulos con valores al azar
  tnumeroReal  _radio;
  tnumeroReal  _posX;
  tnumeroReal  _posY;
  tnumeroReal  _desX;
  tnumeroReal  _desY;
  tnumeroReal  _lado1;
  tnumeroReal  _lado2;
  tnumeroReal  _lado;
  tnumeroReal  _tipodeFigura;
  tnumeroReal  _numDeLados;
  for(size_t i=0; i<n; i++)
  {
    _tipodeFigura = rand()%3+1;

    _posX = (float) palCanvas->getSize().x/2 - _radio;
    _posY = (float) palCanvas->getSize().y/2 - _radio;
    _desX = rand()%9+1;
    _desY = rand()%9+1;
    auto _color = sf::Color(rand()%250,rand()%250,rand()%250);

    CFigura *paFigura= nullptr;
    switch((int)_tipodeFigura)
    {
      case 1: //-- circulo
            _radio = rand()%50+2;
            paFigura = new CCirculo(palCanvas, _radio, _posX, _posY, _desX, _desY,_color);
            break;
      case 2: //--- rectangulo
             _lado1 = rand()%70 + 4;
             _lado2 = rand()%70 + 4;
            paFigura = new CRectangulo(palCanvas,_lado1,_lado2,_posX,_posY,_desX,_desY,_color );
            break;
      case 3: //---- poligono
           _lado = rand()%70 + 4;
           _numDeLados = rand()%15 + 3;
           paFigura = new CPoligono(palCanvas,_lado, _numDeLados,_posX,_posY,_desX,_desY,_color);
           break;
    }

    v.push_back(paFigura);
  }
}


CmFiguras::~CmFiguras()
{
  for(size_t i=0; i< v.size(); i++)
    delete v[i];
}

void CmFiguras::mostrarCirculos()
{
  for(size_t i=0; i< v.size(); i++)
    v[i]->Muestrate();
}

void CmFiguras::moverCirculos()
{
  for(size_t i=0; i< v.size(); i++)
    v[i]->Muevete();
}
