/* NON_MATCHING: retail keeps the label-text address in a saved register across menu-node creation. */
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {
extern const char DAT_004d8bd0[];
void asdMemoryFreeLocked(void* memory);
void effEditorSetTextValue(EffMenuNode* node, const char* text);

// Recreate the effect editor's .EPL label at its fixed menu position.
void FUN_00313704()
{
    if (g_effectEditor.label != NULL) {
        asdMemoryFreeLocked(g_effectEditor.label);
        g_effectEditor.label = NULL;
    }
    EffMenuNode* label = effMenuNodeCreate(".EPL");
    g_effectEditor.label = label;
    label->initialKind = 0xb6;
    label->unk04 = 100;
    effEditorSetTextValue(g_effectEditor.label, DAT_004d8bd0);
}
}
