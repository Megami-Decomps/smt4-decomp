/* NON_MATCHING: index/text arguments use different registers and the node pointer survives the state comparisons instead of being reloaded before free; both versions have25 rows. */
#include "shard/W6_W6Match2_EffectEditor.h"
#include "shard/W5_W5Match2_LinkedItems.h"
#include "AsdSDK/Source/Gfx/EffectEditor/EffectEditor.h"
#include "AsdSDK/Source/Util/AsdListHelpers_LinkedItems.h"

extern "C" {
extern EffectSelectionTemplate DAT_0059e9a8;
void FUN_00375ec8(EffMenuNode *node);
void namedObjectFormatName(EffMenuNode *node, const char *text);
void engineFreeCallback(void *memory);

u32 FUN_003b665c()
{
    FUN_00375ec8(g_effectEditor.text.name);
    LinkedItem *item = linkedFindItemByIndex(
        (LinkedItems *)g_effectEditor.selection.list,
        g_effectEditor.selection.index + DAT_0059e9a8.indices.extraOffset);
    namedObjectFormatName(g_effectEditor.text.name, item->label.text);
    if (g_effectEditor.text.name->unk08 == 2 || g_effectEditor.text.name->unk08 == 1) {
        engineFreeCallback(g_effectEditor.text.name);
        g_effectEditor.text.name = NULL;
        return 0;
    }
    return 0x200001;
}
}
