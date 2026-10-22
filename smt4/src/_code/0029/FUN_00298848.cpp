/* NON_MATCHING: skill-property tests and party-slot scan branches are laid out differently. */
#include "gamedata/Table04Record.h"
#include "shard/Shard0031.h"

extern "C" {
Table04Record *FUN_002ae164(s32);
s32 FUN_0026c464(void *, s32, s32);
s32 FUN_0026c654(void *, s32, s32, s32);
SlotTable *gameGetSlotTable(void);
}

extern "C" u32 FUN_00298848(s32 skillId, void *context)
{
    const Table04Record *skill = FUN_002ae164(skillId);
    if (skill == NULL) return 0;
    u32 effect = (skill->properties >> 9) & 3;
    if ((effect == 1 || effect == 3) && skill->sort.category == 3) {
        u32 target = (skill->properties >> 5) & 15;
        if (target != 3 && !(target & 8)) {
            /* These party slots lie beyond the recovered SlotTable prefix. */
            struct PartyConditionView {
                u8 prefix[0x90F0];
                s8 slots[24];
            };
            typedef char SlotOffsetCheck[offsetof(PartyConditionView, slots) == 0x90F0 ? 1 : -1];
            const PartyConditionView *party = reinterpret_cast<const PartyConditionView *>(gameGetSlotTable());
            if (FUN_0026c654(context, -1, skillId, 1) == 0) return 1;
            for (s32 i = 0; i < 24; ++i) {
                s32 slot = party->slots[i];
                if (slot >= 0 && FUN_0026c654(context, slot, skillId, 1) == 0) return 1;
            }
        } else {
            if (FUN_0026c464(context, skillId, 1) == 0) return 1;
        }
    }
    return skillId == 0x8C;
}
