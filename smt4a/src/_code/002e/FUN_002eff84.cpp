#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 value;
} Holder;

/* Returns whether the word at 0xC is nonzero. */
u8 FUN_002eff84(Holder *object)
{
    return object->value != 0;
}

} /* extern "C" */
