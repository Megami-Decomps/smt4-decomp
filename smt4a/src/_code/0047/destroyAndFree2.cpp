#include "shard/Shard0047.h"

extern "C" {

extern void *FUN_004d0ba4(void *obj);
extern void FUN_002e3328(void *memory);

void destroyAndFree2(void *obj)
{
    FUN_002e3328(FUN_004d0ba4(obj));
}

} /* extern "C" */
