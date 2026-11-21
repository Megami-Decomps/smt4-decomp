/* NON_MATCHING: armcc unrolls the free-slot search and merges its two status tests into one tst #129; retail keeps a counted loop (bound 4 in r1) testing bit 0 and bit 7 separately. */
/* Adds a stock demon to an available battle-party action slot. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"
#include "gamedata/SaveSlotTableIV.h"
#include "script/ScriptArgs.h"

/* unit-local: these fields follow the shared battle-state and party-slot prefixes. */
struct BattlePartyView {
    u8 unk0000[0x1E98];
    BtlActionRecord *actions;
    u8 unk1E9C[0x128];
    s16 activeCount;
};

extern "C" {
void FUN_0024b888(s32 first, s32 second, s32 third, s32 stockIndex, s32 actionIndex, s32 enabled);

u32 FUN_002cfdd0(void)
{
    s32 id = scrGetArg(0);
    BattlePartyView *state = (BattlePartyView *)btlGetMainState();
    if (id < 109 || state->activeCount >= 4)
        return 1;
    s32 slot = -1;
    for (s32 i = 0; i < 4; ++i) {
        if (!(state->actions[i].status & 1) && !(state->actions[i].status & 0x80)) {
            slot = i;
            break;
        }
    }
    if (slot < 0)
        return 1;
    s32 stockIndex = -1;
    s32 stockId = id - 109;
    SaveSlotTableIV *party = gameGetSlotTable();
    for (s32 i = 0; i < party->stockCount; ++i) {
        if (party->stock[i] == stockId) {
            stockIndex = i;
            break;
        }
    }
    FUN_0024b888(0, 0, 0, stockIndex, slot, 1);
    return 1;
}
}
