#include "gfx/EffectEditorStorage.h"
extern "C" {
void engineFreeCallback(void* memory);
void effEditorSetTextValue(EffMenuNode* node, const char* text);

/* Recreates the effect editor's .EPL label at its fixed menu position. */
void FUN_003aa520()
{
    if (g_effectEditor.label != NULL) {
        engineFreeCallback(g_effectEditor.label);
        g_effectEditor.label = NULL;
    }
    const char *name = g_effectEditorResourceName;
    g_effectEditor.label = effMenuNodeCreate(".EPL");
    effMenuNodeSetOrigin(g_effectEditor.label, 0xb6, 100);
    effEditorSetTextValue(g_effectEditor.label, name);
}
}
