#include "shard/S3SoundArchiveLoader.h"

extern "C" {
extern SoundArchiveLoader DAT_004e21b8;
s32 soundArchiveLoaderIsItemLoaded(SoundArchiveLoader *loader, u32 item, u32 flags);

/* Loads an archive item with all load flags enabled. */
s32 soundArchiveLoadItem(u32 item)
{
    bool result = false;
    if (soundArchiveLoaderIsItemLoaded(&DAT_004e21b8, item, 0xffffffff) != 0) {
        result = true;
    }
    return result;
}
}
