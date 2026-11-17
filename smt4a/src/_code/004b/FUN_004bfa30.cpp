/* NON_MATCHING: gate-mask base addressing, category dispatch and zero-result epilogues differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlUnit.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/GameSaveDataA.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/ConsumableRecordA.h"
#include "battle/BtlGlobals.h"
#include "gamedata/SaveSlotRecord.h"
#include "battle/BattleSkillResponseMasks.h"

extern "C" {
void btlEntryBuildSummary(void *snapshot, BtlMainStateA *battle, BtlCombatantEntryA *subject);
s32 FUN_004bd098(u32 source, u32 item);

u32 FUN_004bfa30(u32 itemId, u32 skillId, u32 subjectId, s32 target)
{
    SkillDataRecordA *item = skillDataFindById(itemId);
    ConsumableRecordA *skill = itemTableGetItemRecord(skillId);
    if (item == NULL && skill == NULL)
        return 0;
    if (item != NULL && (item->flags & 0x7F) == 0)
        return 0;
    // This view preserves the shared skill record's original halfword alignment.
    struct SkillTargetProperties {
        u8 prefix[0x3A]; u8 target; u8 padding[0x2D]; u32 flags;
    };
    const SkillTargetProperties *properties = reinterpret_cast<const SkillTargetProperties *>(skill);
    if (skill != NULL && (properties->target & 0x7F) == 0 && !(properties->flags & 4))
        return 0;
    BtlMainStateA *battle = btlGetMainState();
    BtlCombatantEntryA *subject = btlMainFindEntryByListedId(battle, subjectId);
    struct Snapshot { u32 prefix[10]; u16 kind; u8 restricted; u8 tail[9]; } snapshot;
    btlEntryBuildSummary(&snapshot, battle, subject);
    if (snapshot.restricted) {
        if (!(subject->data.statusFlags & 0x10))
            return 0;
        if ((subject->flags & g_btlSkillResponseMasks.sourceKind) && FUN_004bd098(subject->data.sourceId, itemId) < 0)
            return 0;
    }
    u32 category = 0;
    if (item != NULL) {
        if (item->flags & 0x7F)
            category = item->flags & 0x7F;
    } else if (skill != NULL) {
        if (properties->target & 0x7F)
            category = properties->target & 0x7F;
        else if (properties->flags & 4)
            category = 0x25;
    }
    u32 mask;
    if (category == 0x1C) mask = 0x39C0;
    else if (category < 0x1C) {
        if (category == 0x16) mask = 0x3BE0;
        else if (category == 0x18) mask = 0x3FE2;
        else if (category == 0x1B) mask = 0x3BE2;
        else mask = 1u << category;
    } else if (category == 0x1F) mask = 0x220;
    else if (category == 0x25) mask = 0x3BEA;
    else mask = 1u << category;
    u16 categories;
    if (target < 109)
        categories = btlFindEntryBlockByMemberId(battle, target)->statusFlags;
    else
        categories = gameGetSlotRecord(target - 109)->ailments;
    return (categories & mask) ? mask : 0;
}
}
