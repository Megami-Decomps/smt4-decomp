#include "shard/S2SoundLoader.h"

extern "C" {
extern SoundLoader DAT_0063e4a0;
s32 soundArchiveLoaderIsItemLoaded(SoundLoader *loader, u32 item, u32 flags);

/* Loads an archive item with all load flags enabled. */
s32 soundArchiveLoadItem(u32 item)
{
    bool loaded = false;
    if (soundArchiveLoaderIsItemLoaded(&DAT_0063e4a0, item, 0xffffffff) != 0) {
        loaded = true;
    }
    return loaded;
}
}
