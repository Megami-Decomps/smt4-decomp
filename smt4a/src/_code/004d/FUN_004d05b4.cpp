#include "shard/Shard004D.h"

extern "C" {

extern u8 *gameGetSlotTable(void);

u32 FUN_004d05b4(void)
{
    return *(u32 *)gameGetSlotTable();
}

} /* extern "C" */
