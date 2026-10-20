/* NON_MATCHING: retail's string-block size call and heap allocation are laid out differently. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
extern void *DAT_004e23e0; /* the string block, DAT_004e23e0 */

s32 FUN_002bf684(void *archive);
u32 nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockSize(void *header);
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void FUN_00121774(void *archive, void *buffer, u32 size);

/* The archive's string block, loaded into the extra heap the first time it is asked for. */
void *asdSoundGetStringBlock(void)
{
    u32 size;

    if (FUN_002bf684(g_asdSound.archive) != 0) {
        size = nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockSize(g_asdSound.archiveFile);
        DAT_004e23e0 = asdMemoryAlloc(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, size, 1);
        FUN_00121774(g_asdSound.archive, DAT_004e23e0, size);
    }
    return DAT_004e23e0;
}

} /* extern "C" */
