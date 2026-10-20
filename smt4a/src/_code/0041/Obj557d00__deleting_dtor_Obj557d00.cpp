#include "shard/Shard0041.h"

extern "C" {

extern void *_ZN9Obj557d00D1Ev(void *obj);
extern void asdOperatorDelete(void *memory);

void _ZN9Obj557d00D0Ev(void *obj)
{
    asdOperatorDelete(_ZN9Obj557d00D1Ev(obj));
}

} /* extern "C" */
