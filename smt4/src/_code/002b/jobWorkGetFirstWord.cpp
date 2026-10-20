#include "common.h"

extern "C" {

extern u32 *jobGetWork(void);

u32 jobWorkGetFirstWord(void)
{
    u32 *work = jobGetWork();

    return *work;
}

} /* extern "C" */
