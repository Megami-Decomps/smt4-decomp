#include "title/titleMain.h"
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
    /* 0x2B */ u8 unk2B;
    /* 0x2C */ u8 applied;
    /* 0x2D */ u8 pending;      /* set when FUN_002bff10 reports something to do */
} Overlay;

typedef struct Context {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ Unit *unit;
    /* 0x00C */ u8 unk00C[0xEF4];
    /* 0xF00 */ Overlay overlay;
} Context;

extern TitleScene *g_titleScene;

int surfaceCopy(Unit *a, Unit *b);
u8 FUN_002bfadc(int arg, Unit *unit);
int FUN_002bff10(int arg);
Context *jobGetWork(void);
int renderCtxSelectStereoLayout(TitleScene *arg);

/* Script command: if FUN_002bff10 reports work, marks the overlay pending; otherwise, when the overlay is shown, not applied and not pending, resizes the unit (halving it) and marks it applied. Returns 0. */
u32 FUN_001093e8(void)
{
    Context *context = jobGetWork();
    Overlay *overlay;

    if (FUN_002bff10(0) != 0) {
        context->overlay.pending = 1;
    } else {
        overlay = &context->overlay;
        if (context->overlay.shown != 0) {
            if (overlay->applied == 0 && overlay->pending == 0) {
                renderCtxSelectStereoLayout(g_titleScene);
                context->unit->width = 0x200;
                context->unit->height = 0x200;
                context->overlay.flag = FUN_002bfadc(0, context->unit);
                surfaceCopy(context->unit, context->unit);
                context->unit->width >>= 1;
                context->unit->height >>= 1;
                context->overlay.applied = 1;
            }
        }
    }
    return 0;
}

} /* extern "C" */
