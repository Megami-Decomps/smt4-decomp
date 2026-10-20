/* Global flag/callback block (smt4a g_flagBlock, 0x594958): two flag bytes, a callback and an id. */
#ifndef SYS_FLAGBLOCK_H
#define SYS_FLAGBLOCK_H

#include "common.h"

typedef struct FlagBlock {
    /* 0x00 */ u8 unk00[0x0d];
    /* 0x0D */ s8 flag0d;
    /* 0x0E */ u8 unk0e[0x0f];
    /* 0x1D */ u8 flag1d;
    /* 0x1E */ u8 unk1e[0x2e];
    /* 0x4C */ void (*callback)(void);  /* optional hook; NULL = use the default */
    /* 0x50 */ u8 unk50[0x44];
    /* 0x94 */ u32 id94;
} FlagBlock;

extern FlagBlock g_flagBlock;

#endif
