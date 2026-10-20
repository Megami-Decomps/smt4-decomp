#include "common.h"

extern "C" {

typedef struct SlotTable {
    /* 0x0000 */ u8 unk0000[0x4D30];
    /* 0x4D30 */ u32 states[1];
} SlotTable;

/* True when the slot's state is 0, 1, 2 or 3. */
u32 slotTableStateIsActive(SlotTable *table, s32 slot)
{
    u32 state = table->states[slot];

    if (state == 0 || state == 1 || state == 2 || state == 3) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
