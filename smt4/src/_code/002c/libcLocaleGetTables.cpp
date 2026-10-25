#include "common.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {

extern u8 DAT_004efca0;

u8 *libcLocaleGetTables(void)
{
    return &DAT_004efca0;
}

} /* extern "C" */
