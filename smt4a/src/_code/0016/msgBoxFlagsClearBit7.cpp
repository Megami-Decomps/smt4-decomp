#include "common.h"

extern "C" {

typedef struct FlagHolder {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u32 flags;
} FlagHolder;

/* Clears bit 7 of `flags`. */
void msgBoxFlagsClearBit7(FlagHolder *object)
{
    object->flags = object->flags & 0xFFFFFF7F;
}

} /* extern "C" */
