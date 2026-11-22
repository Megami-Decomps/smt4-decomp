/* NON_MATCHING: 104 vs 104 rows (62 diff lines): single-exit result and callee-saved register allocation (r4-r9, 76-byte frame) match retail; shared `mov r5, #1` placement, out-of-line passive 26/27 checks and 64-bit sourceKind mask loads differ. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/SkillDataRecord.h"
#include "battle/BtlGlobals.h"
#include "battle/BattleSkillResponseMasks.h"

struct CombatantAffinityPreview {
    u16 kind;
    u16 targetKind;
    u32 parameters[4];
    u16 unk14;
    s16 skill;
    u8 unk18[0x13];
    u8 enabled;
    u32 trailing[2];
};
struct AffinitySkillTailView {
    u8 unk00[0x44];
    u8 element;
};
struct AffinityPassiveView {
    u8 prefix[0x32];
    u8 element;
};
struct CombatantAffinityValueView {
    u8 prefix[0x11C];
    s32 value;
};

extern "C" {
CombatantAffinityPreview btlEntryBuildSummary(BtlMainStateA *battle, BtlCombatantEntryA *entry);
void source4CCopyHalves(BtlCombatantEntryA *entry, u16 *skills);
s32 FUN_004bd098(u32 source, s32 skill);
void kindIdStore(u32 kind, u32 *value);

u32 FUN_004c0f74(BtlCombatantEntryA *entry, u32 element)
{
    u32 result = 0;
    CombatantAffinityPreview action = btlEntryBuildSummary(btlGetMainState(), entry);
    if (action.skill != 0) {
        AffinitySkillTailView *skill = (AffinitySkillTailView *)skillDataFindById(action.skill);
        if (skill != NULL && skill->element != 0 && skill->element - 1 == element) {
            result = 1;
        }
    }
    if (result == 0) {
        u32 skills[5] = {0};
        source4CCopyHalves(entry, (u16 *)skills);
        for (s32 index = 0; index < 9; ++index) {
            u16 id = ((u16 *)skills)[index];
            if (id != 0) {
                AffinityPassiveView *passive = (AffinityPassiveView *)dataTable41FindById(id);
                if (passive != NULL && passive->element != 0) {
                    if (passive->element == 26) {
                        if (element <= 7) {
                            result = 1;
                            break;
                        }
                    } else if (passive->element == 27) {
                        if (element >= 2 && element <= 7) {
                            result = 1;
                            break;
                        }
                    } else if (passive->element - 1 == element) {
                        result = 1;
                        break;
                    }
                }
            }
        }
        if (result == 0) {
            if (action.enabled && (entry->data.statusFlags & 16) &&
                (!(entry->flags & g_btlSkillResponseMasks.sourceKind) ||
                    FUN_004bd098(entry->data.sourceId, action.skill) >= 0)) {
                kindIdStore(action.targetKind, skills);
                if (element == skills[0]) {
                    result = 1;
                }
            }
            if (result == 0) {
                s16 firstId = entry->ids[0];
                CombatantAffinityValueView *unit = (CombatantAffinityValueView *)btlMainFindEntryByListedId(btlGetMainState(), firstId);
                if (unit != NULL && unit->value > 0 && (element == 2 || element == 3 || element == 20)) {
                    result = 1;
                }
            }
        }
    }
    return result;
}
} /* extern "C" */
