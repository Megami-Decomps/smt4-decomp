/* An animated UI sprite (0x8C bytes): its timer, animation and position state. */
#ifndef UI_TIMERSLOT_H
#define UI_TIMERSLOT_H
#include "common.h"

typedef struct TimerSlot {
    /* 0x00 */ u8 data[0x8C];
} TimerSlot;

typedef char TimerSlotSizeCheck[sizeof(TimerSlot) == 0x8C ? 1 : -1];

#endif
