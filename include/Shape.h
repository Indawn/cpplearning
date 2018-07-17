#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
    public:
        Shape();
        virtual ~Shape();
        virtual int do_draw();
        virtual int do_erase();

        int do_sum(int a, int b);
        int do_sum(int a);
    protected:

    private:
};

#endif // SHAPE_H
