/* NON_MATCHING: mask-table loads, signed unit-ID load and response tail-merge differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/BattleSkillResponseMasks.h"
#include "gamedata/Table04Record.h"
#include "gamedata/ReferencedKindRecord.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *state, u32 id);
u32 padGetMappedValue(u32 id);
s32 FUN_002efc44(Table04Record *skill, u32 value, s32 mode);
s32 FUN_0034a304(Table04Record *skill, s32 value, s32 mode);
s32 FUN_004bd098(u32 source, u32 skillId);
void *FUN_00184310(u16 id);

s32 FUN_004c55e4(u32 unitId, u32 skillId)
{
    BtlCombatantEntryA *unit = FUN_003f0e20(btlGetMainState(), unitId);
    u64 flags = unit->flags;
    if (flags & DAT_005713f0.mappedValue) {
        Table04Record *skill = dataTable04FindById(skillId);
        if (skill) {
            return FUN_002efc44(skill, padGetMappedValue(skillId), 2);
        }
    } else if (flags & DAT_005713f0.sourceValue) {
        Table04Record *skill = dataTable04FindById(skillId);
        if (skill) {
            return FUN_0034a304(skill, FUN_004bd098(unit->sourceId, skillId), 2);
        }
    } else if (flags & DAT_005713f0.affinity) {
        Table04Record *skill = dataTable04FindById(skillId);
        if (skill) {
            // This lookup's response bytes extend beyond the shared unit-record prefixes.
            struct AffinityView { u8 unk00[0xa0]; s8 responses[18]; };
            typedef char AffinityViewOffset[offsetof(AffinityView, responses) == 0xa0 ? 1 : -1];
            s32 value = 0;
            u16 id = unit->id;
            u16 kind = reinterpret_cast<const ReferencedKindRecord *>(skill)->kind;
            if (kind < 18) {
                const AffinityView *record = static_cast<const AffinityView *>(FUN_00184310(id));
                if (record) {
                    value = record->responses[kind];
                }
            }
            return FUN_0034a304(skill, value, 2);
        }
    }
    return 0;
}
}
