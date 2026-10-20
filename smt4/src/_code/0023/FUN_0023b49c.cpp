#include "common.h"

extern "C" {

typedef struct TexLoader {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 handle;
} TexLoader;

extern s32 FUN_0023e3ec(s32 table, u32 entry);
extern s32 asdTMTexTableLoadEntryAsync(s32 table, u32 entry);
extern s32 asdTMTexTableLoadEntryAsyncB(s32 table, u32 entry);

/* Starts loading entry `entry` of texture table 0x16 by the first matching mode in `flags` (8, 0x40, 1) and keeps the handle. */
void FUN_0023b49c(TexLoader *loader, u32 flags, u32 entry)
{
    if ((flags & 8) != 0) {
        loader->handle = FUN_0023e3ec(0x16, entry);
    } else if ((flags & 0x40) != 0) {
        loader->handle = asdTMTexTableLoadEntryAsyncB(0x16, entry);
    } else if ((flags & 1) != 0) {
        loader->handle = asdTMTexTableLoadEntryAsync(0x16, entry);
    }
}

} /* extern "C" */
