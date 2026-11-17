/* NON_MATCHING: retail reads the signed unit id through a literal-pool offset (ldr 0x166; ldrsh [r0,r4]) and keeps the not-found response value in r6 separate from the found value in r1. */
#include "battle/BtlMainAccess.h"
#include "gamedata/NkmBaseRecordA.h"
#include "battle/btlMain.h"
#include "battle/BattleSkillResponseMasks.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/ReferencedKindRecord.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"

extern "C" {
u32 padGetMappedValue(u32 id);
s32 FUN_002efc44(SkillDataRecordA *skill, u32 value, s32 mode);
s32 FUN_0034a304(SkillDataRecordA *skill, s32 value, s32 mode);
s32 FUN_004bd098(u32 source, u32 skillId);

s32 FUN_004c55e4(u32 unitId, u32 skillId)
{
    BtlCombatantEntryA *unit = btlMainFindEntryByListedId(btlGetMainState(), unitId);
    if (DAT_005713f0.mappedValue & unit->flags) {
        SkillDataRecordA *skill = skillDataFindById(skillId);
        if (skill) {
            return FUN_002efc44(skill, padGetMappedValue(skillId), 2);
        }
    } else if (unit->flags & DAT_005713f0.sourceValue) {
        SkillDataRecordA *skill = skillDataFindById(skillId);
        if (skill) {
            return FUN_0034a304(skill, FUN_004bd098(unit->data.sourceId, skillId), 2);
        }
    } else if (unit->flags & DAT_005713f0.affinity) {
        SkillDataRecordA *skill = skillDataFindById(skillId);
        if (skill) {
            struct SignedIdView { u8 unk00[0x166]; s16 id; };
            s32 value = 0;
            s16 id = reinterpret_cast<const SignedIdView *>(unit)->id;
            u16 kind = reinterpret_cast<const ReferencedKindRecord *>(skill)->kind;
            if (kind < 18) {
                const NkmBaseRecordA *record = nkmBaseGetRecord((u16)id);
                if (record) {
                    value = record->categoryModifiers[kind];
                }
            }
            return FUN_0034a304(skill, value, 2);
        }
    }
    return 0;
}
}
