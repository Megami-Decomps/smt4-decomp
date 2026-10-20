#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 *ref;
} Holder;

/* Returns the word `ref` points at plus 8. */
s32 FUN_0030d450(Holder *object)
{
    return *object->ref + 8;
}

} /* extern "C" */
