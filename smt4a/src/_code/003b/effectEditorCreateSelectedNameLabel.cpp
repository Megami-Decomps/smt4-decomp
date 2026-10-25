/* NON_MATCHING: node fields use three scalar stores instead of retail's paired origin store plus global reload; argument scheduling adds one instruction. */
#include "shard/W6_W6Match2_EffectEditor.h"
#include "shard/W5_W5Match2_LinkedItems.h"
#include "AsdSDK/Source/Gfx/EffectEditor/EffectEditor.h"
#include "shard/linkedFindItemByIndex.h"

extern "C" {
extern EffectSelectionTemplate DAT_0059e9a8;
void engineFreeCallback(void *memory);
void effEditorSetTextValue(EffMenuNode *node, const char *text);

void effectEditorCreateSelectedNameLabel()
{
    if (g_effectEditor.text.name != NULL) {
        engineFreeCallback(g_effectEditor.text.name);
    }
    g_effectEditor.text.name = effMenuNodeCreate("");
    // The first pair of node words holds this label's screen origin.
    g_effectEditor.text.name->initialKind = 194;
    g_effectEditor.text.name->unk04 = 200;
    g_effectEditor.text.name->unk14 = 9;
    LinkedItem *item = linkedFindItemByIndex(
        (LinkedItems *)g_effectEditor.selection.list,
        g_effectEditor.selection.index + DAT_0059e9a8.indices.extraOffset);
    effEditorSetTextValue(g_effectEditor.text.name, item->label.text);
}
}
