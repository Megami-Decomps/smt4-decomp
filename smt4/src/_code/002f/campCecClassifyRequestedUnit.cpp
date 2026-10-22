/* NON_MATCHING: exact 92-row control/instruction sequence except work base R7 and +0x100 view R8 are swapped from retail; alternate allocation/optimization candidate. */
#include "shard/W4_Match6_BtlEntry.h"

namespace {
struct RequestedUnitWork {
    u8 unk000[0x104];
    s32 status;
    u8 unk108[8];
    u32 phase;
    u8 unk114[0xc];
    s16 requestedId;
};
struct RequestedUnitRecord {
    BtlEquip equip;
    u16 flags; // 0x44
    u16 id; // 0x46
};
struct RequestedUnitSlots {
    u8 unk0000[0x90f0];
    s8 reserve[24];
    s8 active[3];
};
}

extern "C" {
s32 partyPanelGetRequestedUnitId();
u8* gameGetSlotTable();
RequestedUnitRecord* gameGetUnitRecord(u32 index);
u8 flagWordTestBit(const RequestedUnitRecord*, u32 bit);
void FUN_002579bc(s32 index);

s32 campCecClassifyRequestedUnit(void* context)
{
    RequestedUnitWork* work = static_cast<RequestedUnitWork*>(context);
    s32 result = 0;
    if (partyPanelGetRequestedUnitId()) {
        work->requestedId = static_cast<s16>(partyPanelGetRequestedUnitId());
        work->status = -1;
        RequestedUnitSlots* slots = reinterpret_cast<RequestedUnitSlots*>(gameGetSlotTable());
        for (s32 i = 0; i < 3; ++i) {
            if (slots->active[i] >= 0
                && gameGetUnitRecord(slots->active[i])->id == work->requestedId
                && !flagWordTestBit(gameGetUnitRecord(slots->active[i]), 10)
                && !flagWordTestBit(gameGetUnitRecord(slots->active[i]), 1)) {
                work->status = 5;
                break;
            }
        }
        if (work->status == -1) {
            for (s32 i = 0; i < 24; ++i) {
                if (slots->reserve[i] >= 0
                    && gameGetUnitRecord(slots->reserve[i])->id == work->requestedId
                    && (flagWordTestBit(gameGetUnitRecord(slots->reserve[i]), 10)
                        || flagWordTestBit(gameGetUnitRecord(slots->reserve[i]), 1))) {
                    work->status = 2;
                    break;
                }
            }
            if (work->status == -1) {
                FUN_002579bc(0);
                work->status = 4;
            }
        }
        result = 2;
        work->phase = 2;
    }
    return result;
}
} // extern "C"
