#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdDebug.h"
#include "code/Code002b.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
extern void *DAT_004e23e0; /* g_asdSound.stringBlock, as the allocation path reads it back */

u32 nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockSize(void *header);
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void soundArchiveLoadStringBlock(void *archive, void *buffer, u32 size);

/* The archive's string block, loaded into the extra heap the first time it is asked for. */
void *asdSoundGetStringBlock(void)
{
    AsdSoundSystem *sound = &g_asdSound;
    s32 available = FUN_002bf684(sound->archive);
    void **stringBlock = &DAT_004e23e0;
    if (!available) {
        return sound->stringBlock;
    }
    u32 size = nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockSize(sound->archiveFile);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Snd\\AsdSoundSystem.cpp", 1003);
    sound->stringBlock = asdMemoryAlloc(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, size, 1);
    soundArchiveLoadStringBlock(sound->archive, sound->stringBlock, size);
    return *stringBlock;
}

} /* extern "C" */
