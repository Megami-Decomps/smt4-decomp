#include "common.h"

extern "C" {

extern u32 DAT_005e2194[32]; /* 0x5e2194 */

extern u32 scrGetArg(void);
extern int scrSetResult(u32 value);

/* Script command: pushes entry argument 0 (0-31) of the table; out-of-range indices push nothing. */
u32 scrComm_GetGlobalTableEntry(void)
{
    u32 index = scrGetArg();

    if (index >= 32) {
        return 1;
    }
    scrSetResult(DAT_005e2194[index]);
    return 1;
}

} /* extern "C" */
