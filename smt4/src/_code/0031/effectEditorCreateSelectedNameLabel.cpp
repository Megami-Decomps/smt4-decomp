/* NON_MATCHING: the paired origin store now matches (local node, unk04 before initialKind); remaining: the unk14 store loads its constant before the global reload, and the index+offset add is scheduled after the list load. */
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
    effEditorSetTextValue(g_effectEditor.text.name, linkedFindItemByIndex(
        (LinkedItems *)g_effectEditor.selection.list,
        g_effectEditor.selection.index + DAT_0044f858.indices.extraOffset)->label.text);
}
}
