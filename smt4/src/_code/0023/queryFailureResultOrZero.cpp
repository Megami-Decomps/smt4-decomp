#include "common.h"
#include "nn/Result.h"

extern "C" {

extern int queryResultFailureOnly(void);

/* Returns the result of queryResultFailureOnly when it is negative, else 0. */
int queryFailureResultOrZero(void)
{
    int result = queryResultFailureOnly();

    if (!nnResultIsFailure(result)) {
        result = 0;
    }
    return result;
}

} /* extern "C" */
