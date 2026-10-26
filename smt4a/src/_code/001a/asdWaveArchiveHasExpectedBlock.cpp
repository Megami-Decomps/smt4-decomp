#include "common.h"

struct WaveArchiveView {
    /* 0x00 */ const u8 *file;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u8 enabled;
};

extern "C" {

extern u32 nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(const void *file);

/* Validates the wave-archive block signature after resolving its block offset. */
bool asdWaveArchiveHasExpectedBlock(const WaveArchiveView *archive)
{
    if (archive->enabled == 0) {
        return false;
    }
    const u8 *file = archive->file;
    u32 offset = nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(file);
    const u32 *signature = (const u32 *)(file + offset);
    return *signature == 0x54415743;
}

} /* extern "C" */
