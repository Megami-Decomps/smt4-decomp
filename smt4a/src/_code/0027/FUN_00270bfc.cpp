#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x0000 */ u8 unk0000[0x387C];
    /* 0x387C */ s32 state;
} Holder;

/* Returns whether the state is not 0xE. */
u8 FUN_00270bfc(Holder *object)
{
    return object->state != 0xE;
}

} /* extern "C" */
