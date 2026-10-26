#include "common.h"

extern "C" {

typedef struct SoundArchiveStream {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u8 file[0x18];
    /* 0x24 */ s32 result;
    /* 0x28 */ u8 unk28[4];
} SoundArchiveStream;

/* A sound archive read from a file: its stream and the archive file reader. */
typedef struct FsSoundArchiveLoader {
    /* 0x000 */ u8 unk000[0x100];
    /* 0x100 */ SoundArchiveStream stream;
    /* 0x12C */ u8 reader[0x44];
    /* 0x170 */ s32 lastResult;
} FsSoundArchiveLoader;

u32 nw_snd_internal_SoundArchiveFile_FileHeader_GetInfoBlockOffset(void *reader);
u32 nw_snd_internal_SoundArchiveFile_FileHeader_GetInfoBlockSize(void *reader);
s32 FUN_0013041c(void *stream, u32 offset, s32 origin);
s32 FUN_002b4e00(void *stream, void *buffer, u32 size, u32 *readSize);
void FUN_00130ea8(void *reader, void *infoBlock);

/* Read the archive's info block into buffer and hand it to the reader. */
s32 soundArchiveLoadInfoBlock(FsSoundArchiveLoader *loader, void *buffer, u32 bufferSize)
{
    u32 offset = nw_snd_internal_SoundArchiveFile_FileHeader_GetInfoBlockOffset(loader->reader);
    u32 size = nw_snd_internal_SoundArchiveFile_FileHeader_GetInfoBlockSize(loader->reader);
    u32 readSize;

    if (size > bufferSize) {
        return 0;
    }
    s32 seekSucceeded = FUN_0013041c(loader->stream.file, offset, 0);
    SoundArchiveStream *stream = &loader->stream;
    if (!seekSucceeded) {
        loader->lastResult = stream->result;
        return 0;
    }
    readSize = 0;
    if (!FUN_002b4e00(loader->stream.file, buffer, size, &readSize)) {
        loader->lastResult = stream->result;
        return 0;
    }
    if (readSize != size) {
        return 0;
    }
    FUN_00130ea8(loader->reader, buffer);
    return 1;
}

} /* extern "C" */
