#include "common.h"
#include "gamedata/ConsumableRecord.h"

extern "C" {
/* Reads or updates the requested state. */
s32 FUN_0028e9a0(u32 id)
{
    if (id > 0 && id <= 60) {
        u8 kind = dataTable08Sub1GetRecord(id)->type;
        return kind == 2 || kind == 3;
    }
    return 0;
}
}
