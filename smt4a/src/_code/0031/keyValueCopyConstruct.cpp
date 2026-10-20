#include "shard/Shard0031.h"

extern "C" {

/* Copy-constructs a KeyValue at `dst` (nothing when dst is NULL). */
void keyValueCopyConstruct(void *allocator, KeyValue *dst, const KeyValue *src)
{
    if (dst != NULL) {
        dst->key = src->key;
        dst->value = src->value;
    }
}

} /* extern "C" */
