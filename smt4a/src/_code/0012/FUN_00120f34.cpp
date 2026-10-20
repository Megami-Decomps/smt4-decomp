#include "common.h"

extern "C" {

void FUN_002ebd94(u32 owner, void *object);

typedef struct Child {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 owner;
} Child;

/* Passes the object's owner and the object itself to FUN_002ebd94. */
void FUN_00120f34(Child *object)
{
    FUN_002ebd94(object->owner, object);
}

} /* extern "C" */
