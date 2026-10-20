#include "common.h"

extern "C" {

typedef struct Unit {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 width;
    /* 0x18 */ s32 height;
} Unit;

typedef struct Overlay {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u8 shown;
    /* 0x29 */ u8 unk29;
    /* 0x2A */ u8 flag;
    /* 0x2B */ u8 applied;
} Overlay;

typedef struct Context {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ Unit *unit;
    /* 0x008 */ u8 unk008[0xEF8];
    /* 0xF00 */ Overlay overlay;
} Context;

extern u32 g_titleScene;

int FUN_002bfab0(Unit *a, Unit *b);
u8 FUN_002bfadc(int arg, Unit *unit);
Context *jobGetWork(void);
int FUN_002c39a4(u32 arg);

/* Script command: if the overlay is shown and not yet applied, resizes the unit through FUN_002bfadc/FUN_002bfab0 (halving its size, the flag takes FUN_002bfadc's result) and marks it applied. */
u32 FUN_00109348(void)
{
    Context *context = jobGetWork();
    Overlay *overlay = &context->overlay;

    if (overlay->shown == 0) {
        return 0;
    }
    if (overlay->applied != 0) {
        return 0;
    }
    FUN_002c39a4(g_titleScene);
    context->unit->width = 0x200;
    context->unit->height = 0x200;
    context->overlay.flag = FUN_002bfadc(0, context->unit);
    FUN_002bfab0(context->unit, context->unit);
    context->unit->width >>= 1;
    context->unit->height >>= 1;
    context->overlay.applied = 1;
    return 0;
}

} /* extern "C" */
