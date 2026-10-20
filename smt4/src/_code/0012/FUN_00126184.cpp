#include "common.h"

extern "C" {

u32 *jobGetWork(void);

u32 FUN_00126184(void)
{
    u32 *work = jobGetWork();

    return *work;
}

} /* extern "C" */
