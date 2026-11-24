/* NON_MATCHING: the result test (nnResultIsFailure) now matches; retail reaches the movie globals (0x617e58..0x618504, DAT_00588024) from shared literal bases with `sub rX, rY, #imm`, i.e. they were defined in the same file, while this unit addresses each global from its own literal. */
#include "mobiclip_ctrl/MobiclipPlaybackStart.h"
#include "AsdSDK/Source/Sys/File/AsdFilePath.h"
#include "nn/fs/ArchivePath.h"
#include "nn/Result.h"

extern "C" {
void sysFatalBreak(void);
void FUN_0042230c(void *stream, void *handle, void *reader);
u32 FUN_00422648(void *stream);
void FUN_00513d64(void *backend, u32 streamId, void *stream);
void FUN_00425ab0(MovieSync *sync, void *reader, void *backendReader,
                  void *backendPlayer, void *video, void *audio);
void mobiclipYieldPlaybackThread(MovieSync *sync);
extern MoviePlaybackBackend DAT_00588024;
extern u8 DAT_00617e58[0x18];
extern u8 DAT_00617e70[0xA8];
extern u8 DAT_00617f18[0x28];
extern MovieSync g_mobiclipPlayer;
extern u8 DAT_006184a0[0x60];
extern u32 DAT_00618500;
extern MovieOpenFile DAT_00618504;

/* Opens the converted movie path, starts its streams, and waits for a ready playback state. */
void FUN_003d2eec(const char *filename)
{
    {
        u16 path[264];
        AsdPathMbState conversion;
        u16 *output = path;
        refIsNullOrZero(&conversion.state);
        u32 consumed;
        while ((consumed = FUN_00100836(filename, 0x105, &conversion)) != 0 &&
               FUN_002e3c44(output, filename, consumed, &conversion) != 0) {
            ++output;
            filename += consumed;
        }
        *output = 0;
        MovieOpenFile *file = &DAT_00618504;
        file->sizeLow = 0;
        file->sizeHigh = 0;
        file->positionLow = 0;
        file->positionHigh = 0;
        if (nnResultIsFailure(archivePathDeviceOpen(&file->handle, path, 1))) {
            sysFatalBreak();
        }
    }
    FUN_0042230c(DAT_006184a0, &DAT_00618500, DAT_00617e58);
    u32 streamId = FUN_00422648(DAT_006184a0);
    FUN_00513d64(&DAT_00588024, streamId, DAT_006184a0);
    FUN_00425ab0(&g_mobiclipPlayer, DAT_00617e58,
        DAT_00588024.reader, DAT_00588024.player, DAT_00617e70, DAT_00617f18);
    do {
        mobiclipYieldPlaybackThread(&g_mobiclipPlayer);
    } while (g_mobiclipPlayer.state != 7 && g_mobiclipPlayer.state != 1);
}
}
