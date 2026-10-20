#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x000 */ u8 unk000[0xD0];
    /* 0x0D0 */ u16 values[1];
} Holder;

/* Stores `value` in 16-bit entry `index` of the table at 0xD0. */
void FUN_001c3144(Holder *object, s32 index, u16 value)
{
    object->values[index] = value;
}

} /* extern "C" */
