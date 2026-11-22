#include "common.h"

extern "C" {

typedef struct Tracker {
    /* 0x0000 */ u8 unk0000[0x40D8];
    /* 0x40D8 */ u8 enabled[0xC];
    /* 0x40E4 */ s32 totalA[5];
    /* 0x40F8 */ s32 totalB[5];
    /* 0x410C */ s32 unk410C[5];
    /* 0x4120 */ u8 value[5];
    /* 0x4125 */ u8 mode[5];
} Tracker;

/* Enables slot `index` with the given value and mode, and adds `amount` to the total its mode selects (0 or 1).
 * `flags` (0 from FUN_004a96fc, 1 from btlUiQueueSlotPositionRequest) is not read. */
void btlUiSlotTrackerEnableSlot(Tracker *tracker, s32 amount, s32 index, u8 value, u8 mode, s32 flags)
{
    tracker->enabled[index] = 1;
    tracker->mode[index] = mode;
    tracker->value[index] = value;
    tracker->unk410C[index] = 0;
    if (mode == 0) {
        tracker->totalA[index] += amount;
    } else if (mode == 1) {
        tracker->totalB[index] += amount;
    }
}

} /* extern "C" */
