#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "battle/btlAction.h"
#include "battle/BtlGlobals.h"

extern "C" {


void* asdMemoryAllocTracked(s32 heap, s32 alignment, s32 reserved,
                            s32 size, s32 flags);

void btlActionAllocData(void)
{
    if (g_btlAction.slots == 0) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlAction.cpp", 15239);
        g_btlAction.slots = static_cast<BtlActionSlotA *>(asdMemoryAllocTracked(0x100, 0x100, 0, 0xDBF4, 1));
    }
}

}
