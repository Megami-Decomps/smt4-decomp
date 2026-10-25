#include "common.h"

struct ColorSource {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ u8 red;
    /* 0x89 */ u8 green;
    /* 0x8a */ u8 blue;
};

struct EditorColor {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 red;
    /* 0x03 */ u8 green;
    /* 0x04 */ u8 blue;
};

extern "C" {

extern ColorSource g_effectEditorSettings;
extern EditorColor g_effectEditor;

/* Copies the colour at 0x88 of the source block into the effect editor. */
void FUN_003cc1ec(void)
{
    g_effectEditor.red = g_effectEditorSettings.red;
    g_effectEditor.green = g_effectEditorSettings.green;
    g_effectEditor.blue = g_effectEditorSettings.blue;
}

} /* extern "C" */
