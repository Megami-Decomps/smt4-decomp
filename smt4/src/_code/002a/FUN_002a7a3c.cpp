/* NON_MATCHING: sized-reference addressing materializes an extra constant 8 instead of retail's immediate-offset load, and the final FILE-body/offset additions are reversed. */
#include "shard/W6_W6Match3_WaveArchiveReader.h"

extern "C" {
const WaveArchiveFileBlock* nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlock(const void* header);

const u8* FUN_002a7a3c(const WaveArchiveReader* reader, u32 index)
{
    if (reader->initialized == 0) {
        return NULL;
    }
    if (index >= reader->index->count) {
        return NULL;
    }
    if (reader->waveFiles != NULL) {
        return reader->waveFiles[index];
    }
    u32 offset = reader->index->entries[index].offset;
    const WaveArchiveFileBlock* block =
        nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlock(reader->fileHeader);
    return block->data + offset;
}

} /* extern "C" */
