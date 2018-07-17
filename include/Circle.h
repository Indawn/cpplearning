#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"


class Circle : public Shape
{
    public:
        Circle();
        virtual ~Circle();
        int do_draw();
        int do_erase();

        int do_sum(int a, int b, int c);

    protected:

    private:
};

#endif // CIRCLE_H
