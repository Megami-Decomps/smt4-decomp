#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ s16 value;
} Holder;

/* Returns whether the halfword at 0x48 is nonzero. */
u8 FUN_00162848(Holder *object)
{
    return object->value != 0;
}

} /* extern "C" */
