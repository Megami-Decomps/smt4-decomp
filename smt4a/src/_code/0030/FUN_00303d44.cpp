#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ u32 allowed;
} Holder;

/* Returns 1 when every bit of `bits` is set in the word at 0x2C. */
u32 FUN_00303d44(Holder *object, u32 bits)
{
    if ((bits & ~object->allowed) != 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
