#ifndef NN_ERR_FATAL_H
#define NN_ERR_FATAL_H

#include "nn/Result.h"

/* Direct reports pass the result and call site. Conditional reports also pass the tested
 * failure bit; the handler uses only the result and call site. */
extern "C" void errThrowFatal(u32 result, u32 address, ...);

/* Reports an SDK failure at its call site without changing the result. */
static __inline s32 throwFatalIfFailed(s32 result, u32 address)
{
    bool failed = nnResultIsFailure(result);
    if (failed) {
        errThrowFatal((u32)result, address, failed);
    }
    return result;
}

#endif
