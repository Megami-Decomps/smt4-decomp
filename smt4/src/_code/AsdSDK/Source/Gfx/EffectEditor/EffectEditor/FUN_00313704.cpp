#include "ui/UiSpriteApi.h"
#include "gfx/EffectEditorStorage.h"
extern "C" {
void asdMemoryFreeLocked(void* memory);
void effEditorSetTextValue(EffMenuNode* node, const char* text);

/* Recreates the effect editor's .EPL label at its fixed menu position. */
void FUN_00313704()
{
    if (g_effectEditor.label != NULL) {
        asdMemoryFreeLocked(g_effectEditor.label);
        g_effectEditor.label = NULL;
    }
    char *name = g_effectEditorResourceName;
    g_effectEditor.label = effMenuNodeCreate(".EPL");
    effMenuNodeSetOrigin(g_effectEditor.label, 0xb6, 100);
    effEditorSetTextValue(g_effectEditor.label, name);
}
}
