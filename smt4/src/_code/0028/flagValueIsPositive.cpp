#include "common.h"
#include "shard/W5_W5Match7_ScriptUnit.h"

extern "C" {

extern int FUN_0028fb40(void);

u8 flagValueIsPositive(void)
{
    return 0 < FUN_0028fb40();
}

} /* extern "C" */
