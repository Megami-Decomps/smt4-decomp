/* NON_MATCHING: the result test now matches (nnResultIsFailure: lsrs + blne); remaining: retail keeps the constants 0 (r9) and 1 (r8) in registers, derives 0x105 as r8 + 260 and the open-file globals from one base (r7), so its saved-register set is r4-sl and the global address reuse differs. */
#include "mobiclip_ctrl/MobiclipPlaybackStart.h"
#include "nn/Result.h"

extern "C" {
s32 refIsNullOrZero(MoviePathConversionState *);
s32 FUN_002b90c8(const char *, u32, MoviePathConversionState *);
u16 *FUN_002c618c(u16 *, const char *, s32, MoviePathConversionState *);
u32 FUN_002bb5a4(u32 *, const u16 *, u32);
void asdFatalError(void);
void FUN_0034dddc(void *, void *, void *);
u32 FUN_0034e134(void *);
void FUN_003f66f0(void *, u32, void *);
void FUN_00351498(MovieSync *, void *, void *, void *, void *, void *);
void mobiclipYieldPlaybackThread(MovieSync *);
extern u8 DAT_004c3a38[0x18];
extern u8 DAT_004c3a50[0xa8];
extern u8 DAT_004c3af8[0x28];
extern MovieSync DAT_004c3b20;
extern u8 DAT_004c4080[0x60];
extern u32 DAT_004c40e0;
extern MovieOpenFile DAT_004c40e4;
extern MoviePlaybackBackend DAT_0044d024;

// Open the converted movie filename, start both streams, then wait for playback readiness.
void FUN_0032b3c4(const char *filename)
{
    {
        u16 path[264];
        MoviePathConversionState conversionState = {0, 0};
        u16 *output = path;
        refIsNullOrZero(&conversionState);
        s32 consumed;
        while ((consumed = FUN_002b90c8(filename, 0x105, &conversionState)) != 0 &&
               FUN_002c618c(output, filename, consumed, &conversionState)) {
            ++output;
            filename += consumed;
        }
        *output = 0;
        MovieOpenFile *file = &DAT_004c40e4;
        file->sizeLow = 0;
        file->sizeHigh = 0;
        file->positionLow = 0;
        file->positionHigh = 0;
        if (nnResultIsFailure(FUN_002bb5a4(&file->handle, path, 1)))
            asdFatalError();
    }
    FUN_0034dddc(DAT_004c4080, &DAT_004c40e0, DAT_004c3a38);
    u32 stream = FUN_0034e134(DAT_004c4080);
    FUN_003f66f0(&DAT_0044d024, stream, DAT_004c4080);
    FUN_00351498(&DAT_004c3b20, DAT_004c3a38,
                DAT_0044d024.reader, DAT_0044d024.player,
                DAT_004c3a50, DAT_004c3af8);
    do {
        mobiclipYieldPlaybackThread(&DAT_004c3b20);
    } while (DAT_004c3b20.state != 7 && DAT_004c3b20.state != 1);
}
}
