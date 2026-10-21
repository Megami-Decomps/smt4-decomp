/* NON_MATCHING: retail clears an otherwise unused 256-byte stack buffer; retaining it solely to match would be dead code. */
#include "common.h"

extern "C" {
u32 asdLoadFileExists(const char *path);

s32 FUN_00240c34(void* context)
{
    return asdLoadFileExists((const char *)context) != 0;
}
}
