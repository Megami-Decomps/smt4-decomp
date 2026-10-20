#include "common.h"

extern "C" {

typedef struct Options {
    /* 0x00 */ u8 unk00[0x2A];
    /* 0x2A */ s16 unk2A;
    /* 0x2C */ u8 unk2C[0x34];
    /* 0x60 */ u16 flags;
} Options;

extern Options *gameGetOptions(void);
extern s32 FUN_001b34b8(void);

s32 FUN_001ba570(void)
{
    switch (FUN_001b34b8()) {
    case 0:
        return 0;
    case 1:
        return 0;
    case 2: {
        Options *options = gameGetOptions();

        if ((options->flags & 2) != 0 || options->unk2A == 0) {
            return 1;
        }
        return 0;
    }
    default:
        return 0;
    }
}

} /* extern "C" */
