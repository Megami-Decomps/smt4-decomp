#include "common.h"

extern "C" {

typedef struct FlagHolder {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u32 flags;
} FlagHolder;

/* Returns the 0x80 bit of `flags` (nonzero when set). */
u32 FUN_001032b4(FlagHolder *holder)
{
    return holder->flags & 0x80;
}

} /* extern "C" */
