/* NON_MATCHING: Saved-register set, global-address reuse, result-sign test, and backend argument setup differ. */
#include "mobiclip_ctrl/MobiclipPlaybackStart.h"

extern "C" {
s32 refIsNullOrZero(MoviePathConversionState *state);
s32 FUN_00100836(const char *text, u32 limit, MoviePathConversionState *state);
u16 *FUN_002e3c44(u16 *output, const char *text, s32 consumed, MoviePathConversionState *state);
u32 FUN_001883b0(u32 *handle, const u16 *path, u32 mode);
void sysFatalBreak(void);
void FUN_0042230c(void *stream, void *handle, void *reader);
u32 FUN_00422648(void *stream);
void FUN_00513d64(void *backend, u32 streamId, void *stream);
void FUN_00425ab0(MovieSync *sync, void *reader, void *backendReader,
                  void *backendPlayer, void *video, void *audio);
void FUN_00425aa0(MovieSync *sync);
extern MoviePlaybackBackend DAT_00588024;
extern u8 DAT_00617e58[0x18];
extern u8 DAT_00617e70[0xA8];
extern u8 DAT_00617f18[0x28];
extern MovieSync DAT_00617f40;
extern u8 DAT_006184a0[0x60];
extern u32 DAT_00618500;
extern MovieOpenFile DAT_00618504;

/* Opens the converted movie path, starts its streams, and waits for a ready playback state. */
void FUN_003d2eec(const char *filename)
{
    {
        u16 path[264];
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
        if (FUN_001883b0(&file->handle, path, 1) >> 31) {
            sysFatalBreak();
        }
    }
    FUN_0042230c(DAT_006184a0, &DAT_00618500, DAT_00617e58);
    u32 streamId = FUN_00422648(DAT_006184a0);
    FUN_00513d64(&DAT_00588024, streamId, DAT_006184a0);
    FUN_00425ab0(&DAT_00617f40, DAT_00617e58,
        DAT_00588024.reader, DAT_00588024.player, DAT_00617e70, DAT_00617f18);
    do {
        FUN_00425aa0(&DAT_00617f40);
    } while (DAT_00617f40.state != 7 && DAT_00617f40.state != 1);
}
}
