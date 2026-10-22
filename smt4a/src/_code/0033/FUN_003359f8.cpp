/* NON_MATCHING: free-slot search branches and party-count loads differ. */
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
BtlMainStateA *btlGetMainState(void);
PartyInsertionSlots *gameGetSlotTable(void);
void FUN_004fcf0c(s32, s32, s32, s32, s32, s32);
}

extern "C" u32 FUN_003359f8(void)
{
    s32 id = scrGetArg(0);
    BtlMainStateA *state = btlGetMainState();
    if (id >= 0x6D && reinterpret_cast<PartyInsertionStateView *>(state)->count < 4) {
        s32 freeSlot = -1;
        for (s32 i = 0; i < 4; ++i) {
            if ((state->roster[i].liveFlags.unk50 & 0x81) == 0) {
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
