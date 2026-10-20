#include "common.h"

extern "C" {

typedef struct FlagHolder {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ u32 flags;
} FlagHolder;

/* Sets the given bits in `flags`. */
void FUN_002ed206(FlagHolder *object, u32 bits)
{
    object->flags = object->flags | bits;
}

} /* extern "C" */
