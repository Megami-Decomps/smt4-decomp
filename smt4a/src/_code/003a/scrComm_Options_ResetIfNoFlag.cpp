#include "shard/Shard003A.h"

extern "C" {

extern void optionsResetIfNoFlag(void);

/* Script command: runs optionsResetIfNoFlag. */
u32 scrComm_Options_ResetIfNoFlag(void)
{
    optionsResetIfNoFlag();
    return 1;
}

} /* extern "C" */
