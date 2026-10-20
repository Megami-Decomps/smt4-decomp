#include "common.h"

extern "C" {

typedef struct FlagHolder {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u32 flags;
} FlagHolder;

/* Sets the given bits in `flags`. */
void FUN_00103f74(FlagHolder *holder, u32 bits)
{
    holder->flags |= bits;
}

} /* extern "C" */
