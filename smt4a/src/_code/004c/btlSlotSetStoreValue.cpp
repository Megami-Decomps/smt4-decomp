#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

typedef struct BtlSlotSet004c3c84 {
    /* 0x00 */ u8 unk00[0x74];
    /* 0x74 */ u32 values[1];
} BtlSlotSet004c3c84;

BtlSlotSet004c3c84 *FUN_003f0e20(s32 state, u32 key);

/* Stores value at index in the slot set found for key. */
void btlSlotSetStoreValue(u32 key, s32 index, u32 value)
{
    BtlSlotSet004c3c84 *set = FUN_003f0e20(reinterpret_cast<s32>(btlGetMainState()), key);

    if (set != NULL) {
        set->values[index] = value;
    }
}

} /* extern "C" */
