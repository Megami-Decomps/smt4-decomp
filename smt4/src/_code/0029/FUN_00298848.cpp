/* NON_MATCHING: effect/targeting tests are the table-record bitfields (target 3 or 8 = single target; retail returns 0 when the single-target query succeeds), the party scan is one loop from slot -1 reusing the previous result for empty slots, and the tails are branch-shaped; armcc still does not predicate the `&&`/`||` chains the way retail does and emits a stray nop after the single-target call. */
#include "gamedata/Table04Record.h"
#include "shard/Shard0031.h"
#include "gamedata/DataTable40.h"

extern "C" {
s32 FUN_0026c464(void *, s32, s32);
s32 FUN_0026c654(void *, s32, s32, s32);
SlotTable *gameGetSlotTable(void);
}

extern "C" u32 FUN_00298848(s32 skillId, void *context)
{
    const Table04Record *skill = dataTable40FindById(skillId);
    if (skill == NULL) return 0;
    if ((skill->effectProperties.mode == 1 || skill->effectProperties.mode == 3) && skill->sort.category == 3) {
        if (skill->effectProperties.targeting == 3 || skill->effectProperties.targeting == 8) {
            return FUN_0026c464(context, skillId, 1) == 0;
        } else {
            /* These party slots lie beyond the recovered SlotTable prefix. */
            struct PartyConditionView {
                u8 prefix[0x90F0];
                s8 slots[24];
            };
            typedef char SlotOffsetCheck[offsetof(PartyConditionView, slots) == 0x90F0 ? 1 : -1];
            const PartyConditionView *party = reinterpret_cast<const PartyConditionView *>(gameGetSlotTable());
            s32 result; // Skipped empty slots reuse the previous query's result.
            for (s32 i = -1; i < 24; ++i) {
                if (i < 0) {
                    result = FUN_0026c654(context, -1, skillId, 1);
                } else {
                    s32 slot = party->slots[i];
                    if (slot >= 0)
                        result = FUN_0026c654(context, slot, skillId, 1);
                }
                if (result == 0) return 1;
            }
        }
    }
    if (skillId == 0x8C) return 1;
    return 0;
}
