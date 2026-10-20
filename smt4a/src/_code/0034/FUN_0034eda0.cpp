/* Marks slot `index` as used, clears its first value and stores `value` in its second. */
#include "common.h"

extern "C" {

typedef struct SlotSet {
    /* 0x0000 */ u8 unk0000[0x41B8];
    /* 0x41B8 */ u8 used[8];
    /* 0x41C0 */ u32 first[5];
    /* 0x41D4 */ u32 second[5];
} SlotSet;

void FUN_0034eda0(SlotSet *set, s32 index, u32 value)
{
    set->used[index] = 1;
    set->first[index] = 0;
    set->second[index] = value;
}

}
