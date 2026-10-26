/* NON_MATCHING: separate scratch globals prevent retail's shared base; payload assignment calls __aeabi_memcpy4 instead of specialized rt_memcpy_w144. */
#include "shard/W6_W6Match2_EffectEditor.h"
#include "shard/W5_W5Match2_LinkedItems.h"
#include "shard/linkedFindItemByIndex.h"

extern "C" {
extern s32 DAT_0059e9b4;
extern u32 DAT_0059e69c;
extern EffectSelectionTemplate DAT_0059e9a8;
LinkedItem* effPartCloneAfter(LinkedItems* list, LinkedItem* after);

// Duplicate the selected effect part and select the scratch template.
u32 FUN_003bade8(void)
{
    LinkedItem* selected = linkedFindItemByIndex(
        static_cast<LinkedItems*>(g_effectEditor.selection.list),
        g_effectEditor.selection.index + DAT_0059e9b4);
    LinkedItem* copy = effPartCloneAfter(
        static_cast<LinkedItems*>(g_effectEditor.selection.list), selected);
    DAT_0059e69c = 0;
    copy->data = selected->data;
    g_effectEditor.selection.object = &DAT_0059e9a8;
    return 0;
}
}
