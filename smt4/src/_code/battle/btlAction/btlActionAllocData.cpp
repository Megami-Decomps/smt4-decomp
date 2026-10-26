#include "battle/btlAction.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {


extern BtlActionGlobals g_btlAction;

/* Allocates the action data block on first use. */
void btlActionAllocData(void)
{
    if (g_btlAction.data == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlAction.cpp", 12067);
        g_btlAction.data = asdMemAlloc(0x100, 0x100, 0, 0x3C74, 1);
    }
}

} /* extern "C" */
