#include "gfx/EffectEditorStorage.h"

/* Copies the colour at 0x88 of the source block into the effect editor. */
extern "C" void effectEditorCopySettingsColor(void)
{
    g_effectEditor.settingsMode = g_effectEditorSettings.mode;
    g_effectEditor.settingsFlagA = g_effectEditorSettings.flagA;
    g_effectEditor.settingsFlagB = g_effectEditorSettings.flagB;
}

