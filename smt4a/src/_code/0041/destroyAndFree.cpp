#include "shard/Shard0041.h"

extern "C" {

extern void *FUN_004162a4(void *obj);
extern void FUN_002e3328(void *memory);

void destroyAndFree(void *obj)
{
    FUN_002e3328(FUN_004162a4(obj));
}

} /* extern "C" */
