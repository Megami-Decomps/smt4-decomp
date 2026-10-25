#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern WorkRange DAT_00464a70;

/* Updates the bound when it lies within the configured range. */
bool FUN_0010bedc(u32 value)
{
    u32 limit = DAT_00464a70.limit;
    if (value >= limit) {
        return false;
    }
    DAT_00464a70.lower = value;
    return true;
}

} /* extern "C" */
