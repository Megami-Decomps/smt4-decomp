#include "common.h"

extern "C" {

void FUN_00168980(void);
void campCommonBgRelease(void);
void campButtonHelpRelease(void);
void texOwner1480Free(u32 *member);
void FUN_00493154(void);
void asdMemFree(void *memory);
s32 jobStop(u32 job, s32 flag);

typedef struct Scene {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 unk04[0x64];
    /* 0x68 */ u32 member68[1];
} Scene;
extern Scene *g_naviMain;

/* Shuts the scene down: runs the four clean-up calls, then stops its job, destroys its member and frees it. */
void FUN_00212170(void)
{
    FUN_00168980();
    FUN_00493154();
    campCommonBgRelease();
    campButtonHelpRelease();
    if (g_naviMain != NULL) {
        jobStop(g_naviMain->job, 0);
        texOwner1480Free(g_naviMain->member68);
        asdMemFree(g_naviMain);
        g_naviMain = NULL;
    }
}

} /* extern "C" */
