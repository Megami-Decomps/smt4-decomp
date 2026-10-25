/* NON_MATCHING: tail-call argument setup moves the resource-name pointer before reloading the label. */
#include "gfx/EffectEditorStorage.h"
extern "C" {
void asdMemoryFreeLocked(void* memory);
void effEditorSetTextValue(EffMenuNode* node, const char* text);

// Recreate the effect editor's .EPL label at its fixed menu position.
void FUN_00313704()
{
    if (g_effectEditor.label != NULL) {
        asdMemoryFreeLocked(g_effectEditor.label);
        g_effectEditor.label = NULL;
    }
    const char *name = g_effectEditorResourceName;
    EffMenuNode* label = effMenuNodeCreate(".EPL");
    g_effectEditor.label = label;
    label->unk04 = 100;
    label->initialKind = 0xb6;
    label = g_effectEditor.label;
    effEditorSetTextValue(label, name);
}
}
