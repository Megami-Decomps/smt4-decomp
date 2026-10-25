#include "common.h"
#include "shard/S3SoundArchiveLoader.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {

s32 FUN_002bf684(void);
s32 FUN_00141fd0(void *archive, u32 item);
s32 FUN_00141e48(SoundArchiveLoader *loader, u32 item, u32 flags);
s32 nw_snd_internal_SoundArchiveLoader_IsWaveSoundDataLoaded(SoundArchiveLoader *loader, u32 item, u32 flags);
s32 FUN_00132eb4(SoundArchiveLoader *loader, u32 item, u32 flags);
s32 FUN_00132bec(SoundArchiveLoader *loader, u32 item, u32 flags);
s32 FUN_002aa984(SoundArchiveLoader *loader, u32 item, u32 arg2);
u32 FUN_002ac780(void *archive, u32 item);

/* Loads the data of one archive item, dispatching on the item type. */
s32 FUN_00132da4(SoundArchiveLoader *loader, u32 item, u32 flags)
{
    if (loader->archive != NULL && FUN_002bf684() != 0 && item != SOUNDARCHIVE_ITEM_INVALID) {
        switch (SOUNDARCHIVE_ITEM_TYPE(item)) {
        case 1: {
            s32 kind = FUN_00141fd0(loader->archive, item);

            if (kind == 1) {
                return FUN_00141e48(loader, item, flags);
            }
            if (kind == 3) {
                return nw_snd_internal_SoundArchiveLoader_IsWaveSoundDataLoaded(loader, item, flags);
            }
            break;
        }
        case 3:
            return FUN_00132bec(loader, item, flags);
        case 5:
            return FUN_002aa984(loader, item, 0xFFFFFFFF);
        case 6:
            return loader->vtbl->loadItem(loader, FUN_002ac780(loader->archive, item)) != 0;
        case 2:
            return FUN_00132eb4(loader, item, flags);
        }
    }
    return 0;
}

} /* extern "C" */
