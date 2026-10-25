#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

extern u32 *gameGetSlotTable(void);

u32 scrComm_Party_GetMoney(void)
{
    u32 *party = gameGetSlotTable();

    scrSetResult(*party);
    return 1;
}

} /* extern "C" */
