#include "common.h"

extern "C" {

typedef struct SoundArchiveFileAccess {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u8 stream[0x18];
    /* 0x34 */ u32 position;
} SoundArchiveFileAccess;

typedef struct SoundArchiveReader {
    /* 0x000 */ u8 unk000[0x100];
    /* 0x100 */ SoundArchiveFileAccess file;
    /* 0x138 */ u8 unk138[4];
    /* 0x13C */ u8 header[0x44];
    /* 0x180 */ u32 position;
} SoundArchiveReader;

s32 nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockOffset(void *header);
u32 nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockSize(void *header);
u32 FUN_00174a64(void *stream, s32 offset, s32 origin);
u32 FUN_00174a00(void *stream, u32 destination, u32 size, u32 *bytesRead);
void FUN_001757c4(void *header, u32 destination);

/* Reads the archive's string block into `destination` (at most `capacity` bytes) and parses it. */
u32 soundArchiveLoadStringBlock(SoundArchiveReader *reader, u32 destination, u32 capacity)
{
    s32 offset = nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockOffset(reader->header);
    u32 size = nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockSize(reader->header);
    u32 readSize;

    if (offset == -1 || size > capacity) {
        return 0;
    }
    s32 seekSucceeded = FUN_00174a64(reader->file.stream, offset, 0);
    SoundArchiveFileAccess *file = &reader->file;
    if (!seekSucceeded) {
        reader->position = file->position;
        return 0;
    }
    readSize = 0;
    if (!FUN_00174a00(reader->file.stream, destination, size, &readSize)) {
        reader->position = file->position;
        return 0;
    }
    if (readSize != size) {
        return 0;
    }
    FUN_001757c4(reader->header, destination);
    return 1;
}

} /* extern "C" */
