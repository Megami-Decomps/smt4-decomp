/* NON_MATCHING: the item-index sum now matches retail (named position local, extraOffset + index); remaining: the unk14 store loads its constant (9) before reloading the node pointer, retail reloads the pointer first. */
#include "shard/W6_W6Match2_EffectEditor.h"
#include "shard/W5_W5Match2_LinkedItems.h"
#include "AsdSDK/Source/Util/AsdListHelpers_LinkedItems.h"
#include "AsdSDK/Source/Gfx/EffectEditor/EffectEditor.h"

extern "C" {
extern EffectSelectionTemplate DAT_0044f858;
void asdMemoryFreeLocked(void *memory);
void effEditorSetTextValue(EffMenuNode *node, const char *text);

void effectEditorCreateSelectedNameLabel()
{
    if (g_effectEditor.text.name != NULL) {
        asdMemoryFreeLocked(g_effectEditor.text.name);
    }
    EffMenuNode *node = effMenuNodeCreate("");
    g_effectEditor.text.name = node;
    // The first pair of node words holds this label's screen origin.
    node->unk04 = 200;
    node->initialKind = 194;
    g_effectEditor.text.name->unk14 = 9;
    s32 position = DAT_0044f858.indices.extraOffset + g_effectEditor.selection.index;
    effEditorSetTextValue(g_effectEditor.text.name, linkedFindItemByIndex(
        (LinkedItems *)g_effectEditor.selection.list, position)->label.text);
}
}
