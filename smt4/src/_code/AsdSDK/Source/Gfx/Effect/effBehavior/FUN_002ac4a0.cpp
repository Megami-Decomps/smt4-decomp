/* NON_MATCHING: allocator vtable loads are scheduled early and the archive signature copy uses reversed operand registers. */
#include "shard/S3SoundArchiveLoader.h"
#include "shard/W6_W6Match3_WaveArchiveReader.h"
#include <string.h>

struct WaveArchiveLoadInfo {
    u32 fileId;
    u32 waveCount;
    u8 loadIndividual;
    u8 padding[3];
};

class WaveArchiveBufferAllocator {
public:
    virtual ~WaveArchiveBufferAllocator();
    virtual void *allocate(u32 bytes) = 0;
};

extern "C" {
s32 soundArchiveReadWaveArchiveInfo(void *, u32, WaveArchiveLoadInfo *);
void FUN_002a7ac4(WaveArchiveReader *, const void *, s32);
s32 asdWaveArchiveHasExpectedBlock(const WaveArchiveReader *);
u32 nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(const void *);
void *rt_memcpy(void *, const void *, u32);
void FUN_00150f34(WaveArchiveReader *);
void slotTableReplace(WaveArchiveReader *, u32, const u8 *);
extern const char DAT_004148c4[4];

// Convert an embedded archive into an archive whose wave entries are individual file pointers.
void FUN_002ac4a0(SoundArchiveLoader *loader, u32 archiveId, WaveArchiveBufferAllocator *allocator)
{
    WaveArchiveLoadInfo info;
    info.fileId = 0xFFFFFFFF;
    info.loadIndividual = 0;
    if (!soundArchiveReadWaveArchiveInfo(loader->archive, archiveId, &info) || !info.loadIndividual)
        return;

    const void *file = loader->vtbl->files.getFile(loader, info.fileId);
    WaveArchiveReader source;
    FUN_002a7ac4(&source, file, 0);
    if (asdWaveArchiveHasExpectedBlock(&source))
        return;

    u32 headerBytes = nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(file);
    u8 *converted = static_cast<u8 *>(allocator->allocate(headerBytes + info.waveCount * 4 + 4));
    if (converted == NULL)
        return;

    rt_memcpy(converted, file, headerBytes);
    memcpy(converted + headerBytes, DAT_004148c4, 4);
    WaveArchiveReader destination;
    FUN_002a7ac4(&destination, converted, 1);
    FUN_00150f34(&destination);
    for (u32 i = 0; i < info.waveCount; ++i)
        slotTableReplace(&destination, i, FUN_002a7a3c(&source, i));
    loader->vtbl->files.registerFile(loader, info.fileId, converted);
}
}
