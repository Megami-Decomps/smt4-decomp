#include "common.h"

extern "C" {

extern int gameGetFlagBlock(void);

int questGetRuntimeStatus(int index)
{
    int base = gameGetFlagBlock();

    return base + index * 4 + 0x200;
}

} /* extern "C" */
