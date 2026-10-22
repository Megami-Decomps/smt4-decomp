/* NON_MATCHING: only the initial two 64-bit restriction-mask tests differ in scalar/LDM/LDRD grouping and register allocation; every instruction from the selected-action branch onward matches. -O2 candidate. */
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "shard/W5_W5Match7_EntrySort.h"

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

extern "C" {
BattleActionSkill *dataTable04FindById(u32 id);
BattleActionItem *dataTable8FindRecord(s32 id);

// Count candidate actions of one attribute, or only the selected action when restricted.
s32 battleCountActionsByAttribute(const BtlCombatantEntryA *combatant, u32 attribute)
{
    const BattleActionCountView *actions = reinterpret_cast<const BattleActionCountView *>(combatant);
    s32 count = 0;
    if ((combatant->flags & g_btlCandidateMasks.unavailable) ||
        (combatant->flags & g_btlCandidateMasks.singleAction)) {
        if (actions->selected.kind == 2 || actions->selected.kind == 3) {
            const BattleActionSkill *skill = dataTable04FindById(actions->selected.id);
            if (skill != NULL && attribute == skill->attribute) {
                ++count;
            }
        }
        if (actions->selected.kind == 8) {
            const BattleActionItem *item = dataTable8FindRecord(actions->selected.id);
            if (item != NULL && item->skillId != 0) {
                const BattleActionSkill *skill = dataTable04FindById(item->skillId);
                if (skill != NULL && attribute == skill->attribute) {
                    ++count;
                }
            }
        }
    } else {
        for (s32 index = 0; index < 10; ++index) {
            if (actions->candidates[index].kind == 2 || actions->candidates[index].kind == 3) {
                const BattleActionSkill *skill = dataTable04FindById(actions->candidates[index].id);
                if (skill != NULL && attribute == skill->attribute) {
                    ++count;
                }
            }
            if (actions->candidates[index].kind == 8) {
                const BattleActionItem *item = dataTable8FindRecord(actions->candidates[index].id);
                if (item != NULL && item->skillId != 0) {
                    const BattleActionSkill *skill = dataTable04FindById(item->skillId);
                    if (skill != NULL && attribute == skill->attribute) {
                        ++count;
                    }
                }
            }
            if (actions->candidates[index].kind == 1 && actions->candidates[index].id == 2 &&
                actions->equipment != NULL) {
                const EntrySortData *entry = FUN_00192608(actions->equipment->id);
                if (entry != NULL && attribute ==
                    reinterpret_cast<const EquipmentAttributeView *>(entry)->attribute) {
                    ++count;
                }
            }
        }
    }
    return count;
}
}
