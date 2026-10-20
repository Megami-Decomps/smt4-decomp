#include "shard/Shard003A.h"

extern "C" {

extern void optionsResetIfNoFlag(void);

/* Script command: runs optionsResetIfNoFlag. */
u32 FUN_003a7878(void)
{
    optionsResetIfNoFlag();
    return 1;
}

} /* extern "C" */
