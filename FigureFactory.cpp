//
// Created by danzolax on 19.02.2020.
//

#include "FigureFactory.h"


Figure *FigureFactoryI::createFigure() const {
    auto* figureI = new FigureI;
    return figureI;
}

Figure *FigureFactoryO::createFigure() const {
    auto* figureO = new FigureO;
    return figureO;
}

Figure *FigureFactoryL::createFigure() const {
    auto* figureL = new FigureL;
    return figureL;
}

Figure *FigureFactoryZ::createFigure() const {
    auto* figureZ = new FigureZ;
    return figureZ;
}

Figure *FigureFactoryT::createFigure() const {
    auto* figureT = new FigureT;
    return figureT;
}

Figure *FigureFactoryS::createFigure() const {
    auto* figureS = new FigureS;
    return figureS;
}

Figure *FigureFactoryJ::createFigure() const {
    auto* figureJ = new FigureJ;
    return figureJ;
}

Figure *SuperFigureFactoryI::createFigure() const {
    auto* superfigureI = new superFigureI;
    return superfigureI;
}

Figure *SuperFigureFactoryO::createFigure() const {
    auto* superfigureO = new superFigureO;
    return superfigureO;
}

Figure *SuperFigureFactoryL::createFigure() const {
    auto* superfigureL = new superFigureL;
    return superfigureL;
}

Figure *SuperFigureFactoryZ::createFigure() const {
    auto* superfigureZ = new superFigureZ;
    return superfigureZ;
}

Figure *SuperFigureFactoryT::createFigure() const {
    auto* superfigureT = new superFigureT;
    return superfigureT;
}

Figure *SuperFigureFactoryS::createFigure() const {
    auto* superfigureS = new superFigureS;
    return superfigureS;
}

Figure *SuperFigureFactoryJ::createFigure() const {
    auto* superfigureJ = new superFigureJ;
    return superfigureJ;
}


