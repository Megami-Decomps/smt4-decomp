/* NON_MATCHING: immediate boolean returns, wide-mask load grouping and unit-index lifetime differ from the retail shared-result exit. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/Table04Record.h"

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
// The skill tail is beyond the shared table prefix.  The unit value occupies
// padding whose two-byte alignment cannot accept a new shared word field.
struct AffinitySkillTailView {
    Table04Record prefix;
    u32 unk40;
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
typedef char CombatantAffinityPreviewLayout[sizeof(CombatantAffinityPreview) == 0x34 &&
    offsetof(CombatantAffinityPreview, skill) == 0x16 && offsetof(CombatantAffinityPreview, enabled) == 0x2B ? 1 : -1];

extern "C" {
CombatantAffinityPreview FUN_003e8bb0(BtlMainStateA *battle, BtlCombatantEntryA *entry);
void source4CCopyHalves(BtlCombatantEntryA *entry, u16 *skills);
s32 FUN_004bd098(u32 source, s32 skill);
void kindIdStore(u32 kind, u32 *value);
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *battle, s32 index);
extern u32 DAT_005713f0[8];

u32 FUN_004c0f74(BtlCombatantEntryA *entry, u32 element)
{
    CombatantAffinityPreview action = FUN_003e8bb0(btlGetMainState(), entry);
    if (action.skill != 0) {
        AffinitySkillTailView *skill = (AffinitySkillTailView *)dataTable04FindById(action.skill);
        if (skill != NULL && skill->element != 0 && skill->element - 1 == element)
            return 1;
    }
    u32 skills[5] = {0};
    source4CCopyHalves(entry, (u16 *)skills);
    for (s32 index = 0; index < 9; ++index) {
        u16 id = ((u16 *)skills)[index];
        if (id != 0) {
            AffinityPassiveView *passive = (AffinityPassiveView *)dataTable41FindById(id);
            if (passive != NULL && passive->element != 0) {
                if (passive->element == 26) {
                    if (element < 8)
                        return 1;
                } else if (passive->element == 27) {
                    if (element - 2 < 6)
                        return 1;
                } else if (passive->element - 1 == element) {
                    return 1;
                }
            }
        }
    }
    if (action.enabled && (entry->statusFlags & 16) &&
        (!(entry->flags & (((u64)DAT_005713f0[7] << 32) | DAT_005713f0[6])) ||
            FUN_004bd098(entry->sourceId, action.skill) >= 0)) {
        kindIdStore(action.targetKind, skills);
        if (skills[0] == element)
            return 1;
    }
    CombatantAffinityValueView *unit = (CombatantAffinityValueView *)FUN_003f0e20(btlGetMainState(), entry->unitIndex);
    if (unit != NULL && unit->value > 0 && (element == 2 || element == 3 || element == 20))
        return 1;
    return 0;
}
}
