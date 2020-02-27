#include <iostream>
#include <string>
#include "FigureFactory.h"

int main() {
    SuperFigureFactoryI superFigureFactoryI;
   auto* figure = superFigureFactoryI.createFigure();
    figure->print();

    return 0;
}
