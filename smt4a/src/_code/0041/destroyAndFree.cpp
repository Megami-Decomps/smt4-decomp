#include "shard/Shard0041.h"

extern "C" {

extern void *FUN_004162a4(void *obj);
extern void asdOperatorDelete(void *memory);

void destroyAndFree(void *obj)
{
    asdOperatorDelete(FUN_004162a4(obj));
}

} /* extern "C" */
