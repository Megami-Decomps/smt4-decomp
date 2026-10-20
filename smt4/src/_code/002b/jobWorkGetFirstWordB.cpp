#include "common.h"

extern "C" {

extern u32 *jobGetWork(void);

u32 jobWorkGetFirstWordB(void)
{
    u32 *work = jobGetWork();

    return *work;
}

} /* extern "C" */
