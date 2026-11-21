/* NON_MATCHING: 53 lines: retail's frame is 140 bytes with the header scratch at sp+16 (104 bytes) below the reader at sp+120, where this build puts the reader first; the heap-bound test is one predicated compare chain in retail, and the wave count, allocator and size get other registers. */
#include "shard/S3SoundArchiveLoader.h"
#include "shard/W6_W6Match3_WaveArchiveReader.h"

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
s32 FUN_001a8930(void *archive, u32 id, WaveArchiveLoadInfo *info);
u32 FUN_001b1c40(SoundArchiveLoaderA *loader, u32 fileId, void *buffer, u32 size, u32 offset, u32 flags);
u32 nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(const void *header);
u32 nw_snd_internal_WaveArchiveFile_FileHeader_GetInfoBlockOffset(const void *header);
u32 nnosGetHeapBase(void);
u32 nnosGetHeapSize(void);
void FUN_001a5e84(WaveArchiveReader *reader, void *file, u32 individual);
void FUN_001b1e88(WaveArchiveReader *reader);
extern const u32 DAT_0054baf4;

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
        if (!FUN_001a8930(loader->archive, archiveId, &info))
            return 0;
        if (!info.waveCount)
            return 0;
        waveCount = info.waveCount;
    }
    u32 fileOffset;
    {
        /* The archive reader requires a 32-byte-aligned temporary header. */
        u8 storage[0x2C + 32];
        void *header = (void *)(((u32)storage + 31) & ~31u);
        if (FUN_001b1c40(loader, fileId, header, 0x2C, 0, flags) != 0x2C)
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
    if ((u32)data < heapBase || (u32)data + size > heapBase + heapSize)
        return 0;
    if (FUN_001b1c40(loader, fileId, data, fileOffset, 0, flags) != fileOffset)
        return 0;
    *(u32 *)(data + fileOffset) = DAT_0054baf4;
    WaveArchiveReader reader;
    FUN_001a5e84(&reader, data, 1);
    FUN_001b1e88(&reader);
    loader->vtbl->registerFile(loader, fileId, data);
    return data;
}
}
