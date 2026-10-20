#include "shard/Shard004D.h"

extern "C" {

extern u8 *gameGetSlotTable(void);
extern u8 bitsAt60Test(u8 *obj, u8 bit);

u32 isPartySlotBit1Clear(s32 index)
{
    u8 *base = gameGetSlotTable();

    if (index < 0 || bitsAt60Test(base + index * 300 + 0x68, 1) == 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
