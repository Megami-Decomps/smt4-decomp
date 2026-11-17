#include "battle/btlAction.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "battle/BtlGlobals.h"

extern "C" {



/* Allocates the action data block on first use. */
void btlActionAllocData(void)
{
    if (g_btlAction.slots == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\btlAction.cpp", 12067);
        g_btlAction.slots = static_cast<BtlActionSlot *>(asdMemAlloc(0x100, 0x100, 0, 0x3C74, 1));
    }
}

} /* extern "C" */
