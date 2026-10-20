/* Tears down the active screen: releases its resources and clears the global, then applies the manager's setting. */
#include "common.h"

extern "C" {

typedef struct {
    u8 unk00[0x44]; /* 0x00 */
    u32 setting;    /* 0x44 */
} ScreenManager;

typedef struct {
    u8 unk00[0x2c];    /* 0x00 */
    u32 resource;      /* 0x2c */
    u8 unk30[0x28];    /* 0x30 */
    u8 subObject[0x6d8]; /* 0x58 */
    s32 effect;        /* 0x730 */
    u32 effectParam;   /* 0x734 */
} ScreenState;

extern ScreenState *g_btlMain;

void FUN_0019faa0(s32 a, s32 b, f32 value);
void FUN_0024dcec(s32 value);
void FUN_0024dcfc(u32 resource);
void FUN_00263588(u32 effect);
void FUN_00263c80(void *subObject);
void FUN_0029c2cc(s32 effect, s32 value);
ScreenManager *jobGetWork(void);
void asdMemFree(ScreenState *screen);
void jobStop(u32 setting, s32 value);

void scrDestroyActive(void)
{
    ScreenManager *manager = jobGetWork();
    ScreenState *screen = g_btlMain;

    if (g_btlMain != NULL) {
        FUN_0024dcfc(g_btlMain->resource);
        screen->resource = 0;
        FUN_0024dcec(0);
        if (screen->effect != 0) {
            FUN_0029c2cc(screen->effect, 0);
            FUN_00263588(screen->effect);
            screen->effect = 0;
            screen->effectParam = 0;
        }
        FUN_00263c80(screen->subObject);
        FUN_0019faa0(0, 1, 10.0f);
        asdMemFree(g_btlMain);
        g_btlMain = NULL;
    }
    jobStop(manager->setting, 0);
}

} /* extern "C" */
