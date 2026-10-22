/* If scrGetCommandFrame fails, triggers the fallback (FUN_00285020, then sWinRequestMappedTexture with the current id); returns whether FUN_0023a5d8 succeeds. */
#include "common.h"

extern "C" {

extern s32 scrGetArg(u32 arg);
extern s32 FUN_0023a5d8(void);
extern s32 scrGetCommandFrame(void);
extern void FUN_00285020(s32 arg);
extern void sWinRequestMappedTexture(s32 id, s32 arg);

u8 FUN_0023795c(void)
{
    if (scrGetCommandFrame() == 0) {
        FUN_00285020(1);
        sWinRequestMappedTexture((s16)scrGetArg(0), 0);
    }
    return FUN_0023a5d8() != 0;
}

}
