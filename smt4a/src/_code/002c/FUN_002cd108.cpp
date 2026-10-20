#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x38B7];
    /* 0x38B7 */ u8 value;
} Holder;

/* Stores `value` in the u8 at 0x38B7. */
void FUN_002cd108(Holder *object, u8 value)
{
    object->value = value;
}

} /* extern "C" */
