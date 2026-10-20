#include "common.h"

extern "C" {

void FUN_002e98d4(u32 value);
void FUN_0030ffac(u32 *member, u32 value);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 member04;
} Holder;

/* Releases the member at 4 (if any), stores `value` through FUN_0030ffac and returns the object. */
Holder *FUN_002ea0c8(Holder *object, u32 value)
{
    if (object->member04 != 0) {
        FUN_002e98d4(object->member04);
    }
    FUN_0030ffac(&object->member04, value);
    return object;
}

} /* extern "C" */
