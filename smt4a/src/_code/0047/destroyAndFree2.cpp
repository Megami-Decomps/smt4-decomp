#include "shard/Shard0047.h"

extern "C" {

extern void *FUN_004d0ba4(void *obj);
extern void asdOperatorDelete(void *memory);

void destroyAndFree2(void *obj)
{
    asdOperatorDelete(FUN_004d0ba4(obj));
}

} /* extern "C" */
