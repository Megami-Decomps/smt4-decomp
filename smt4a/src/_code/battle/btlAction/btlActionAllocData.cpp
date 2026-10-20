#include "battle/btlAction.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

void *asdMemoryAllocTracked(s32 heap, s32 align, s32 a, s32 size, s32 flag);

extern BtlActionGlobals g_btlAction;

/* Allocates the action data block on first use. */
void btlActionAllocData(void)
{
    if (g_btlAction.data == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlAction.cpp", 15239);
        g_btlAction.data = asdMemoryAllocTracked(0x100, 0x100, 0, 0xDBF4, 1);
    }
}

} /* extern "C" */
