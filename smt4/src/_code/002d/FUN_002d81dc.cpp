#include "common.h"

struct EditorReset {
    /* 0x00 */ u8 unk00[0x4c];
    /* 0x4c */ s32 unk4c;
    /* 0x50 */ s32 unk50;
    /* 0x54 */ s32 unk54;
    /* 0x58 */ s32 unk58;
};

struct EditorCenter {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ s32 mode;
    /* 0x10 */ u32 flags;
};

extern "C" {

extern EditorReset g_effectEditor;
extern EditorCenter DAT_0044fca8;

/* Resets the effect editor's selection words and switches the parameter center to mode 1. */
void FUN_002d81dc(void)
{
    g_effectEditor.unk4c = 0;
    g_effectEditor.unk58 = 0;
    g_effectEditor.unk50 = 0;
    g_effectEditor.unk54 = 1;
    DAT_0044fca8.mode = 1;
    DAT_0044fca8.flags |= 0x10;
}

} /* extern "C" */
