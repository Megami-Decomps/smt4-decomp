#include "common.h"

struct CecViewState {
    /* 0x000 */ u8 unk000[0x38];
    /* 0x038 */ u32 handle;
    /* 0x03C */ u8 unk03C[0x21];
    /* 0x05D */ s8 mode;
    /* 0x05E */ u8 unk05E[2];
};

struct CecViewCamera {
    /* 0x000 */ u8 unk000[0x0C];
    /* 0x00C */ u32 target;
    /* 0x010 */ u8 unk010[0x90];
    /* 0x0A0 */ f32 scale;
    /* 0x0A4 */ u8 unk0A4[0x5C];
    /* 0x100 */ CecViewState state;
    /* 0x160 */ u8 unk160[5];
    /* 0x165 */ u8 active;
};

extern "C" {

extern CecViewCamera *g_campCecView;
extern void actorDetailsDrawPanel(u32 handle, u32 target, f32 *scale, s32 flags, s32 value, s32 mode);

/* Resets the view scale and updates the active camera target. */
s32 FUN_001c0fb0(void)
{
    CecViewCamera *view = g_campCecView;
    CecViewState *state = &view->state;
    view->scale = 1.0f;
    if (view->active != 0) {
        actorDetailsDrawPanel(view->state.handle, view->target, &view->scale, 0, 0, state->mode);
        return 0;
    }
    return 0;
}

} /* extern "C" */
