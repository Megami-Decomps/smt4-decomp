/* NON_MATCHING: retail addresses the stream from the reader (r4+0x10c) and only the saved position through the 0x100 sub-block, computed after the seek; registers shift by one. */
#include "common.h"

extern "C" {

typedef struct SoundArchiveFileAccess {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u8 stream[0x18];
    /* 0x24 */ u32 position;
} SoundArchiveFileAccess;

typedef struct SoundArchiveReader {
    /* 0x000 */ u8 unk000[0x100];
    /* 0x100 */ SoundArchiveFileAccess file;
    /* 0x128 */ u8 unk128[4];
    /* 0x12C */ u8 header[0x44];
    /* 0x170 */ u32 position;
} SoundArchiveReader;

s32 nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockOffset(void *header);
u32 nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockSize(void *header);
s32 FUN_0013041c(void *stream, s32 offset, s32 origin);
s32 FUN_002b4e00(void *stream, void *buffer, u32 size, u32 *readSize);
void FUN_00130eb4(void *header, void *block);

/* Read the sound archive's string block into the buffer; returns 1 on success. */
s32 FUN_00121774(SoundArchiveReader *reader, void *buffer, u32 bufferSize)
{
    s32 offset = nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockOffset(reader->header);
    u32 size = nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockSize(reader->header);
    SoundArchiveFileAccess *file = &reader->file;
    u32 readSize;

    if (offset == -1 || size > bufferSize) {
        return 0;
    }
    if (!FUN_0013041c(file->stream, offset, 0)) {
        reader->position = file->position;
        return 0;
    }
    readSize = 0;
    if (!FUN_002b4e00(file->stream, buffer, size, &readSize)) {
        reader->position = file->position;
        return 0;
    }
    if (readSize != size) {
        return 0;
    }
    FUN_00130eb4(reader->header, buffer);
    return 1;
}

} /* extern "C" */
