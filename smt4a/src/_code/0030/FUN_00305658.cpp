#include "common.h"

extern "C" {

void FUN_002ee50c(...);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 first;
    /* 0x1C */ u32 second;
    /* 0x20 */ u32 value;
} Holder;

/* Stores `value` at 0x20, runs FUN_002ee50c on the first object, then on the second with the stored value. */
void FUN_00305658(Holder *object, u32 value)
{
    object->value = value;
    FUN_002ee50c(object->first);
    FUN_002ee50c(object->second, object->value);
}

} /* extern "C" */
