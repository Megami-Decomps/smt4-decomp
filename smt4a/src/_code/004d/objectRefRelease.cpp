#include "shard/Shard004D.h"

extern "C" {

Object **objectRefRelease(Object **ref)
{
    if (*ref != NULL) {
        (*ref)->vtbl->release(*ref);
        *ref = NULL;
    }
    return ref;
}

} /* extern "C" */
