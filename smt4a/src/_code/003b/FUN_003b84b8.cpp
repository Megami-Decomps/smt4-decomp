/* NON_MATCHING: 64-bit mask OR schedule and ldrd/ldr register choice differ. */
#include "battle/btlMain.h"
#include "battle/btlUnit.h"
#include "battle/btlScript.h"
#include "battle/BtlEntryLookup.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct UnitFlagMasks {
    u64 unk00[7]; /* 0x00 */
    u64 masks[3]; /* 0x38 */
};

extern "C" {
extern UnitFlagMasks g_btlCandidateMasks;

/* Adds all three preset masks to the active script unit's leading flag word. */
u32 FUN_003b84b8(void)
{
    BtlUnitA *unit = btlUnitGet((BtlMainStateA *const *)g_btlScriptUnit);
    BtlCombatantEntryA *entry = unit->entry;
    u64 flags = entry->flags;
    flags |= g_btlCandidateMasks.masks[0];
    flags |= g_btlCandidateMasks.masks[1];
    flags |= g_btlCandidateMasks.masks[2];
    entry->flags = flags;
    return 1;
}
}
