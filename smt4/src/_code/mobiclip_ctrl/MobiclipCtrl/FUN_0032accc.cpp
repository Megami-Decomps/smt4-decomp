/* Refreshes the active group surface for the current movie surface mode (0 or 1) once FUN_002c5210 reports ready. */
#include "common.h"

extern "C" {
struct TitleSceneMode {
    /* 0x000 */ u8 unk000[0x528];
    /* 0x528 */ s32 surfaceMode;
};

extern TitleSceneMode *g_titleScene;
extern u8 DAT_004c3a50;
s32 FUN_002c5210(void);
void asdGxUpdateActiveGroupSurface(void *group, u32 index);

void FUN_0032accc(void)
{
    if (FUN_002c5210() == 1) {
        s32 mode = g_titleScene->surfaceMode;

        if (mode == 0) {
            asdGxUpdateActiveGroupSurface(&DAT_004c3a50, 0);
        } else if (mode == 1) {
            asdGxUpdateActiveGroupSurface(&DAT_004c3a50, 1);
        }
    }
}
}
