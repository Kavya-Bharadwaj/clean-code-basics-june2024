#include "IconType.h"

IconType* getSliderIconObject()
{
    return new SliderIconType();
}

IconType* getSpinnerIconObject()
{
    return new SpinnerIconType();
}

IconType* getHopperIconObject()
{
    return new HopperIconType();
}

int main()
{
    IconType* icon = getSliderIconObject();
    icon->move();
    icon = getSpinnerIconObject();
    icon->move();
    icon = getHopperIconObject();
    icon->move();     

    return 0;
}