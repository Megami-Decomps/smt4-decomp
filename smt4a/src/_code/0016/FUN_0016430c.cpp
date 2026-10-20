#include "common.h"

extern "C" {

typedef struct FlagHolder {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u32 flags;
} FlagHolder;

/* Returns whether any of the given bits is set in `flags`. */
u8 FUN_0016430c(FlagHolder *object, u32 bits)
{
    return (object->flags & bits) != 0;
}

} /* extern "C" */
