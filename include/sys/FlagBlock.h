/* Global flag/callback block (smt4a g_flagBlock, 0x594958): three flag bytes (0x03, 0x0d, 0x1d), a callback and an id. */
#ifndef SYS_FLAGBLOCK_H
#define SYS_FLAGBLOCK_H

#include "common.h"

typedef struct FlagBlock {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ s8 flag03;
    /* 0x04 */ u8 unk04[9];
    /* 0x0D */ s8 flag0d;
    /* 0x0E */ u8 unk0e[7];
    /* 0x15 */ u8 flag15;
    /* 0x16 */ u8 unk16[7];
    /* 0x1D */ u8 flag1d;
    /* 0x1E */ u8 unk1e[0x2e];
    /* 0x4C */ void (*callback)(void);  /* optional hook; NULL = use the default */
    /* 0x50 */ u8 unk50[0x44];
    /* 0x94 */ u32 id94;
} FlagBlock;

extern FlagBlock g_flagBlock;

#endif
