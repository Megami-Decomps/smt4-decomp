/* NON_MATCHING: 123 vs 123 rows (18 diff lines): retail copies itemId to r8 before r1-r3 and schedules the 64-bit sourceKind mask test so `mov r1, r8` hoists ahead of `beq`. */
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

u32 btlGetCurableAilmentMaskForTarget(u32 itemId, u32 skillId, u32 subjectId, s32 target)
{
    SkillDataRecordA *item = skillDataFindById(itemId);
    ConsumableRecordA *skill = itemTableGetItemRecord(skillId);
    if (item == NULL && skill == NULL) {
        return 0;
    }
    if (item != NULL && (item->flags & 0x7F) == 0) {
        return 0;
    }
    /* This view preserves the shared skill record's original halfword alignment. */
    struct SkillTargetProperties {
        u8 prefix[0x3A];
        u8 target;
        u8 padding[0x2D];
        u32 flags;
    };
    const SkillTargetProperties *properties = (const SkillTargetProperties *)skill;
    if (skill != NULL && (properties->target & 0x7F) == 0 && !(properties->flags & 4)) {
        return 0;
    }
    BtlMainStateA *battle = btlGetMainState();
    BtlCombatantEntryA *subject = btlMainFindEntryByListedId(battle, subjectId);
    struct Snapshot {
        u32 prefix[10];
        u16 kind;
        u8 restricted;
        u8 tail[9];
    } snapshot;
    btlEntryBuildSummary(&snapshot, battle, subject);
    if (snapshot.restricted) {
        if ((subject->data.statusFlags & 0x10) == 0 ||
            ((g_btlSkillResponseMasks.sourceKind & subject->flags) && FUN_004bd098(subject->data.sourceId, itemId) < 0)) {
            return 0;
        }
    }
    s32 category = 0;
    if (item != NULL) {
        if (item->flags & 0x7F) {
            category = item->flags & 0x7F;
        }
    } else if (skill != NULL) {
        if (properties->target & 0x7F) {
            category = properties->target & 0x7F;
        } else if (properties->flags & 4) {
            category = 0x25;
        }
    }
    u32 mask;
    switch (category) {
    case 0x16:
        mask = 0x3BE0;
        break;
    case 0x18:
        mask = 0x3FE2;
        break;
    case 0x1B:
        mask = 0x3BE2;
        break;
    case 0x1C:
        mask = 0x39C0;
        break;
    case 0x1F:
        mask = 0x220;
        break;
    case 0x25:
        mask = 0x3BEA;
        break;
    default:
        mask = 1u << category;
        break;
    }
    if (target < 109) {
        if (btlFindEntryBlockByMemberId(battle, target)->statusFlags & mask) {
            return mask;
        }
    } else {
        if (gameGetSlotRecord(target - 109)->ailments & mask) {
            return mask;
        }
    }
    return 0;
}
} /* extern "C" */
