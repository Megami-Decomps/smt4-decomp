/* NON_MATCHING: aligned scratch frame, count/register lifetimes, heap-bound branch lowering and marker-store addressing differ. */
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
u32 FUN_002ac780(void *archive);
s32 soundArchiveReadWaveArchiveInfo(void *archive, u32 id, WaveArchiveLoadInfo *info);
u32 FUN_002a78c0(SoundArchiveLoader *loader, u32 fileId, void *buffer, u32 size, u32 offset, u32 flags);
u32 nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(const void *header);
u32 nw_snd_internal_WaveArchiveFile_FileHeader_GetInfoBlockOffset(const void *header);
u32 nnosGetHeapBase(void);
u32 FUN_002c3984(void);
void FUN_002a7ac4(WaveArchiveReader *reader, void *file, u32 individual);
void FUN_00150f34(WaveArchiveReader *reader);
extern const u32 DAT_004148c4;

// Load the archive header/info and reserve a wave-pointer table instead of copying all wave data.
void *FUN_00150d2c(SoundArchiveLoader *loader, u32 archiveId, WaveArchiveAllocator *allocator, u32 flags)
{
    u32 fileId = FUN_002ac780(loader->archive);
    void *loaded = loader->vtbl->files.getFile(loader, fileId);
    if (loaded)
        return loaded;
    WaveArchiveLoadInfo info;
    info.fileId = 0xFFFFFFFF;
    info.loadIndividual = 0;
    if (!soundArchiveReadWaveArchiveInfo(loader->archive, archiveId, &info))
        return 0;
    u32 waveCount = info.waveCount;
    if (!waveCount)
        return 0;
    // The archive reader requires a 32-byte-aligned temporary header.
    u8 storage[0x2C + 31];
    void *header = (void *)(((u32)storage + 31) & ~31u);
    if (FUN_002a78c0(loader, fileId, header, 0x2C, 0, flags) != 0x2C)
        return 0;
    u32 fileOffset = nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(header);
    u32 infoOffset = nw_snd_internal_WaveArchiveFile_FileHeader_GetInfoBlockOffset(header);
    if (infoOffset > fileOffset)
        return 0;
    u32 size = fileOffset + waveCount * 4 + 4;
    u8 *data = (u8 *)allocator->allocate(size);
    u32 heapBase = nnosGetHeapBase();
    u32 heapSize = FUN_002c3984();
    if ((u32)data < heapBase || (u32)data + size > heapBase + heapSize)
        return 0;
    if (FUN_002a78c0(loader, fileId, data, fileOffset, 0, flags) != fileOffset)
        return 0;
    *(u32 *)(data + fileOffset) = DAT_004148c4;
    WaveArchiveReader reader;
    FUN_002a7ac4(&reader, data, 1);
    FUN_00150f34(&reader);
    loader->vtbl->files.registerFile(loader, fileId, data);
    return data;
}
}
