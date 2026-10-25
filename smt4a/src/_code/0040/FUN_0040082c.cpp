/* NON_MATCHING: saved registers, mask loads and constant front-line loop bound differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "gamedata/Table8Record.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
extern BattleCandidateMasks DAT_00573c90;
Table8Record *dataTable8FindRecord(u32 id);
s32 FUN_003ff73c(BtlCombatantEntryA *entry, const Table8Record *skill);
s32 FUN_00400284(s32 index, s32 mode, const Table8Record *skill, u32 flags);
s32 FUN_004009d0(u32 id, s32 mode);

s32 FUN_0040082c(u32 id)
{
    if (id == 0)
        return 1;
    Table8Record *skill = dataTable8FindRecord(id);
    if (skill == NULL)
        return 1;
    if ((skill->type != 2 && skill->type != 3) || (skill->kind != 1 && skill->kind != 12))
        return 2;
    if (skill->unk32 != 0)
        return FUN_004009d0(skill->unk32, 1);

    // A local view avoids raising the alignment of the shared, halfword-aligned record.
    struct TargetProperties {
        u8 prefix[0x3A];
        u8 target;
        u8 padding[0x2D];
        u32 flags;
    };
    const TargetProperties *properties = reinterpret_cast<const TargetProperties *>(skill);
    BtlMainStateA *battle = btlGetMainState();
    if (battle->markerMasks.bits & DAT_00573c90.excluded)
        return 0;
    if ((properties->flags & 0x10) &&
        (battle->targetCapacity.counts[0] >= 8 || battle->targetCapacity.counts[1] >= 8))
        return 3;
    for (s32 index = 0; index < 4; ++index) {
        BtlCombatantEntryA *entry = &battle->entries[index];
        u64 flags = entry->flags;
        if ((DAT_00573c90.required & flags) && !(flags & DAT_00573c90.unavailable) &&
            FUN_003ff73c(entry, skill) == 0)
            return 0;
    }
    if ((properties->target & 0x7F) == 1 || (properties->flags & 4)) {
        SaveSlotTable *party = gameGetSlotTable();
        for (s32 index = -1; index < party->count; ++index) {
            if (FUN_00400284(index, 0, skill, 0) == 0)
                return 0;
        }
    }
    return 3;
}
}
