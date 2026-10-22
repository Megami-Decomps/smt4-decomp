/* NON_MATCHING: mode load uses a literal offset and STRD rather than retail's base adjustment and separate stack stores. */
#include "common.h"

struct CecViewCamera {
    /* 0x000 */ u8 unk000[0x0C];
    /* 0x00C */ u32 target;
    /* 0x010 */ u8 unk010[0x90];
    /* 0x0A0 */ f32 scale;
    /* 0x0A4 */ u8 unk0A4[0x94];
    /* 0x138 */ u32 handle;
    /* 0x13C */ u8 unk13C[0x21];
    /* 0x15D */ s8 mode;
    /* 0x15E */ u8 unk15E[7];
    /* 0x165 */ u8 active;
};

extern "C" {

extern CecViewCamera *g_campCecView;
extern void actorDetailsDrawPanel(u32 handle, u32 target, f32 *scale, s32 flags, s32 value, s32 mode);

/* Resets the view scale and updates the active camera target. */
s32 FUN_001c0fb0(void)
{
    CecViewCamera *view = g_campCecView;
    view->scale = 1.0f;
    if (view->active != 0) {
        actorDetailsDrawPanel(view->handle, view->target, &view->scale, 0, 0, view->mode);
    }
    return 0;
}

} /* extern "C" */
