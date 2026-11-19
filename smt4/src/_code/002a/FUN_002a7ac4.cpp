/* NON_MATCHING: 25 lines; the s8 valid flag gives retail's re-test of the stored flag. Retail copies the info block
 * pointer before adding the body offset (mov; add), loads the CWAT signature before the block's first word and adds
 * the 4 to the offset before the file base; the rest is shifted branch targets. */
#include "common.h"

#define WAVE_ARCHIVE_SIGNATURE 0x52415743 /* "CWAR" */
#define WAVE_BLOCK_SIGNATURE 0x54415743   /* "CWAT" */

/* A reader over a wave archive file image. */
struct WaveArchiveFileReader {
    /* 0x00 */ const void *file;
    /* 0x04 */ const void *infoBlock;
    /* 0x08 */ const void *waveBlock;
    /* 0x0C */ s8 valid;

    bool IsAvailable() const { return valid != 0; }
};

extern "C" {

s32 nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(const void *file);
const u8 *nw_snd_internal_WaveArchiveFile_FileHeader_GetInfoBlock(const void *file);

// Opens a wave archive image (checked by signature and version); with `loadWaves` also locates
// its wave data block.
WaveArchiveFileReader *FUN_002a7ac4(WaveArchiveFileReader *reader, const u32 *file, s32 loadWaves)
{
    reader->file = NULL;
    reader->infoBlock = NULL;
    reader->waveBlock = NULL;
    reader->valid = 0;
    if (file != NULL && file[0] == WAVE_ARCHIVE_SIGNATURE && file[2] == 0x1000000) {
        reader->file = file;
        reader->infoBlock = nw_snd_internal_WaveArchiveFile_FileHeader_GetInfoBlock(file) + 8;
        reader->valid = 1;
        if (loadWaves != 0 && reader->IsAvailable()) {
            const u8 *header = (const u8 *)reader->file;
            s32 offset = nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(header);
            if (*(const u32 *)(header + offset) == WAVE_BLOCK_SIGNATURE) {
                reader->waveBlock = (const void *)(nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(reader->file) + 4 + (u32)file);
            }
        }
    }
    return reader;
}

}
