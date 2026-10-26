/* NON_MATCHING: the 144-byte copy now calls rt_memcpy_w144 like retail; retail reaches DAT_0044f864 and DAT_0044f54c from DAT_0044f858's literal (one base register: the editor's default slots are defined in the same source as this code, with their initial menu data), which this unit does not reproduce. */
#include "shard/W6_W6Match2_EffectEditor.h"
#include "shard/W5_W5Match2_LinkedItems.h"
#include "AsdSDK/Source/Util/AsdListHelpers_LinkedItems.h"

extern "C" {
extern s32 DAT_0044f864;
extern u32 DAT_0044f54c;
extern EffectSelectionTemplate DAT_0044f858;
void rt_memcpy_w144(void* destination, const void* source);
LinkedItem* effPartCloneAfter(LinkedItems* list, LinkedItem* after);

// Duplicate the selected effect part and select the scratch template.
u32 FUN_0031e844(void)
{
    LinkedItem* selected = linkedFindItemByIndex(
        static_cast<LinkedItems*>(g_effectEditor.selection.list),
        g_effectEditor.selection.index + DAT_0044f864);
    LinkedItem* copy = effPartCloneAfter(
        static_cast<LinkedItems*>(g_effectEditor.selection.list), selected);
    DAT_0044f54c = 0;
    rt_memcpy_w144(&copy->data, &selected->data);
    g_effectEditor.selection.object = &DAT_0044f858;
    return 0;
}
}
