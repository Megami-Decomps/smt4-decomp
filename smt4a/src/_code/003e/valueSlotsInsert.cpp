#include "common.h"

struct ValueSlots {
    u8 unk0000[0x216c]; // 0x0000
    u32 values[42];     // 0x216c
};

// Inserts a value in the first unused slot, or returns zero when full.
extern "C" u32 valueSlotsInsert(ValueSlots* slots, u32 value)
{
    for (s32 i = 0; i < 42; ++i) {
        if (slots->values[i] == 0) {
            slots->values[i] = value;
            return value;
        }
    }
    return 0;
}
