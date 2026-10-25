/* NON_MATCHING: timed vector-slot allocation recovered; endpoint copy grouping and saved source/index registers still differ. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {
extern MapTimerBanks* g_vectorQueueWork;

// Allocate a timed vector transition, taking its endpoints from a selected bank.
MapTimerSlot* FUN_00312de8(s32 bankIndex, float duration)
{
    struct Vector {
        float x, y, z;
    };
    struct BankView {
        /* 0x000 */ u32 active;
        /* 0x004 */ Vector origin;
        /* 0x010 */ u8 unk010[0x1C];
        /* 0x02C */ Vector target;
        /* 0x038 */ u8 unk038[0x24C];
    };
    // The slot's byte-aligned padding cannot acquire float members without shifting it.
    struct SlotView {
        /* 0x00 */ s8 active;
        /* 0x01 */ u8 mode;
        /* 0x02 */ u8 unk02[2];
        /* 0x04 */ s32 bank;
        /* 0x08 */ u32 state;
        /* 0x0C */ Vector origin;
        /* 0x18 */ Vector target;
        /* 0x24 */ float duration;
        /* 0x28 */ float elapsed;
        /* 0x2C */ s32 id;
    };
    MapTimerBanks* work = g_vectorQueueWork;
    const BankView* bank = reinterpret_cast<const BankView*>(&work->banks[bankIndex]);
    for (s32 i = 0; i < 32; ++i) {
        SlotView* slot = reinterpret_cast<SlotView*>(&work->slots[i]);
        if (!slot->active) {
            slot->active = 1;
            slot->mode = 0;
            slot->state = 0;
            slot->bank = bankIndex;
            slot->origin = bank->origin;
            slot->target = bank->target;
            slot->duration = duration;
            slot->elapsed = 0.0f;
            slot->id = i;
            return reinterpret_cast<MapTimerSlot*>(slot);
        }
    }
    return NULL;
}
}
