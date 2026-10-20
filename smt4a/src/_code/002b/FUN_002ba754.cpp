#include "common.h"

extern "C" {

typedef struct NaviMain {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ s32 busy;
    /* 0x5C */ u8 unk5c[0xC];
    /* 0x68 */ u8 panel[4];
} NaviMain;

extern NaviMain *g_naviMain; /* 0x587f28 */

extern int FUN_004920d4(u8 *panel);
extern int sceneTexturesAreLoaded(void);

u32 FUN_002ba754(void)
{
    if (sceneTexturesAreLoaded() == 0) {
        return 0;
    }
    if (g_naviMain->busy != 0) {
        return 0;
    }
    FUN_004920d4(g_naviMain->panel);
    return 0;
}

}
