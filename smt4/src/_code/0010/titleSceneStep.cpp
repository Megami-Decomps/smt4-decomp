#include "common.h"

extern "C" {

typedef struct TitleState001027d4 {
    /* 0x00 */ s8 skipped;
    /* 0x01 */ s8 ready;
    /* 0x02 */ u8 unk02[6];
    /* 0x08 */ u32 sceneArg;
} TitleState001027d4;

s32 FUN_002c5210(void);
s32 FUN_002c501c(void);
void FUN_002c4f8c(u32 scene, s32 arg);
void FUN_002c4e98(u32 arg);

extern TitleState001027d4 g_titleFlags; /* 0x446db0 */
extern u32 g_titleScene; /* 0x44ea00 */

/* Title scene step: when FUN_002c5210 reports 1 and the title is ready, forwards the pending value and starts the scene unless skipped. */
u32 titleSceneStep(void)
{
    if (FUN_002c5210() == 1 && g_titleFlags.ready != 0) {
        if (FUN_002c501c() != 0) {
            FUN_002c4f8c(g_titleScene, FUN_002c501c());
        }
        if (g_titleFlags.skipped == 0) {
            FUN_002c4e98(g_titleFlags.sceneArg);
        }
    }
    return 0;
}

} /* extern "C" */
