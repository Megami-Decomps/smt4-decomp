#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
u32 bustupTextureStart(s32 id, s32 mode);
void bustupCutAnimSetJobParam(u32 handle);
void scrSetResult(u32 value);

s32 scrCommCreateBustupCut(void)
{
    s32 id = scrGetArg(0);
    if (id >= 428) {
        id = 0;
    }
    u32 handle = bustupTextureStart(id, 0);
    if (handle != 0) {
        bustupCutAnimSetJobParam(handle);
    }
    scrSetResult(handle);
    return 1;
}

} /* extern "C" */
