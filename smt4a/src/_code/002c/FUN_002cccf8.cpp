#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x0000 */ u8 unk0000[0x387C];
    /* 0x387C */ s32 state;
} Holder;

/* Returns 1 when the state is one of 0, 6, 0x12..0x17, 0x19..0x1B and 0x28. */
u32 FUN_002cccf8(Holder *object)
{
    s32 state;
    u32 result;

    state = object->state;
    if ((((state == 0 || state == 0x12) || (state == 0x13 || state == 0x14)) ||
         (state == 0x15 || state == 0x16)) ||
        (((state == 0x17 || state == 0x19 || (state == 0x1A || state == 0x1B)) ||
          (state == 6 || state == 0x28)))) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}

} /* extern "C" */
