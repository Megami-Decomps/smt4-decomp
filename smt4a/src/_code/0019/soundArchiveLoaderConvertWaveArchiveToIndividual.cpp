#include "shard/S3SoundArchiveLoader.h"
#include "shard/W6_W6Match3_WaveArchiveReader.h"
#include "sound/WaveArchiveConvert.h"
#include "AsdSDK/AsdMemCopy.h"

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
s32 soundArchiveReadWaveArchiveInfoWithExtension(void *archive, u32 id, WaveArchiveLoadInfo *info);
void FUN_001a5e84(WaveArchiveReader *reader, const void *file, u32 individual);
bool asdWaveArchiveHasExpectedBlock(const WaveArchiveReader *);
u32 nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(const void *);
void FUN_001b1e88(WaveArchiveReader *reader);
void slotTableReplace(WaveArchiveReader *, u32, const u8 *);

// Convert an embedded archive into an archive whose wave entries are individual file pointers (IV's FUN_002ac4a0).
void soundArchiveLoaderConvertWaveArchiveToIndividual(SoundArchiveLoaderA *loader, u32 archiveId, WaveArchiveBufferAllocator *allocator)
{
    WaveArchiveLoadInfo info;
    info.fileId = 0xFFFFFFFF;
    info.loadIndividual = 0;
    if (!soundArchiveReadWaveArchiveInfoWithExtension(loader->archive, archiveId, &info) || !info.loadIndividual)
        return;

    const void *file = loader->vtbl->getFile(loader, info.fileId);
    WaveArchiveReader source;
    FUN_001a5e84(&source, file, 0);
    if (asdWaveArchiveHasExpectedBlock(&source))
        return;

    u32 headerBytes = nw_snd_internal_WaveArchiveFile_FileHeader_GetFileBlockOffset(file);
    u32 convertedBytes = headerBytes + info.waveCount * 4 + 4;
    u8 *converted = static_cast<u8 *>(allocator->allocate(convertedBytes));
    if (converted == NULL)
        return;

    __aeabi_memcpy(converted, file, headerBytes);
    waveArchiveWriteFileSignature(converted, headerBytes);
    WaveArchiveReader destination;
    FUN_001a5e84(&destination, converted, 1);
    FUN_001b1e88(&destination);
    for (u32 i = 0; i < info.waveCount; ++i)
        slotTableReplace(&destination, i, FUN_001a8d40(&source, i));
    loader->vtbl->registerFile(loader, info.fileId, converted);
}
}
