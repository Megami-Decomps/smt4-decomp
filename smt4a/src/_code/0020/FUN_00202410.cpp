#include "common.h"

extern "C" {

void FUN_00184c00(u8 *member, s32 a, s32 b);

typedef struct Holder {
    /* 0x0000 */ u8 unk0000[0x1A08];
    /* 0x1A08 */ u8 member1A08[0x118];
    /* 0x1B20 */ u8 state;
} Holder;

/* Unless the state is already 1 or 2, runs FUN_00184c00(member, 0x17, 0) and sets the state to 1. */
void FUN_00202410(Holder *object)
{
    u8 state;

    state = object->state;
    if (state != 2 && state != 1) {
        FUN_00184c00(object->member1A08, 0x17, 0);
        object->state = 1;
    }
}

} /* extern "C" */
