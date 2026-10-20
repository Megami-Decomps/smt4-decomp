#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 value;
} Holder;

/* Stores `value` with its low byte cleared in the word at 0x38. */
void FUN_001527d8(Holder *object, u32 value)
{
    object->value = value & 0xFFFFFF00;
}

} /* extern "C" */
