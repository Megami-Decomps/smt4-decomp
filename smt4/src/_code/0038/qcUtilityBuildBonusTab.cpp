/* NON_MATCHING: 16 lines. Retail loads the last slot (20) before the first (0) and holds the tab number in r1 after the
 * call, ahead of the two flag bytes (this build: 0 first, the tab in r3). The unit is IDENTICAL when the three stores
 * are an inline `(QcTabListState *list, u8 tab)` helper (tab, builtTabs |= 1 << tab, flags |= 1 << tab) called with
 * 4; that helper has one call site and no sibling with the same three stores, so it is not written. */
#include "common.h"
#include "quest_center/qcUtility.h"

extern "C" {

/* Builds the extra tab (4) of the quest center's list, with the bonus slot forced, and shows it. */
u32 qcUtilityBuildBonusTab(QcTabListState *list, u32 group, u32 forcedSlot, u32 weightKind)
{
    u32 result = QcUtility_BuildTabList(list, 4, group, forcedSlot, weightKind, 0, 20);
    list->tab = 4;
    list->builtTabs |= 0x10;
    list->flags |= 0x10;
    return result;
}
}
