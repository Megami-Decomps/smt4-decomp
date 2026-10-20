#include "common.h"

extern "C" {

void onlineUrlEnsureParsed(void *object);

typedef struct Optional {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 value;
    /* 0x09 */ u8 unk09[0x5C];
    /* 0x65 */ u8 valid;
} Optional;

/* Resets the optional, stores `value` and clears `valid`. */
void FUN_002e99e4(Optional *object, u8 value)
{
    onlineUrlEnsureParsed(object);
    object->value = value;
    object->valid = 0;
}

} /* extern "C" */
