#include <iostream>
#include <thread>
#include <chrono> //-- para controlar el retardo
#include "CFigura.h"
#include "CCirculo.h"
#include "CRectangulo.h"
#include "CPoligono.h"
#include "CmCirculos.h"
//---
int main()
{
    sf::RenderWindow window(sf::VideoMode(2200, 1200), "SFML works!");
    srand(time(nullptr));

    CmFiguras vdeCirculos(&window,345);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        vdeCirculos.mostrarCirculos();

        window.display();
        std::this_thread::sleep_for(std::chrono::milliseconds(20));
        vdeCirculos.moverCirculos();

    }

    return 0;
}