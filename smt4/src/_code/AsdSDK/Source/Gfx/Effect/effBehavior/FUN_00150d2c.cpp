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
s32 soundArchiveReadWaveArchiveInfo(void *archive, u32 id, WaveArchiveLoadInfo *info);
u32 soundArchiveLoaderReadFile(SoundArchiveLoader *loader, u32 fileId, void *buffer, u32 size, u32 offset, u32 flags);
u32 nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(const void *header);
u32 nw_snd_internal_WaveArchiveFile_FileHeader_GetInfoBlockOffset(const void *header);
u32 nnosGetHeapBase(void);
u32 nnosGetHeapSize(void);
void FUN_002a7ac4(WaveArchiveReader *reader, void *file, u32 individual);
void FUN_00150f34(WaveArchiveReader *reader);

// Load the archive header/info and reserve a wave-pointer table instead of copying all wave data.
void *FUN_00150d2c(SoundArchiveLoader *loader, u32 archiveId, WaveArchiveAllocator *allocator, u32 flags)
{
    u32 fileId = soundArchiveFileEntryIsLoaded(loader->archive);
    void *loaded = loader->vtbl->files.getFile(loader, fileId);
    if (loaded)
        return loaded;
    u32 waveCount;
    /* The load info's scope ends before the header read: retail reuses its slots at [sp] and
     * [sp, #4] for that call's stack arguments. */
    {
        WaveArchiveLoadInfo info;
        info.fileId = 0xFFFFFFFF;
        info.loadIndividual = 0;
        if (!soundArchiveReadWaveArchiveInfo(loader->archive, archiveId, &info))
            return 0;
        if (!info.waveCount)
            return 0;
        waveCount = info.waveCount;
    }
    /* The read rounds up to a full transfer block, even though it returns the requested byte count. */
    u8 storage[WAVE_ARCHIVE_HEADER_SCRATCH_BYTES];
    void *header = (void *)(((u32)storage + WAVE_ARCHIVE_READ_ALIGNMENT - 1) & ~(WAVE_ARCHIVE_READ_ALIGNMENT - 1));
    if (soundArchiveLoaderReadFile(loader, fileId, header, WAVE_ARCHIVE_HEADER_BYTES, 0, flags) != WAVE_ARCHIVE_HEADER_BYTES)
        return 0;
    u32 fileOffset = nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(header);
    u32 infoOffset = nw_snd_internal_WaveArchiveFile_FileHeader_GetInfoBlockOffset(header);
    if (infoOffset > fileOffset)
        return 0;
    u32 size = fileOffset + waveCount * 4 + 4;
    u8 *data = (u8 *)allocator->allocate(size);
    u32 heapBase = nnosGetHeapBase();
    u32 heapSize = nnosGetHeapSize();
    u32 dataEnd = (u32)data + size;
    if ((u32)data < heapBase || dataEnd > heapBase + heapSize)
        return 0;
    if (soundArchiveLoaderReadFile(loader, fileId, data, fileOffset, 0, flags) != fileOffset)
        return 0;
    waveArchiveWriteFileSignature(data, fileOffset);
    WaveArchiveReader reader;
    FUN_002a7ac4(&reader, data, 1);
    FUN_00150f34(&reader);
    loader->vtbl->files.registerFile(loader, fileId, data);
    return data;
}
}
