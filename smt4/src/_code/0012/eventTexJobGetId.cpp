#include "common.h"

extern "C" {

u32 *jobGetWork(void);

u32 eventTexJobGetId(void)
{
    u32 *work = jobGetWork();

    return *work;
}

} /* extern "C" */
