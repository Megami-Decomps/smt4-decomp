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
    const WaveArchiveIndex *waveIndex = reader->index;
    u32 offset = waveIndex->entries[index].offset;
    const WaveArchiveFileBlock* block =
        nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlock(reader->fileHeader);
    const u8* body = block->data;
    return body + offset;
}

} /* extern "C" */
