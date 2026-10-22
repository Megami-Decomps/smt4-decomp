/* NON_MATCHING: node fields use three scalar stores instead of retail's paired origin store plus global reload; argument scheduling adds one instruction (-O2/-Ospace do not fix it). */
#include "shard/W6_W6Match2_EffectEditor.h"
#include "shard/W5_W5Match2_LinkedItems.h"

extern "C" {
extern EffectSelectionTemplate DAT_0044f858;
void asdMemoryFreeLocked(void *memory);
LinkedItem *linkedFindItemByIndex(LinkedItems *list, s32 index);
void effEditorSetTextValue(EffMenuNode *node, const char *text);

void effectEditorCreateSelectedNameLabel()
{
    if (g_effectEditor.text.name != NULL) {
        asdMemoryFreeLocked(g_effectEditor.text.name);
    }
    g_effectEditor.text.name = effMenuNodeCreate("");
    // The first pair of node words holds this label's screen origin.
    g_effectEditor.text.name->initialKind = 194;
    g_effectEditor.text.name->unk04 = 200;
    g_effectEditor.text.name->unk14 = 9;
    LinkedItem *item = linkedFindItemByIndex(
        (LinkedItems *)g_effectEditor.selection.list,
        g_effectEditor.selection.index + DAT_0044f858.indices.extraOffset);
    effEditorSetTextValue(g_effectEditor.text.name, item->label.text);
}
}
