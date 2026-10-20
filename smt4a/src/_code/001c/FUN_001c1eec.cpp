#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x000 */ u8 unk000[0x10C];
    /* 0x10C */ u16 values[1];
} Holder;

/* Stores `value` in 16-bit entry `index` of the table at 0x10C. */
void FUN_001c1eec(Holder *object, s32 index, u16 value)
{
    object->values[index] = value;
}

} /* extern "C" */
