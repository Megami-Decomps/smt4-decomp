#include "common.h"

extern "C" {

void FUN_001a6d00(u8 *buffer, s32 entry, s32 data);
void FUN_001ab914(s32 entry);
void FUN_001ad150(void);
void FUN_001ad15c(s32 entry, u32 arg);
void sysMemClear(u8 *block, s32 size);
s32 FUN_001861c4(u32 a, u32 b);
s32 FUN_001b2bd8(u32 a, s32 b, u32 c, u8 *buffer);
s32 FUN_001b3214(u32 a);

/* Builds and registers an entry: looks up the id for `b`, fills a 128-byte scratch buffer from it, creates the entry for (b, c), initialises it and returns it; returns 0 when any step fails. */
s32 FUN_00191e00(u32 a, u32 b, u32 c, u32 d)
{
    s32 id;
    s32 entry;
    u8 buffer[128];

    id = FUN_001b3214(b);
    if (id != -1) {
        sysMemClear(buffer, 0x80);
        id = FUN_001b2bd8(a, id, c, buffer);
        if ((id != 0) && (entry = FUN_001861c4(b, c), entry != 0)) {
            FUN_001ad150();
            FUN_001a6d00(buffer, entry, id);
            FUN_001ad15c(entry, d);
            FUN_001ab914(entry);
            return entry;
        }
    }
    return 0;
}

} /* extern "C" */
