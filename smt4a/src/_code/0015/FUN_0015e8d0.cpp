/* NON_MATCHING: the stream base (loader + 0x100) is computed before the size check branch instead of after the seek. */
#include "common.h"

extern "C" {

typedef struct SoundArchiveStream {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u8 file[0x18];
    /* 0x34 */ s32 result;
    /* 0x38 */ u8 unk38[4];
} SoundArchiveStream;

typedef struct SoundArchiveLoader {
    /* 0x000 */ u8 unk000[0x100];
    /* 0x100 */ SoundArchiveStream stream;
    /* 0x13C */ u8 header[0x44];
    /* 0x180 */ s32 lastResult;
} SoundArchiveLoader;

u32 FUN_00178540(void *header);
u32 nw_snd_internal_SoundArchiveFile_FileHeader_GetInfoBlockSize(void *header);
bool FUN_00174a64(void *file, u32 offset, s32 origin);
bool FUN_00174a00(void *file, void *buffer, u32 size, u32 *readSize);
void FUN_001757b8(void *header, void *infoBlock);

/* Reads the sound archive's info block into the buffer and attaches it to the header. */
bool FUN_0015e8d0(SoundArchiveLoader *loader, void *buffer, u32 bufferSize)
{
    u32 offset = FUN_00178540(loader->header);
    u32 size = nw_snd_internal_SoundArchiveFile_FileHeader_GetInfoBlockSize(loader->header);
    SoundArchiveStream *stream = &loader->stream;
    u32 readSize;

    if (size > bufferSize) {
        return false;
    }
    if (!FUN_00174a64(loader->stream.file, offset, 0)) {
        loader->lastResult = stream->result;
        return false;
    }
    readSize = 0;
    if (!FUN_00174a00(loader->stream.file, buffer, size, &readSize)) {
        loader->lastResult = stream->result;
        return false;
    }
    if (readSize != size) {
        return false;
    }
    FUN_001757b8(loader->header, buffer);
    return true;
}

} /* extern "C" */
