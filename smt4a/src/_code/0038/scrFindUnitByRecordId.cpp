#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/BattleMessageMasks.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
extern BattleMessageFlagMasks g_btlMessageFlagMasks;
u32 scrGetArg(u32);
void scrSetResult(s32);

/* Finds the battle unit (or party slot) whose roster record has the given id; -1 when there is none. */
static __inline s32 scriptFindUnitByRecordId(u32 id)
{
    s32 result = -1;
    for (s32 index = 0; index < 109; ++index) {
        BtlCombatantEntryA *entry = &btlGetMainState()->entries[index];
        if ((entry->flags & g_btlMessageFlagMasks.required) && !(entry->flags & g_btlMessageFlagMasks.excluded) &&
            (g_btlMessageFlagMasks.secondRequired & entry->flags) && entry->ids[0] >= 0 &&
            entry->data.sourceRecord != NULL && entry->data.sourceRecord->id == id) {
            return entry->ids[0];
        }
    }
    s32 partySlot = partyFindSlotById(static_cast<u16>(id));
    if (partySlot >= 0)
        result = partySlot + 109;
    return result;
}

u32 scrFindUnitByRecordId(void)
{
    u32 id = scrGetArg(0);
    scrSetResult(scriptFindUnitByRecordId(id));
    return 1;
}
}
