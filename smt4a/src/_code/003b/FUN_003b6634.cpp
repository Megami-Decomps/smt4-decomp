#include "common.h"

struct EditorSelection {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ s32 value;
};

struct EditorState {
    /* 0x00 */ u8 unk00[7];
    /* 0x07 */ u8 dirty;
    /* 0x08 */ u8 unk08[0x2c];
    /* 0x34 */ EditorSelection *selection;
    /* 0x38 */ s32 current;
};

extern "C" {

extern EditorState g_effectEditor;

/* Marks the effect editor dirty and makes its selection's value current when it has one. */
u32 FUN_003b6634(void)
{
    g_effectEditor.dirty = 1;
    if (g_effectEditor.selection->value != 0) {
        g_effectEditor.current = g_effectEditor.selection->value;
    }
    return 0;
}

} /* extern "C" */
