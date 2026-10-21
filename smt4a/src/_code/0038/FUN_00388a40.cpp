#include "common.h"

extern "C" {

extern void *g_renderCtx;
void *FUN_00157558(void *context);
void FUN_00345b94(void *context);

s32 FUN_00388a40(void)
{
    FUN_00345b94(FUN_00157558(g_renderCtx));
    return 0;
}

} /* extern "C" */
