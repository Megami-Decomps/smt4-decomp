#include "common.h"

extern "C" {

extern u32 *jobGetWork(void);

u32 FUN_002b7174(void)
{
    u32 *work = jobGetWork();

    return *work;
}

} /* extern "C" */
