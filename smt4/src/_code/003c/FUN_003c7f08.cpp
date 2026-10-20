/* Hands the unit's signed halfword at +0x8c to FUN_00263630 if it is not negative. */
#include "common.h"

extern "C" {

struct Obj003c7f08 {
    /* 0x00 */ u8 unk00[0x8c];
    /* 0x8c */ s16 index;
};

void FUN_00263630(s32 index, u32 flag);

void FUN_003c7f08(Obj003c7f08 *o)
{
    if (o->index >= 0) {
        FUN_00263630(o->index, 0);
    }
}

}
