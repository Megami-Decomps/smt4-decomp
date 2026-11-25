/* NON_MATCHING: retail's editor menus share one base for the selection template and its predecessor;
 * this unit addresses the predecessor separately. Call argument scheduling also differs. */
#include "shard/W6_W6Match2_EffectEditor.h"
#include "shard/W5_W5Match2_LinkedItems.h"
#include "AsdSDK/Source/Util/AsdListHelpers_LinkedItems.h"

extern "C" {
extern u32 DAT_0059e69c;
extern EffectSelectionTemplate g_effectEditorState;
void rt_memcpy_w144(void *destination, const void *source);
LinkedItem *effPartCloneAfter(LinkedItems *list, LinkedItem *after);

/* Duplicates the selected effect part and selects the scratch template. */
u32 FUN_003bade8(void)
{
    LinkedItem *selected = linkedFindItemByIndex(
        (LinkedItems *)g_effectEditor.list,
        g_effectEditorState.indices.extraOffset + g_effectEditor.index);
    LinkedItem *copy = effPartCloneAfter((LinkedItems *)g_effectEditor.list, selected);
    DAT_0059e69c = 0;
    rt_memcpy_w144(&copy->data, &selected->data);
    g_effectEditor.object = &g_effectEditorState;
    return 0;
}
} /* extern "C" */
