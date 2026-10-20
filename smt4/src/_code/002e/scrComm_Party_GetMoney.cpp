#include "common.h"

extern "C" {

int scrSetResult(u32 result);
extern u32 *gameGetSlotTable(void);

u32 scrComm_Party_GetMoney(void)
{
    u32 *party = gameGetSlotTable();

    scrSetResult(*party);
    return 1;
}

} /* extern "C" */
