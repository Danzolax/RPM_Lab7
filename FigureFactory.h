//
// Created by danzolax on 19.02.2020.
//

#ifndef UNTITLED5_FIGUREFACTORY_H
#define UNTITLED5_FIGUREFACTORY_H

#include "SuperFigures.h"

class FigureFactory {
public:
    FigureFactory() = default;
    virtual Figure* createFigure() const = 0;
};

class FigureFactoryI : public FigureFactory{
public:
    Figure* createFigure() const override;
};

class FigureFactoryO : public FigureFactory{
public:
    Figure* createFigure() const override;
};

class FigureFactoryL : public FigureFactory{
public:
    Figure* createFigure() const override;
};

class FigureFactoryZ : public FigureFactory{
public:
    Figure* createFigure() const override;
};

class FigureFactoryT : public FigureFactory{
public:
    Figure* createFigure() const override;
};

class FigureFactoryS : public FigureFactory{
public:
    Figure* createFigure() const override;
};

class FigureFactoryJ : public FigureFactory{
public:
    Figure* createFigure() const override;
};

class SuperFigureFactoryI : public FigureFactory{
public:
    Figure* createFigure() const override;
};

class SuperFigureFactoryO : public FigureFactory{
public:
    Figure* createFigure() const override;
};

class SuperFigureFactoryL : public FigureFactory{
public:
    Figure* createFigure() const override;
};

class SuperFigureFactoryZ : public FigureFactory{
public:
    Figure* createFigure() const override;
};

class SuperFigureFactoryT : public FigureFactory{
public:
    Figure* createFigure() const override;
};

class SuperFigureFactoryS : public FigureFactory{
public:
    Figure* createFigure() const override;
};

class SuperFigureFactoryJ : public FigureFactory{
public:
    Figure* createFigure() const override;
};
#endif //UNTITLED5_FIGUREFACTORY_H
