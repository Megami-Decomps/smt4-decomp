#include "nn/Result.h"

extern "C" {

extern int tokenResolveAddress(u32 handle, u32 *out, u32 value);
extern u32 tokenTableGet(void);

/* Queries with the object's first word and keeps only the failure code (0 on success); the queried value is unused. */
int queryResultFailureOnly(const u32 *object)
{
    u32 out;
    int result = tokenResolveAddress(tokenTableGet(), &out, *object);

    if (!nnResultIsFailure(result)) {
        result = 0;
    }
    return result;
}

} /* extern "C" */
