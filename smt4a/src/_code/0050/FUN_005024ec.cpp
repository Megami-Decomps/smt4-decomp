#include "common.h"

extern "C" {

extern u8 g_animBlenderTypeInfo;

/* Returns the address of g_animBlenderTypeInfo. */
void *FUN_005024ec(void)
{
    return &g_animBlenderTypeInfo;
}

} /* extern "C" */
