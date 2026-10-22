/* NON_MATCHING: retail addresses unk124 through a hoisted `this + 0x100` base (r5), shifting the register allocation of size/infoSize. */
#include "common.h"

/* A sound archive read from a file: its stream and the archive file reader. */
struct FsSoundArchiveLoader {
    /* 0x000 */ u8 unk000[0x10c];
    /* 0x10C */ u8 stream[0x18];
    /* 0x124 */ u32 unk124;
    /* 0x128 */ u8 unk128[4];
    /* 0x12C */ u8 reader[0x44];
    /* 0x170 */ u32 unk170; /* reset from unk124 when the stream fails */
};

extern "C" {

u32 nw_snd_internal_SoundArchiveFile_FileHeader_GetInfoBlockOffset(void *reader);
u32 nw_snd_internal_SoundArchiveFile_FileHeader_GetInfoBlockSize(void *reader);
s32 FUN_0013041c(void *stream, u32 offset, s32 origin);
s32 FUN_002b4e00(void *stream, void *buffer, u32 size, u32 *readSize);
void FUN_00130ea8(void *reader, void *infoBlock);

/* Read the archive's info block into buffer and hand it to the reader. */
s32 FUN_001216cc(FsSoundArchiveLoader *archive, void *buffer, u32 size)
{
    u32 offset = nw_snd_internal_SoundArchiveFile_FileHeader_GetInfoBlockOffset(archive->reader);
    u32 infoSize = nw_snd_internal_SoundArchiveFile_FileHeader_GetInfoBlockSize(archive->reader);
    if (size < infoSize) {
        return 0;
    }
    if (!FUN_0013041c(archive->stream, offset, 0)) {
        archive->unk170 = archive->unk124;
        return 0;
    }
    u32 readSize = 0;
    if (!FUN_002b4e00(archive->stream, buffer, infoSize, &readSize)) {
        archive->unk170 = archive->unk124;
        return 0;
    }
    if (readSize != infoSize) {
        return 0;
    }
    FUN_00130ea8(archive->reader, buffer);
    return 1;
}

} /* extern "C" */
