/* NON_MATCHING: retail uses `mov r4, #0` where armcc emits `add r1, r0, #7168`. */
#include "common.h"

extern "C" {

struct SlotTable { u8 unk0000[0x1ca0]; s8 ids[3]; };
SlotTable *gameGetSlotTable(void);

s32 gameSlotsCountValidIds(void)
{
    SlotTable *table = gameGetSlotTable();
    s32 count = 0;
    if (table->ids[0] >= 0) count++;
    if (table->ids[1] >= 0) count++;
    if (table->ids[2] >= 0) count++;
    return count;
}

} /* extern "C" */
