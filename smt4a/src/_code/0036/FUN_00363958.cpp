#include "common.h"

struct Object00363958 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 value;
    /* 0x08 */ u8 unk08[0x24];
    /* 0x2c */ void *child;
};

extern "C" {

void FUN_00300154(void *child);

/* Stores the value at 4 and notifies the child (0x2c) if there is one. */
void FUN_00363958(Object00363958 *object, u32 value)
{
    object->value = value;
    if (object->child != NULL)
        FUN_00300154(object->child);
}

} /* extern "C" */
