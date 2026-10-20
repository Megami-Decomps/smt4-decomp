#include "common.h"

extern "C" {

typedef struct PosArrange {
    /* 0x00 */ u8 unk00[0xEC];
    /* 0xEC */ s32 first;
    /* 0xF0 */ s32 second;
} PosArrange;

s32 sysMemClear(char *buffer, s32 size);
s32 FUN_001028b8(char *buffer, s32 size, const char *format, ...);

/* Builds the position-arrange data file name for the first or second set that is present (returns the buffer, as retail does). */
char *btlPosArrangeGetFileName(PosArrange *arrange)
{
    char name[128];

    sysMemClear(name, 128);
    if (arrange->first >= 0) {
        FUN_001028b8(name, 128, "battle/pos_arrange/00_%04d.earg", arrange->first);
    } else if (arrange->second >= 0) {
        FUN_001028b8(name, 128, "battle/pos_arrange/01_%04d.earg", arrange->second);
    }
    return name;
}

} /* extern "C" */
