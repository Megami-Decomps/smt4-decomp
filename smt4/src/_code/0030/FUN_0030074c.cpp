/* NON_MATCHING: max-MP percentage division swaps the multiplier and dividend registers; all other instructions agree. */
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlAction.h"
#include "battle/BattleUnitSlot.h"

extern "C" {
extern u32 g_btlScriptUnit;
s32 scrGetArg(u32);
BtlMainState *btlGetMainState();
void FUN_00250720(BtlMainState *);
u32 FUN_002551ac(s32, u32, BtlActionRecord *, s32, s32, s32, s32, s32, s32,
    s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s16, s32, u32, u32, s32);
void FUN_002505c0(s32, u32, u32, s32, s32, u32, s32);

/* Queue the requested fixed/current/max-MP amount for each active party member. */
u32 FUN_0030074c()
{
    s32 value = scrGetArg(0);
    s32 mode = scrGetArg(1);
    BtlMainState *state = btlGetMainState();
    u32 actor = reinterpret_cast<u32>(btlUnitGet(reinterpret_cast<BtlState *const *>(g_btlScriptUnit)));
    for (s32 i = 0; i < 4; ++i) {
        BtlEntry *entry = &state->entries[i];
        if ((entry->flags & 1) && !(entry->flags & 0x40) && entry->members.ids[0] >= 0) {
            s32 amount = 0;
            switch (mode) {
            case 0:
                amount = value * entry->maxMp / 100;
                break;
            case 1:
                amount = value * entry->mp / 100;
                break;
            case 2:
                amount = value;
                break;
            }
            FUN_00250720(state);
            s32 order = i << 3;
            FUN_002551ac(0, actor, &state->actions.records[entry->members.ids[0]], 0,
                -1, amount, -1, entry->value, entry->maxHp, 0, 0, 0, 0,
                1, 0, order, order, order, order, 1, 0, 1, 1, 0, 1);
            FUN_002505c0(0, actor, 0x10001B5, 0, 0, 0, 0);
        }
    }
    return 1;
}
}
