#include "common.h"

extern "C" {

void ownedPtrReset(u8 *member);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 member04[1];
} Holder;

/* Runs ownedPtrReset on the member at 4 and returns the object. */
Holder *FUN_002fb008(Holder *object)
{
    ownedPtrReset(object->member04);
    return object;
}

} /* extern "C" */
