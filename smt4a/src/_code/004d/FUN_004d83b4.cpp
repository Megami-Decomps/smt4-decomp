/* NON_MATCHING: loader/source saved registers are swapped and state-store/null-check scheduling differs. */
#include "battle/BattleEventAssets.h"

extern "C" {
extern void *g_aocSystem;
extern const char DAT_005285a0[];
extern const char DAT_00528588[];
void sysMemClear(void *buffer, u32 size);
s32 textFormatBuffer(char *buffer, const char *format, ...);
u32 FUN_0046c4b4(void *system, u32 archiveId);
void aocQueueType20(void *system, u32 archiveId, void **output, const char *path);
void aocQueueType1f(void *system, u32 archiveId, void **output, const char *path);
void asdLoadFileAsyncSimple(const char *path, void **output, u32 flags);
void FUN_004d7e20(BattleEventAssetLoadState *, const BattleEventAssetSourceA *);

// Load event images and font from add-on storage when available, then initialize the event.
void FUN_004d83b4(BattleEventAssetLoadState *loader, const BattleEventAssetSourceA *source)
{
    char imagePath[128];
    char fontPath[128];
    sysMemClear(imagePath, sizeof(imagePath));
    textFormatBuffer(imagePath, DAT_005285a0, source->name, source->name);
    if (FUN_0046c4b4(g_aocSystem, source->archiveId))
        aocQueueType20(g_aocSystem, source->archiveId, &loader->images, imagePath);
    else
        asdLoadFileAsyncSimple(imagePath, &loader->images, 0);
    loader->state = 4;
    if (loader->images) {
        loader->state = 5;
        sysMemClear(fontPath, sizeof(fontPath));
        textFormatBuffer(fontPath, DAT_00528588, source->name, source->name);
        if (FUN_0046c4b4(g_aocSystem, source->archiveId))
            aocQueueType1f(g_aocSystem, source->archiveId, &loader->font, fontPath);
        else
            asdLoadFileAsyncSimple(fontPath, &loader->font, 0);
        loader->state = 6;
        if (loader->font) {
            loader->state = 7;
            FUN_004d7e20(loader, source);
        }
    }
}
}
