#include "font/SearchWin/SearchWin.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {
extern SearchWinWork *DAT_0043e170;
extern const char DAT_00403c38[];
extern const char DAT_00403ca0[];
extern const char DAT_00403c88[];
extern const char DAT_00403c70[];
/* The search window's resource parameter tables (0x403b80 in the image). */
const u32 DAT_00403b80[9] = {0x00000000, 0x00000000, 0x00000000, 0x0000014A, 0x00000000, 0x00000008, 0x00000000, 0x0000FEB6, 0x00000004};
const u32 DAT_00403ba4[9] = {0x3F800000, 0x3F800000, 0x00000000, 0x3F800000, 0x00000000, 0x00000004, 0x00000000, 0x00000000, 0x00000000};
const u32 DAT_00403bc8[28] = {0x00000001, 0x00000000, 0xFFFFFFFDu, 0x00000000, 0x00000000, 0xFFFFFFFDu, 0x00000000, 0xFFFFFFFFu, 0x00000000, 0xFFFFFFFFu, 0xFFFFFFFFu, 0x00000000, 0xFFFFFFFFu, 0x00000000, 0x00000002, 0x00000000, 0xFFFFFFFDu, 0x00000001, 0x00000000, 0xFFFFFFFDu, 0x00000000, 0xFFFFFFFFu, 0x00000000, 0xFFFFFFFFu, 0xFFFFFFFFu, 0x00000000, 0xFFFFFFFFu, 0x00000000};
s32 FUN_001ad180(u32);
void FUN_001acdd8(u32);
u32 taskCreateDraw(const char *, s32, s32, s32, void (*)(u32), void *, void *, u32);
void drawParameterBlockClear(UiResourceParameters *);

void FUN_002bd954(void *, s32, s32, UiResourceParameters *, s32, f32);
void spriteStartAnimationByIndex(void *, s32);

// Initialize the search-window process, both stereo draw jobs and its animated parameter block.
void searchWinInitialize(void)
{
    // The shared byte padding starts at an unaligned offset, so retain a local aligned member view.
    struct DrawingView {
        u8 prefix[0x18];
        UiResourceParameters parameters;
        u8 animation[0xAC];
    };
    if (DAT_0043e170 == NULL) {
        asdDebugTrace(DAT_00403c38, 133);
        DAT_0043e170 = static_cast<SearchWinWork *>(asdMemAlloc(0x100, 0x100, 0, 0xE4, 1));
    }
    SearchWinWork *work = DAT_0043e170;
    memClear(work, sizeof(*work));
    work->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_00403ca0), 1, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(FUN_001ad180), NULL, NULL);
    taskCreateDraw(DAT_00403c88, 129, 0, 0, FUN_001acdd8, NULL, NULL, work->job);
    taskCreateDraw(DAT_00403c70, 223, 0, 0, FUN_001acdd8, NULL, NULL, work->job);
    DrawingView *draw = reinterpret_cast<DrawingView *>(work);
    drawParameterBlockClear(&draw->parameters);
    paramsInit(&draw->parameters, DAT_00403b80, sizeof(DAT_00403b80), DAT_00403ba4, sizeof(DAT_00403ba4), 0, 0, 0, 0, DAT_00403bc8, sizeof(DAT_00403bc8));
    FUN_002bd954(draw->animation, 14, 135, &draw->parameters, 1, 1.0f);
    spriteStartAnimationByIndex(draw->animation, 0);
}
}
