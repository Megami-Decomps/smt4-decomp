#include "camp/RenderCtx.h"

extern "C" {

extern RenderCtxA *g_renderCtx;
void FUN_00345b94(void);

s32 FUN_00388a40(void)
{
    FUN_00157558(g_renderCtx);
    FUN_00345b94();
    return 0;
}

} /* extern "C" */
