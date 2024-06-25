#ifndef __ICON_H__
#define __ICON_H__

class IconType
{
    protected:
        float speed, glow, energy;
        int x, y;
    public:
        virtual void move() = 0;
        virtual void flair() = 0;
};

class SliderIconType : public IconType
{
    bool vertical; // need for slider 
    int distance; // need for slider

    public:
        virtual void move();
        virtual void flair();
};

class SpinnerIconType : public IconType
{
    bool clockwise; // need for spinner
    bool expand; // need for spinner

    public:
        virtual void move();
        virtual void flair();
};

class HopperIconType : public IconType
{
    bool visible; // need for hopper 
    int xcoord, ycoord; // need for hopper

    public:
        virtual void move();
        virtual void flair();
};

#endif