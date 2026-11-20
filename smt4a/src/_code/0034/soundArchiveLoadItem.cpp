#include "shard/S2SoundLoader.h"

extern "C" {
extern SoundLoader g_soundArchiveLoader;
s32 soundArchiveLoaderIsItemLoaded(SoundLoader *loader, u32 item, u32 flags);

/* Loads an archive item with all load flags enabled. */
s32 soundArchiveLoadItem(u32 item)
{
    bool loaded = false;
    if (soundArchiveLoaderIsItemLoaded(&g_soundArchiveLoader, item, 0xffffffff) != 0) {
        loaded = true;
    }
    return loaded;
}
}
