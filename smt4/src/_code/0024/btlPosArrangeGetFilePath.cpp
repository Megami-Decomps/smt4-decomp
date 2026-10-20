#include "common.h"

extern "C" {

typedef struct PosArrange {
    /* 0x00 */ u8 unk00[0xC0];
    /* 0xC0 */ s32 setA;    /* index of the 00_ file, or negative */
    /* 0xC4 */ s32 setB;    /* index of the 01_ file, or negative */
} PosArrange;

extern void memClear(void *block, s32 size);
extern void FUN_002522f8(char *dest, s32 size, const char *format, ...);

/* Builds the path of the battle position-arrange file for the selected set into a local buffer
 * (cleared when no set is selected) and returns it. */
char *btlPosArrangeGetFilePath(PosArrange *arrange)
{
    char path[128];

    memClear(path, 128);
    if (arrange->setA >= 0) {
        FUN_002522f8(path, 128, "battle/pos_arrange/00_%04d.earg", arrange->setA);
    } else if (arrange->setB >= 0) {
        FUN_002522f8(path, 128, "battle/pos_arrange/01_%04d.earg", arrange->setB);
    }
    return path;
}

} /* extern "C" */
