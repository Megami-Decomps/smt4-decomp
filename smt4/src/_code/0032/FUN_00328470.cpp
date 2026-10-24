#include "common.h"

struct Selection {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ void *object;
};

struct EffectEditorView {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ Selection *selection;
    /* 0x38 */ void *object;
};

extern "C" EffectEditorView g_effectEditor;

extern "C" s32 FUN_00328470(void)
{
    void *object = g_effectEditor.selection->object;

    if (object != NULL) {
        g_effectEditor.object = object;
    }
    return 0;
}
