#include "shard/Shard003D.h"

extern "C" {

extern s32 FUN_001ad9b4(u16 value);
extern void partyEntryBitsBit3(s32 value);

void FUN_003defe0(u16 value)
{
    if (FUN_001ad9b4(value) != 0) {
        partyEntryBitsBit3(value);
    }
}

} /* extern "C" */
