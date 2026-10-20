#include "common.h"

extern "C" {

typedef struct FlagHolder {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u32 flags;
} FlagHolder;

/* Clears the given bits in `flags`. */
void FUN_00164cd0(FlagHolder *object, u32 bits)
{
    object->flags = object->flags & ~bits;
}

} /* extern "C" */
