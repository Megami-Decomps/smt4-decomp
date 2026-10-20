#include "common.h"

extern "C" {

void operatorDeleteArray(u32 value);
void wstrDuplicateInto(u32 *member, u32 value);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 member04;
} Holder;

/* Releases the member at 4 (if any), stores `value` through wstrDuplicateInto and returns the object. */
Holder *onlineStringSetFromRaw(Holder *object, u32 value)
{
    if (object->member04 != 0) {
        operatorDeleteArray(object->member04);
    }
    wstrDuplicateInto(&object->member04, value);
    return object;
}

} /* extern "C" */
