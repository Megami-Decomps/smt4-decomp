/* NON_MATCHING: boolean result stays in r0 instead of retail's preserved r4 accumulator. */
#include "shard/S3SoundArchiveLoader.h"

extern "C" {
extern SoundArchiveLoader DAT_004e21b8;
s32 FUN_00132da4(SoundArchiveLoader *loader, u32 item, u32 flags);

/* Loads an archive item with all load flags enabled. */
s32 FUN_002d602c(u32 item)
{
    return FUN_00132da4(&DAT_004e21b8, item, 0xffffffff) != 0;
}
}
