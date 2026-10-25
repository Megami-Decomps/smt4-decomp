#include "common.h"

extern "C" {

struct SlotTable { u8 unk0000[0x1ca0]; s8 ids[3]; };
SlotTable *gameGetSlotTable(void);

s32 gameSlotsCountValidIds(void)
{
    s32 count = 0;
    SlotTable *table = gameGetSlotTable();
    if (table->ids[0] >= 0) count++;
    if (table->ids[1] >= 0) count++;
    if (table->ids[2] >= 0) count++;
    return count;
}

} /* extern "C" */
