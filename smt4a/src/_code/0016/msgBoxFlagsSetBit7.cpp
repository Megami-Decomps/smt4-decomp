#include "common.h"

extern "C" {

typedef struct FlagHolder {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u32 flags;
} FlagHolder;

/* Sets bit 7 of `flags`. */
void msgBoxFlagsSetBit7(FlagHolder *object)
{
    object->flags = object->flags | 0x80;
}

} /* extern "C" */
