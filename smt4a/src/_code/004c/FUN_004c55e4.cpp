#include "battle/BtlMainAccess.h"
#include "gamedata/NkmBaseRecordA.h"
#include "battle/BtlSkillModifiers.h"
#include "battle/btlMain.h"
#include "battle/BattleSkillResponseMasks.h"
#include "gamedata/SkillDataRecord.h"
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
    if (g_btlSkillResponseMasks.mappedKind & unit->flags) {
        SkillDataRecordA *skill = skillDataFindById(skillId);
        if (skill) {
            return FUN_002efc44(skill, padGetMappedValue(skillId), 2);
        }
    } else if (unit->flags & g_btlSkillResponseMasks.sourceKind) {
        SkillDataRecordA *skill = skillDataFindById(skillId);
        if (skill) {
            return FUN_0034a304(skill, FUN_004bd098(unit->data.sourceId, skillId), 2);
        }
    } else if (unit->flags & g_btlSkillResponseMasks.demonKind) {
        SkillDataRecordA *skill = skillDataFindById(skillId);
        if (skill) {
            struct SignedIdView { u8 unk00[0x166]; s16 id; };
            return FUN_0034a304(skill, demonCategoryModifier(reinterpret_cast<const SignedIdView *>(unit)->id, skill), 2);
        }
    }
    return 0;
}
}
