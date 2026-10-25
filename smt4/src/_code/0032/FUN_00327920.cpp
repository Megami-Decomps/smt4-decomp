/* NON_MATCHING: original same-file BSS grouping of the independent settings and vector globals still needs the canonical editor-storage cutover. */
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {
extern EffectEditorSettings g_effectEditorSettings;
extern f32 g_effectEditorVector[4];
}

/* Clears the vector and resets the mode bytes (mode 8), always reporting 0. */
extern "C" s32 FUN_00327920(void)
{
    g_effectEditorVector[0] = 0.0f;
    g_effectEditorVector[1] = 0.0f;
    g_effectEditorVector[2] = 0.0f;
    g_effectEditorVector[3] = 0.0f;
    g_effectEditorSettings.mode = 8;
    g_effectEditorSettings.flagA = 0;
    g_effectEditorSettings.flagB = 0;
    return 0;
}
