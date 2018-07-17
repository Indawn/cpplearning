#ifndef LINE_H
#define LINE_H

#include "Shape.h"


class Line : public Shape
{
    public:
        Line();
        virtual ~Line();
        int do_draw();
        int do_erase();
    protected:

    private:
};

#endif // LINE_H
