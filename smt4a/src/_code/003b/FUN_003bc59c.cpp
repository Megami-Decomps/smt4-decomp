/* NON_MATCHING: canonical main-state view and explicit choice forwarding recovered; mask loads, attribute shifts and range reloads differ. */
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "shard/W5_W5Match7_EntrySort.h"
#include "util/DataTable08Sub2GetRecord.h"
#include "util/SlotRangeSelect.h"
#include "shard/btlResolveEntryChoice.h"
#include "gamedata/Table04Record.h"

namespace {
struct BattleActionDescriptor {
    u16 unk00;
    s16 kind;
    s16 id;
    u16 unk06;
};
struct BattleActionEquipment {
    u8 unk00[4];
    u16 id;
};
// Additional views into existing opaque bytes, without changing the combatant ABI.
struct BattleActionCountView {
    u8 unk000[0x328];
    BattleActionDescriptor selected;
    u8 unk330[8];
    BattleActionDescriptor candidates[10]; // 0x338
    u8 unk388[0x70];
    BattleActionEquipment *equipment;      // 0x3f8
};
struct BattleActionSkill {
    u8 unk00[0x28];
    u32 unk28 : 11;
    u32 attribute : 5;
    u32 unkHigh : 16;
};
struct BattleActionItem {
    u8 unk00[0x32];
    u16 skillId;
};
struct EquipmentAttributeView {
    u8 unk00[0x24];
    u32 unk24 : 20;
    u32 attribute : 12;
};
/* What FUN_00301a08 reports about a choice: its first combatant and how many follow. */
struct BattleChoiceSpan {
    s32 count[3];
    s32 range[8];
};
}

extern "C" {
BattleActionItem *dataTable8FindRecord(s32 id);
u32 scrGetArg(s32 index);
void scrSetResult(s32 value);
const BtlCombatantEntryA *FUN_003eaf20(BtlMainStateA *state);
s32 battleCountActionsByAttribute(const BtlCombatantEntryA *combatant, u32 attribute);

/* Script command: counts the skills of one attribute (arg 0) among the actions of the chosen combatants,
   plus the selected combatant's own. */
s32 FUN_003bc59c(void)
{
    u32 attribute = scrGetArg(0);
    u32 choice = btlResolveEntryChoice(scrGetArg(1));
    s32 total = 0;
    BattleChoiceSpan span;
    FUN_00301a08(choice, span.range, span.count);
    for (s32 index = span.range[0]; index < span.count[0] + span.range[0]; index++) {
        const BtlCombatantEntryA *combatant = &btlGetMainState()->entries[index];
        const BattleActionCountView *actions = reinterpret_cast<const BattleActionCountView *>(combatant);
        u64 flags = combatant->flags;
        if ((flags & g_btlCandidateMasks.unavailable) == 0 && (flags & g_btlCandidateMasks.required) != 0 &&
            (flags & g_btlCandidateMasks.excluded) == 0) {
            s32 found = 0;
            if ((flags & g_btlCandidateMasks.unavailable) != 0 || (flags & g_btlCandidateMasks.singleAction) != 0) {
                if (actions->selected.kind == 2 || actions->selected.kind == 3) {
                    const BattleActionSkill *skill = (const BattleActionSkill *)dataTable04FindById(actions->selected.id);
                    if (skill != NULL && attribute == skill->attribute) {
                        found = 1;
                    }
                }
                if (actions->selected.kind == 8) {
                    const BattleActionItem *item = dataTable8FindRecord(actions->selected.id);
                    if (item != NULL && item->skillId != 0) {
                        const BattleActionSkill *skill = (const BattleActionSkill *)dataTable04FindById(item->skillId);
                        if (skill != NULL && attribute == skill->attribute) {
                            found++;
                        }
                    }
                }
            } else {
                for (s32 slot = 0; slot < 10; slot++) {
                    if (actions->candidates[slot].kind == 2 || actions->candidates[slot].kind == 3) {
                        const BattleActionSkill *skill = (const BattleActionSkill *)dataTable04FindById(actions->candidates[slot].id);
                        if (skill != NULL && attribute == skill->attribute) {
                            found++;
                        }
                    }
                    if (actions->candidates[slot].kind == 8) {
                        const BattleActionItem *item = dataTable8FindRecord(actions->candidates[slot].id);
                        if (item != NULL && item->skillId != 0) {
                            const BattleActionSkill *skill = (const BattleActionSkill *)dataTable04FindById(item->skillId);
                            if (skill != NULL && attribute == skill->attribute) {
                                found++;
                            }
                        }
                    }
                    if (actions->candidates[slot].kind == 1 && actions->candidates[slot].id == 2 &&
                        actions->equipment != NULL) {
                        const EntrySortData *entry = dataTable08Sub2GetRecord(actions->equipment->id);
                        if (entry != NULL &&
                            attribute == reinterpret_cast<const EquipmentAttributeView *>(entry)->attribute) {
                            found++;
                        }
                    }
                }
            }
            total += found;
        }
    }
    if (btlGetMainState()->unk4cd1 != 0) {
        const BtlCombatantEntryA *selected = FUN_003eaf20(btlGetMainState());
        if (selected != NULL) {
            total += battleCountActionsByAttribute(selected, attribute);
        }
    }
    scrSetResult(total);
    return 1;
}

} /* extern "C" */
