#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"

extern "C" {
void FUN_00345ad4(void);

s32 FUN_00388a20(void)
{
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    FUN_00345ad4();
    return 0;
}

} /* extern "C" */
