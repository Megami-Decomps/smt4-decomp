#include "common.h"

extern "C" {

typedef struct BustUp {
    /* 0x000 */ u8 unk000[0x2F4];
    /* 0x2F4 */ s8 hasPortrait;
    /* 0x2F5 */ u8 unk2F5[0x13];
    /* 0x308 */ u32 portraitHandle;
} BustUp;

typedef struct Portrait {
    /* 0x00 */ u8 unk00[0xA3];
    /* 0xA3 */ u8 kind;
} Portrait;

extern BustUp *g_btlTalkBustUp;

extern Portrait *FUN_0031bbc4(u32 handle);

/* Maps the talk bust-up's portrait kind to a code; 0x14 when there is no portrait. */
u32 FUN_0028660c(void)
{
    BustUp *bustUp = g_btlTalkBustUp;

    if (bustUp != NULL) {
        if (bustUp->hasPortrait != 0 && bustUp->portraitHandle != 0) {
            Portrait *portrait = FUN_0031bbc4((u16)bustUp->portraitHandle);
            if (portrait != NULL) {
                switch (portrait->kind) {
                case 1:
                    return 3;
                case 2:
                    return 4;
                case 3:
                    return 5;
                case 4:
                    return 0x10;
                case 5:
                    return 0x11;
                case 6:
                    return 0x12;
                default:
                    return 2;
                }
            }
        }
    }
    return 0x14;
}

} /* extern "C" */
