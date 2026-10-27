#include "common.h"

extern "C" {

extern u8 g_animEvaluatorTypeInfo;

/* Returns the address of g_animEvaluatorTypeInfo. */
void *FUN_00502540(void)
{
    return &g_animEvaluatorTypeInfo;
}

} /* extern "C" */
