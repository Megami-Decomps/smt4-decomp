#include "common.h"

extern "C" {

extern void FUN_00161a10(void *object);
extern void FUN_001764f4(void *object);
void FUN_001764dc(void *object, void *second)
{
    FUN_00161a10(object);
    FUN_001764f4(second);
}

} /* extern "C" */
