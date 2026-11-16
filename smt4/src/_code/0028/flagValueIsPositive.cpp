#include "common.h"
#include "shard/W5_W5Match7_ScriptUnit.h"

extern "C" {

extern int flagValueRead(void);

u8 flagValueIsPositive(void)
{
    return 0 < flagValueRead();
}

} /* extern "C" */
