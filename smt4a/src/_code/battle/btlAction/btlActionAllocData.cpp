#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "battle/btlAction.h"

extern "C" {

extern BtlActionGlobals g_btlAction;

void* asdMemoryAllocTracked(s32 heap, s32 alignment, s32 reserved,
                            s32 size, s32 flags);

void btlActionAllocData(void)
{
    if (g_btlAction.data == 0) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlAction.cpp", 15239);
        g_btlAction.data = asdMemoryAllocTracked(0x100, 0x100, 0, 0xDBF4, 1);
    }
}

}
