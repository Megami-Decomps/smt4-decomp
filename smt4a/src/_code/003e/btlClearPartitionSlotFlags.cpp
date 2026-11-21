#include "AsdSDK/AsdMemUtil.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"

extern "C" {

/* Clears the slot flags of every eligible combatant in the requested partition: mode 0 the entries outside
 * actor category 2, mode 1 the entries in it, any other mode all of them. */
void btlClearPartitionSlotFlags(BtlMainStateA* battle, s32 mode)
{
    for (s32 slot = 0; slot < 109; ++slot) {
        s32 index = battle->roster[slot].motion.unitIndex;
        if (index < 0) {
            continue;
        }
        if (!(battle->entries[index].flags & g_btlMain.combatantMasks.required) ||
            (battle->entries[index].flags & g_btlMain.exclusionMask)) {
            continue;
        }
        BtlUnitDataA *data = &battle->entries[index].data;
        if (data == NULL) {
            continue;
        }
        if (mode == 0) {
            if (battle->entries[index].flags & g_btlMain.actorCategories[2]) {
                continue;
            }
        } else if (mode == 1) {
            if (!(battle->entries[index].flags & g_btlMain.actorCategories[2])) {
                continue;
            }
        }
        sysMemClear(data->slotFlags, sizeof(data->slotFlags));
    }
}

} /* extern "C" */
