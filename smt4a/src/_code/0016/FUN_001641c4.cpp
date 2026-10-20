#include "shard/Block57f248.h"

extern "C" {

/* Decrements the counter at 0x64A of the record at 0x57F248 while it is above 10. */
void FUN_001641c4(void)
{
    if (DAT_0057f248.record->unk64A > 10) {
        DAT_0057f248.record->unk64A = DAT_0057f248.record->unk64A - 1;
    }
}

} /* extern "C" */
