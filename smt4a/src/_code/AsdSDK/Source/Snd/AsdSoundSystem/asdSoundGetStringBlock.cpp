/* NON_MATCHING: retail reads the string block back through a pointer computed before the branch (the globals are one data block of this unit). */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

/* The sound system's archive state: the archive reader, its file header and the string block loaded from it. */
typedef struct AsdSoundArchive {
    u8 reader[0x13c];       /* 0x000 */
    u8 fileHeader[0x4a4 - 0x13c + 0x3c]; /* 0x13c */
    void *stringBlock;      /* 0x4e0 */
} AsdSoundArchive;

extern AsdSoundArchive g_asdSoundSystem;

extern s32 nw_snd_SoundArchive_IsAvailable(void *reader);
extern u32 nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockSize(void *fileHeader);
extern void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
extern void FUN_0015e978(void *reader, void *stringBlock, u32 size);

/* Returns the archive's string block, loading it into the main heap on first use. */
void *asdSoundGetStringBlock(void)
{
    AsdSoundArchive *archive = &g_asdSoundSystem;
    void **stringBlock = &archive->stringBlock;

    if (nw_snd_SoundArchive_IsAvailable(archive->reader)) {
        u32 size = nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockSize(archive->fileHeader);

        asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Snd\\AsdSoundSystem.cpp", 1103);
        *stringBlock = asdMemoryAlloc(0x10000, 0x100, 0, size, 1);
        FUN_0015e978(archive->reader, *stringBlock, size);
    }
    return *stringBlock;
}

} /* extern "C" */
