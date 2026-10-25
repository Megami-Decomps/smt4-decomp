#include "gfx/EffectEditorStorage.h"

/* Copies the colour at 0x88 of the source block into the effect editor. */
extern "C" void effectEditorCopySettingsColor(void)
{
    g_effectEditor.unk00[2] = g_effectEditorSettings.mode;
    g_effectEditor.unk00[3] = g_effectEditorSettings.flagA;
    g_effectEditor.unk00[4] = g_effectEditorSettings.flagB;
}

