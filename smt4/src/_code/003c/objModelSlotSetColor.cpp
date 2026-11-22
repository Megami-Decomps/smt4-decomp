/* Gives the unit's model slot (its signed halfword at +0x8c, when not negative) the colour. */
#include "common.h"

extern "C" {

struct Obj003c7f08 {
    /* 0x00 */ u8 unk00[0x8c];
    /* 0x8c */ s16 index;
};

void asdModelSlotSetColor(u32 slot, u32 bank, f32 red, f32 green, f32 blue);

void objModelSlotSetColor(Obj003c7f08 *o, f32 red, f32 green, f32 blue)
{
    if (o->index >= 0) {
        asdModelSlotSetColor(o->index, 0, red, green, blue);
    }
}

}
