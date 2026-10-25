#include "shard/S2SoundLoader.h"

extern "C" {
extern SoundLoader DAT_0063e4a0;
s32 FUN_001787a8(SoundLoader *loader, u32 item, u32 flags);

/* Loads an archive item with all load flags enabled. */
s32 FUN_003418c0(u32 item)
{
    bool loaded = false;
    if (FUN_001787a8(&DAT_0063e4a0, item, 0xffffffff) != 0) {
        loaded = true;
    }
    return loaded;
}
}
