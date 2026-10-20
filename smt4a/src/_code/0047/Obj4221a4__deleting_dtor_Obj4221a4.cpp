#include "shard/Shard0047.h"

extern "C" {

extern void *_ZN9Obj422594D1Ev(void *obj);
extern void asdOperatorDelete(void *memory);

void _ZN9Obj4221a4D0Ev(void *obj)
{
    asdOperatorDelete(_ZN9Obj422594D1Ev(obj));
}

} /* extern "C" */
