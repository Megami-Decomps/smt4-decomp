#include "common.h"

extern "C" {

void FUN_00105748(u32 value, void *object);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 value;
} Holder;

/* Calls FUN_00105748 with the word at 4 and the object itself. */
void FUN_0030f3e0(Holder *object)
{
    FUN_00105748(object->value, object);
}

} /* extern "C" */
