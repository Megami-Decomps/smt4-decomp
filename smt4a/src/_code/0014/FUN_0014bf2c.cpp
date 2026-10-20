#include "common.h"

extern "C" {

typedef struct FlagHolder {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u32 flags;
} FlagHolder;

/* Sets the given bits in `flags`. */
void FUN_0014bf2c(FlagHolder *object, u32 bits)
{
    object->flags = bits | object->flags;
}

} /* extern "C" */
