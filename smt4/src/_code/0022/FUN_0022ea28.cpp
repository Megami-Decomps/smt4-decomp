#include "common.h"

extern "C" {

extern u32 *gameGetSlotTable(void);

u32 FUN_0022ea28(void)
{
    u32 *value = gameGetSlotTable();

    return *value;
}

} /* extern "C" */
