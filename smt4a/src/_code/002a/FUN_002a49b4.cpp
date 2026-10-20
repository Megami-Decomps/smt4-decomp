#include "shard/Block57f248.h"

extern "C" {

/* Resets the record at 0x57F248 (if there is one): id 0xFFFF, mode 0, counter 0. */
void FUN_002a49b4(void)
{
    Record57f248 *record;

    record = DAT_0057f248.record;
    if (DAT_0057f248.record != NULL) {
        record->unk64E = 0xFFFF;
        record->unk008 = 0;
        record->unk650 = 0;
    }
}

} /* extern "C" */
