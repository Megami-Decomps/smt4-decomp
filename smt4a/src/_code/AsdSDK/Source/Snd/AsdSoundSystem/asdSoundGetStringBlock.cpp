#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern s32 nw_snd_SoundArchive_IsAvailable(void *reader);
extern u32 nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockSize(void *fileHeader);
extern void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
extern void soundArchiveLoadStringBlock(void *reader, void *stringBlock, u32 size);

/* Returns the archive's string block, loading it into the main heap on first use. */
void *asdSoundGetStringBlock(void)
{
    AsdSoundSystemA *archive = &g_asdSoundSystem;
    s32 available = nw_snd_SoundArchive_IsAvailable(archive->archive);
    void **stringBlock = &archive->stringBlock;
    if (!available)
        return archive->stringBlock;
    u32 size = nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockSize(archive->archiveFile);

    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Snd\\AsdSoundSystem.cpp", 1103);
    archive->stringBlock = asdMemoryAlloc(0x10000, 0x100, 0, size, 1);
    soundArchiveLoadStringBlock(archive->archive, archive->stringBlock, size);
    return *stringBlock;
}

} /* extern "C" */
