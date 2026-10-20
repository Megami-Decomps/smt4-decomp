#include "shard/Shard0031.h"

extern "C" {

/* Copy-constructs a Word3 at `dst` (nothing when dst is NULL). */
void word3CopyConstruct(void *allocator, Word3 *dst, const Word3 *src)
{
    if (dst != NULL) {
        *dst = *src;
    }
}

} /* extern "C" */
