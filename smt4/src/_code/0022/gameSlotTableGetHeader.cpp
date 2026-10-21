#include "common.h"

extern "C" {

extern u32 *gameGetSlotTable(void);

u32 gameSlotTableGetHeader(void)
{
    u32 *value = gameGetSlotTable();

    return *value;
}

} /* extern "C" */
