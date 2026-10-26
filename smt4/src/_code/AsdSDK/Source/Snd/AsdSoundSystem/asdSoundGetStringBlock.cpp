/* NON_MATCHING: only scheduling differs: retail loads the address of DAT_004e23e0 into r5 right after the archive test (and saves r3-r7), the build loads it at the return */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdDebug.h"
#include "util/FUN_002bf684.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
extern void *DAT_004e23e0; /* g_asdSound.stringBlock, as the allocation path reads it back */

u32 nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockSize(void *header);
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void FUN_00121774(void *archive, void *buffer, u32 size);

/* The archive's string block, loaded into the extra heap the first time it is asked for. */
void *asdSoundGetStringBlock(void)
{
    AsdSoundSystem *sound = &g_asdSound;
    u32 size;

    if (FUN_002bf684(sound->archive) != 0) {
        size = nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockSize(sound->archiveFile);
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Snd\\AsdSoundSystem.cpp", 1003);
        sound->stringBlock = asdMemoryAlloc(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, size, 1);
        FUN_00121774(sound->archive, sound->stringBlock, size);
        return DAT_004e23e0;
    }
    return sound->stringBlock;
}

} /* extern "C" */
