#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"

extern "C" {

/* Clears the 0x400 flag of every battle entry. */
void FUN_00229098(BtlMainState **battle)
{
    for (s32 i = 0; i < 109; i++) {
        (*battle)->entries[i].flagMask &= ~0x400ULL;
    }
}

} /* extern "C" */
