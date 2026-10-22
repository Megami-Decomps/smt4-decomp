#include "common.h"

namespace {
struct SaveOptionFlags {
    /* 0x00 */ u8 unk00[0x13];
    /* 0x13 */ u8 option7;
    /* 0x14 */ u8 option8;
    /* 0x15 */ u8 unk15;
    /* 0x16 */ u8 bits; /* bit 0: option 10, bit 1: option 15 */
    /* 0x17 */ u8 option9;
};

struct SaveOptionBlock {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ SaveOptionFlags flags;
};
}

extern "C" {

SaveOptionBlock *FUN_0026140c(void);

/* Whether the saved option with the given index is on. */
s32 saveOptionIsEnabled(s32 option)
{
    SaveOptionFlags *flags = &FUN_0026140c()->flags;
    switch (option) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 11:
    case 12:
    case 13:
    case 14:
        return 0;
    case 7:
        return flags->option7 == 1;
    case 8:
        return flags->option8 == 1;
    case 9:
        return flags->option9 == 1;
    case 10:
        return flags->bits & 1;
    case 15:
        return (flags->bits & 2) >> 1;
    }
    return 0;
}

} /* extern "C" */
