/* NON_MATCHING: retail keeps 0, 1 (0x105 derived as 1 + 260) and the open-file pointer (loaded at entry) in callee-saved registers, derives the addresses of DAT_004c4080/DAT_004c40e0 and DAT_004c3a38/DAT_004c3a50/DAT_004c3af8/g_mobiclipPlayer from one base each (they are one object in the original; the symbols still split them), and its backend pool word names the reader field's own symbol. */
#include "mobiclip_ctrl/MobiclipPlaybackStart.h"
#include "nn/fs/ArchivePath.h"
#include "nn/Result.h"

extern "C" {
s32 refIsNullOrZero(MoviePathConversionState *);
s32 FUN_002b90c8(const char *, u32, MoviePathConversionState *);
u16 *FUN_002c618c(u16 *, const char *, s32, MoviePathConversionState *);
void asdFatalError(void);
void FUN_0034dddc(void *, void *, void *);
u32 FUN_0034e134(void *);
void FUN_003f66f0(void *, u32, void *);
void FUN_00351498(MovieSync *, void *, void *, void *, void *, void *);
void mobiclipYieldPlaybackThread(MovieSync *);
extern u8 DAT_004c3a38[0x18];
extern u8 DAT_004c3a50[0xa8];
extern u8 DAT_004c3af8[0x28];
extern MovieSync g_mobiclipPlayer;
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
        if (nnResultIsFailure(archivePathDeviceOpen(&file->handle, path, 1)))
            asdFatalError();
    }
    FUN_0034dddc(DAT_004c4080, &DAT_004c40e0, DAT_004c3a38);
    u32 stream = FUN_0034e134(DAT_004c4080);
    FUN_003f66f0(&DAT_0044d024, stream, DAT_004c4080);
    FUN_00351498(&g_mobiclipPlayer, DAT_004c3a38,
                DAT_0044d024.reader, DAT_0044d024.player,
                DAT_004c3a50, DAT_004c3af8);
    s32 state;
    do {
        mobiclipYieldPlaybackThread(&g_mobiclipPlayer);
        state = g_mobiclipPlayer.state;
    } while (state != 7 && state != 1);
}
}
