/* Hands the unit's signed halfword at +0x8c to asdModelSlotSetColor if it is not negative. */
#include "gfx/ModelSlotColorApi.h"

extern "C" {

struct Obj003c7f08 {
    /* 0x00 */ u8 unk00[0x8c];
    /* 0x8c */ s16 index;
};



void objModelSlotClearColor(Obj003c7f08 *o, f32 red, f32 green, f32 blue)
{
    if (o->index >= 0) {
        asdModelSlotSetColor(o->index, 0, red, green, blue);
    }
}

}
