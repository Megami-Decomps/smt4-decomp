/* NON_MATCHING: the free-slot search now keeps retail's separate tst/tsteq tests and plain loop; remaining: roster field offset folded into a register add, argument saved in r5 instead of r4, loop-exit epilogue and the party-count loads. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/Shard0031.h"

struct PartyInsertionStateView {
    u8 prefix[0x2000];
    s16 count;
};
/* SlotTable ends at 0x1CA0; the owning block supplies the member count. */
struct PartyInsertionSlots {
    SlotTable table;
    u8 padding[3];
    u8 count;
};
extern "C" {
s32 scrGetArg(u32);
PartyInsertionSlots *gameGetSlotTable(void);
void FUN_004fcf0c(s32, s32, s32, s32, s32, s32);
}

/* A roster slot is free when it is neither active nor excluded (separate tests: retail does not fold them into one mask). */
static __inline bool rosterSlotIsFree(u32 flags)
{
    if (flags & 1) {
        return false;
    }
    if (flags & 0x80) {
        return false;
    }
    return true;
}

extern "C" u32 FUN_003359f8(void)
{
    s32 id = scrGetArg(0);
    BtlMainStateA *state = btlGetMainState();
    if (id >= 0x6D && reinterpret_cast<PartyInsertionStateView *>(state)->count < 4) {
        s32 freeSlot = -1;
        for (s32 i = 0; i < 4; ++i) {
            BattleRosterRecordA *record = &state->roster[i];
            if (rosterSlotIsFree(record->liveFlags.unk50)) {
                freeSlot = i;
                break;
            }
        }
        if (freeSlot >= 0) {
            PartyInsertionSlots *slots = gameGetSlotTable();
            s32 member = -1;
            for (s32 i = 0; i < slots->count; ++i) {
                if (slots->table.slots[i] == id - 0x6D) {
                    member = i;
                    break;
                }
            }
            FUN_004fcf0c(0, 0, 0, member, freeSlot, 1);
        }
    }
    return 1;
}
