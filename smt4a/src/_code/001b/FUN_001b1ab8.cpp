/* NON_MATCHING: the header scratch offset and saved registers differ. Retail predicates its second heap bounds comparison. */
#include "shard/S3SoundArchiveLoader.h"
#include "shard/W6_W6Match3_WaveArchiveReader.h"
#include "sound/WaveArchiveConvert.h"

class WaveArchiveAllocator {
public:
    virtual ~WaveArchiveAllocator();
    virtual void *allocate(u32 size);
};
struct WaveArchiveLoadInfo {
    u32 fileId;
    u32 waveCount;
    u8 loadIndividual;
    u8 unk09[3];
};
typedef char WaveArchiveLoadInfoOffsets[
    offsetof(WaveArchiveLoadInfo, waveCount) == 4 &&
    offsetof(WaveArchiveLoadInfo, loadIndividual) == 8 && sizeof(WaveArchiveLoadInfo) == 12 ? 1 : -1];

extern "C" {
u32 soundArchiveFileEntryIsLoaded(void *archive);
s32 soundArchiveReadWaveArchiveInfoWithExtension(void *archive, u32 id, WaveArchiveLoadInfo *info);
u32 FUN_001b1c40(SoundArchiveLoaderA *loader, u32 fileId, void *buffer, u32 size, u32 offset, u32 flags);
u32 nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(const void *header);
u32 nw_snd_internal_WaveArchiveFile_FileHeader_GetInfoBlockOffset(const void *header);
u32 nnosGetHeapBase(void);
u32 nnosGetHeapSize(void);
void FUN_001a5e84(WaveArchiveReader *reader, void *file, u32 individual);
void FUN_001b1e88(WaveArchiveReader *reader);

// Load the archive header/info and reserve a wave-pointer table instead of copying all wave data.
void *FUN_001b1ab8(SoundArchiveLoaderA *loader, u32 archiveId, WaveArchiveAllocator *allocator, u32 flags)
{
    u32 fileId = soundArchiveFileEntryIsLoaded(loader->archive);
    void *loaded = loader->vtbl->getFile(loader, fileId);
    if (loaded)
        return loaded;
    u32 waveCount;
    {
        WaveArchiveLoadInfo info;
        info.fileId = 0xFFFFFFFF;
        info.loadIndividual = 0;
        if (!soundArchiveReadWaveArchiveInfoWithExtension(loader->archive, archiveId, &info))
            return 0;
        if (!info.waveCount)
            return 0;
        waveCount = info.waveCount;
    }
    u32 fileOffset;
    {
        /* The read rounds up to a full transfer block, even though it returns the requested byte count. */
        u8 storage[WAVE_ARCHIVE_HEADER_SCRATCH_BYTES];
        void *header = (void *)(((u32)storage + WAVE_ARCHIVE_READ_ALIGNMENT - 1) & ~(WAVE_ARCHIVE_READ_ALIGNMENT - 1));
        if (FUN_001b1c40(loader, fileId, header, WAVE_ARCHIVE_HEADER_BYTES, 0, flags) != WAVE_ARCHIVE_HEADER_BYTES)
            return 0;
        fileOffset = nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(header);
        u32 infoOffset = nw_snd_internal_WaveArchiveFile_FileHeader_GetInfoBlockOffset(header);
        if (infoOffset > fileOffset)
            return 0;
    }
    u32 size = fileOffset + waveCount * 4 + 4;
    u8 *data = (u8 *)allocator->allocate(size);
    u32 heapBase = nnosGetHeapBase();
    u32 heapSize = nnosGetHeapSize();
    u32 dataEnd = (u32)data + size;
    if ((u32)data < heapBase || dataEnd > heapBase + heapSize)
        return 0;
    if (FUN_001b1c40(loader, fileId, data, fileOffset, 0, flags) != fileOffset)
        return 0;
    waveArchiveWriteFileSignature(data, fileOffset);
    WaveArchiveReader reader;
    FUN_001a5e84(&reader, data, 1);
    FUN_001b1e88(&reader);
    loader->vtbl->registerFile(loader, fileId, data);
    return data;
}
}
