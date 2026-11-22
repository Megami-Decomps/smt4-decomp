#include "common.h"
#include "quest_center/qcUtility.h"

extern "C" {

/* Builds one tab of the quest center's list by random draw and marks it as built. */
int qcUtilityBuildAndMarkTabList(QcTabListState *list, u32 tab, u32 group, u32 weightKind, u32 firstRandomSlot,
                                 u32 lastRandomSlot)
{
    int result = QcUtility_BuildTabList(list, tab, group, -1, weightKind, firstRandomSlot, lastRandomSlot);

    list->builtTabs = (u8)((1 << (tab & 0xff)) | list->builtTabs);
    return result;
}

} /* extern "C" */
