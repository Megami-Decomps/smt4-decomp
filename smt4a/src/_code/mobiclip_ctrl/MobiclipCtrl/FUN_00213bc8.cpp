/* NON_MATCHING: saved-register set, global-address reuse, and backend argument scheduling differ. */
#include "mobiclip_ctrl/MobiclipPlaybackStart.h"
#include "nn/Result.h"

extern "C" {
s32 refIsNullOrZero(MoviePathConversionState *);
s32 FUN_00100836(const char *, u32, MoviePathConversionState *);
u16 *FUN_002e3c44(u16 *, const char *, s32, MoviePathConversionState *);
u32 FUN_001883b0(u32 *, const u16 *, u32);
void sysFatalBreak(void);
void FUN_0042230c(void *, void *, void *);
u32 FUN_00422648(void *);
void FUN_00513d64(void *, u32, void *);
void FUN_00425ab0(MovieSync *, void *, void *, void *, void *, void *);
void FUN_00425aa0(MovieSync *);
extern MoviePlaybackBackend DAT_00588024;
extern u8 DAT_00617e58[0x18];
extern u8 DAT_00617e70[0xA8];
extern u8 DAT_00617f18[0x28];
extern MovieSync DAT_00617f40;
extern u8 DAT_006184a0[0x60];
extern u32 DAT_00618500;
extern MovieOpenFile DAT_00618504;

// Convert the movie filename, open its stream, and wait until playback is ready or stopped.
void FUN_00213bc8(const char *filename)
{
    {
        u16 path[0x105];
        MoviePathConversionState conversion = {0, 0};
        u16 *output = path;
        refIsNullOrZero(&conversion);
        s32 consumed;
        while ((consumed = FUN_00100836(filename, 0x105, &conversion)) != 0 &&
               FUN_002e3c44(output, filename, consumed, &conversion) != NULL) {
            ++output;
            filename += consumed;
        }
        *output = 0;
        MovieOpenFile *file = &DAT_00618504;
        file->sizeLow = 0;
        file->sizeHigh = 0;
        file->positionLow = 0;
        file->positionHigh = 0;
        if (nnResultIsFailure(FUN_001883b0(&file->handle, path, 1)))
            sysFatalBreak();
    }
    FUN_0042230c(DAT_006184a0, &DAT_00618500, DAT_00617e58);
    u32 streamId = FUN_00422648(DAT_006184a0);
    FUN_00513d64(&DAT_00588024, streamId, DAT_006184a0);
    FUN_00425ab0(&DAT_00617f40, DAT_00617e58, DAT_00588024.reader,
                 DAT_00588024.player, DAT_00617e70, DAT_00617f18);
    do {
        FUN_00425aa0(&DAT_00617f40);
    } while (DAT_00617f40.state != 7 && DAT_00617f40.state != 1);
}
}
