/* NON_MATCHING: saved-register assignment differs (retail: loadType r4, loader r5, flags fp, zero r9, one sl) and the per-case result moves/exit branches are shaped differently (retail 146 rows, built 142). */
#include "shard/S3SoundArchiveLoader.h"

/* The loader's recursion bookkeeping, past the vtable and archive pointer. */
struct SoundArchiveLoaderState {
    SoundArchiveLoader base;
    /* 0x008 */ u8 unk008[0x200];
    /* 0x208 */ u16 loadDepth; /* nested load calls in flight */
    /* 0x20A */ u8 cancelled;  /* set to refuse loads until the outermost call returns */
};

extern "C" {

s32 nw_snd_SoundArchive_IsAvailable(void);
s32 nw_snd_SoundArchive_GetSoundType(void *archive, u32 itemId);
u32 FUN_00195024(void *archive, u32 itemId);
u32 FUN_001a8e14(void *archive, u32 itemId);
void *nw_snd_internal_SoundArchiveLoader_LoadImpl(SoundArchiveLoaderState *loader, u32 file, void *heap, u32 loadType, s32 isGroup);
s32 nw_snd_internal_SoundArchiveLoader_LoadSequenceSound(SoundArchiveLoaderState *loader, u32 itemId, void *heap, u32 flags, u32 loadType);
s32 nw_snd_internal_SoundArchiveLoader_LoadSoundGroup(SoundArchiveLoaderState *loader, u32 itemId, void *heap, u32 flags, u32 loadType);
s32 nw_snd_internal_SoundArchiveLoader_LoadWaveSound(SoundArchiveLoaderState *loader, u32 itemId, void *heap, u32 flags, u32 loadType, u32 index);
s32 FUN_00190c24(SoundArchiveLoaderState *loader, u32 itemId, void *heap, u32 flags, u32 loadType);
s32 FUN_00174ebc(SoundArchiveLoaderState *loader, void *data, void *heap, u32 loadType);

/* Loads the data the sound archive item needs, dispatching on the item type in the id's top byte.
 * Returns whether the item is loaded. */
s32 FUN_001753d4(SoundArchiveLoaderState *loader, u32 itemId, void *heap, u32 flags, u32 loadType)
{
    s32 result;

    if (loader->base.archive == NULL || nw_snd_SoundArchive_IsAvailable() == 0 ||
        itemId == SOUNDARCHIVE_ITEM_INVALID || heap == NULL) {
        return 0;
    }
    loader->loadDepth++;
    if (loader->cancelled != 0) {
        result = 0;
    } else {
        switch (SOUNDARCHIVE_ITEM_TYPE(itemId)) {
        case 1: {
            s32 soundType = nw_snd_SoundArchive_GetSoundType(loader->base.archive, itemId);

            if (soundType == 1) {
                result = nw_snd_internal_SoundArchiveLoader_LoadSequenceSound(loader, itemId, heap, flags, loadType);
            } else if (soundType == 2) {
                u32 file = FUN_00195024(loader->base.archive, itemId);

                if (nw_snd_internal_SoundArchiveLoader_LoadImpl(loader, file, heap, loadType, 0) != 0) {
                    result = 1;
                } else {
                    result = 0;
                }
            } else if (soundType == 3) {
                result = nw_snd_internal_SoundArchiveLoader_LoadWaveSound(loader, itemId, heap, flags, loadType, 0xFFFFFFFF);
            } else {
                result = 0;
            }
            break;
        }
        case 2:
            result = nw_snd_internal_SoundArchiveLoader_LoadSoundGroup(loader, itemId, heap, flags, loadType);
            break;
        case 3:
            result = FUN_00190c24(loader, itemId, heap, flags, loadType);
            break;
        case 5:
            if ((flags & SOUNDARCHIVE_LOAD_NOTEINFO) != 0) {
                u32 file = FUN_001a8e14(loader->base.archive, itemId);

                if (nw_snd_internal_SoundArchiveLoader_LoadImpl(loader, file, heap, loadType, 1) == 0) {
                    result = 0;
                    break;
                }
            }
            result = 1;
            break;
        case 6: {
            u32 file = FUN_001a8e14(loader->base.archive, itemId);
            void *data = nw_snd_internal_SoundArchiveLoader_LoadImpl(loader, file, heap, loadType, 1);

            if (data != NULL) {
                result = FUN_00174ebc(loader, data, heap, loadType);
            } else {
                result = 0;
            }
            break;
        }
        default:
            result = 0;
            break;
        }
    }
    loader->loadDepth--;
    if (loader->loadDepth == 0) {
        loader->cancelled = 0;
    }
    return result;
}

} /* extern "C" */
