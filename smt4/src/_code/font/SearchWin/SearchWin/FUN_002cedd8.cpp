/* NON_MATCHING: paramsInit length setup uses an extra MOV and grouped-default relocation differs. */
#include "font/SearchWin/SearchWin.h"
#include "shard/W6_W6Match7_DrawParameters.h"
#include "AsdSDK/AsdDebug.h"

struct SearchWindowDefaults {
    u8 primary[36];
    u8 secondary[36];
    u8 animation[112];
};

extern "C" {
extern SearchWinWork *DAT_0043e170;
extern const char DAT_00403c38[];
extern const char DAT_00403ca0[];
extern const char DAT_00403c88[];
extern const char DAT_00403c70[];
extern const SearchWindowDefaults DAT_00403b80;
void *asdMemAlloc(u32, u32, u32, u32, u32);
void memClear(void *, u32);
s32 FUN_001ad180(u32);
void FUN_001acdd8(u32);
u32 asdProcessCreateSimple(const char *, s32, s32, s32, s32 (*)(u32), void *, void *);
u32 taskCreateDraw(const char *, s32, s32, s32, void (*)(u32), void *, void *, u32);
void drawParameterBlockClear(Params002c312c *);
void paramsInit(Params002c312c *, const void *, u32, const void *, u32, u32, u32, u32, u32, const void *, u32);
void FUN_002bd954(void *, s32, s32, Params002c312c *, s32, f32);
void spriteStartAnimationByIndex(void *, s32);

// Initialize the search-window process, both stereo draw jobs and its animated parameter block.
void FUN_002cedd8(void)
{
    // The shared byte padding starts at an unaligned offset, so retain a local aligned member view.
    struct DrawingView {
        u8 prefix[0x18];
        Params002c312c parameters;
        u8 animation[0xAC];
    };
    if (DAT_0043e170 == NULL) {
        asdDebugTrace(DAT_00403c38, 133);
        DAT_0043e170 = static_cast<SearchWinWork *>(asdMemAlloc(0x100, 0x100, 0, 0xE4, 1));
    }
    SearchWinWork *work = DAT_0043e170;
    memClear(work, sizeof(*work));
    work->job = asdProcessCreateSimple(DAT_00403ca0, 1, 0, 0, FUN_001ad180, NULL, NULL);
    taskCreateDraw(DAT_00403c88, 129, 0, 0, FUN_001acdd8, NULL, NULL, work->job);
    taskCreateDraw(DAT_00403c70, 223, 0, 0, FUN_001acdd8, NULL, NULL, work->job);
    DrawingView *draw = reinterpret_cast<DrawingView *>(work);
    drawParameterBlockClear(&draw->parameters);
    paramsInit(&draw->parameters, DAT_00403b80.primary, 36, DAT_00403b80.secondary, 36, 0, 0, 0, 0, DAT_00403b80.animation, 112);
    FUN_002bd954(draw->animation, 14, 135, &draw->parameters, 1, 1.0f);
    spriteStartAnimationByIndex(draw->animation, 0);
}
}
