#include "shard/Block57f248.h"

extern "C" {

/* Decrements the counter at 0x64C of the record at 0x57F248 while it is positive. */
void FUN_0019d36c(void)
{
    if (0 < DAT_0057f248.record->unk64C) {
        DAT_0057f248.record->unk64C = DAT_0057f248.record->unk64C - 1;
    }
}

} /* extern "C" */
