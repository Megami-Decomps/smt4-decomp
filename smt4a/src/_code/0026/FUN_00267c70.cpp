#include "common.h"

/* The engine object's cursor positions and mode, as this refresh reads them. */
struct EngineCursorView {
    /* 0x0000 */ u8 unk0000[0xAC];
    /* 0x00AC */ u8 listCursor[0x578];
    /* 0x0624 */ u8 gridCursor[0x8C];
    /* 0x06B0 */ u8 pageCursor[0x3CB4];
    /* 0x4364 */ s32 mode;
};

struct EngineCursorRef {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ EngineCursorView *instance;
};

extern "C" {

extern EngineCursorRef g_engineCleanupOwner;
s32 scriptProcessCreateWhenReady(EngineCursorView *view);
void FUN_004b2e50(EngineCursorView *view, s32 a, s32 b);
s32 vec2GetXInt(void *vec);
s32 vec2GetYInt(void *vec);
void FUN_004b4f9c(EngineCursorView *view, s32 x, s32 y);
void FUN_004b40f4(EngineCursorView *view, s32 x, s32 y);
void FUN_004b1a00(EngineCursorView *view, s32 x, s32 y);

// Re-apply the cursor position of the engine object's current mode (11, 18 or 19).
u32 FUN_00267c70(void)
{
    EngineCursorView *view = g_engineCleanupOwner.instance;
    if (view == NULL) {
        return 0;
    }
    if (!scriptProcessCreateWhenReady(view)) {
        return 0;
    }
    if (view->mode <= 8 && view->mode != 0) {
        FUN_004b2e50(view, 0, 0);
    }
    switch (view->mode) {
    case 11: {
        s32 x = vec2GetXInt(view->gridCursor);
        s32 y = vec2GetYInt(view->gridCursor);
        FUN_004b4f9c(view, x, y);
        break;
    }
    case 19: {
        s32 x = vec2GetXInt(view->pageCursor);
        s32 y = vec2GetYInt(view->pageCursor);
        FUN_004b40f4(view, x, y);
        break;
    }
    case 18: {
        s32 x = vec2GetXInt(view->listCursor);
        s32 y = vec2GetYInt(view->listCursor);
        FUN_004b1a00(view, x, y);
        break;
    }
    }
    return 0;
}

} /* extern "C" */
