#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x000 */ u8 unk000[0x120];
    /* 0x120 */ u16 value;
} Holder;

/* Returns the 16-bit value at 0x120. */
u16 FUN_001244fc(Holder *object)
{
    return object->value;
}

} /* extern "C" */
