#include "shard/Shard003F.h"
#include "util/FUN_003f9ab0.h"

struct UiCoordinateLayout;

extern "C" {

extern void uiCoordinateLayoutInitialize(UiCoordinateLayout *layout);

u32 FUN_003f9ab0(u32 value)
{
    uiCoordinateLayoutInitialize((UiCoordinateLayout *)value);
    return value;
}

} /* extern "C" */
