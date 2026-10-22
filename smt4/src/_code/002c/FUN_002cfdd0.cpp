/* NON_MATCHING: stock-demon action search uses fewer saved registers and different loop sharing. */
/* Adds a stock demon to an available battle-party action slot. */
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "shard/W7_W7Match2_PartyDamage.h"

extern "C" {
BtlMainState *btlGetMainState(void);
s32 scrGetArg(u32 index);
PartyDamageSlotsIV *gameGetSlotTable(void);
void FUN_0024b888(s32 first, s32 second, s32 third, s32 stockIndex, s32 actionIndex, s32 enabled);

u32 FUN_002cfdd0(void)
{
    /* These fields follow the shared battle-state and party-slot prefixes. */
    struct BattlePartyView {
        u8 unk0000[0x1E98];
        BtlActionRecord *actions;
        u8 unk1E9C[0x128];
        s16 activeCount;
    };
    struct PartyView {
        u8 unk0000[0x90F0];
        s8 stock[24];
        s8 active[3];
        u8 count;
    };
    s32 id = scrGetArg(0);
    BattlePartyView *state = (BattlePartyView *)btlGetMainState();
    if (id >= 109 && state->activeCount < 4) {
        for (s32 slot = 0; slot < 4; ++slot) {
            u32 status = state->actions[slot].status;
            if ((status & 1) == 0 && (status & 0x80) == 0) {
                PartyView *party = (PartyView *)gameGetSlotTable();
                s32 stockIndex = -1;
                for (s32 i = 0; i < party->count; ++i) {
                    if (party->stock[i] == id - 109) {
                        stockIndex = i;
                        break;
                    }
                }
                FUN_0024b888(0, 0, 0, stockIndex, slot, 1);
                break;
            }
        }
    }
    return 1;
}
}
