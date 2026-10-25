#include "common.h"
#include "shard/FUN_0032530c.h"
extern "C" {
struct Entry {
    u8 active;
    u8 pad[0x53];
};
extern struct {
    u8 pad[0x5C];
    Entry entries[16];
} *g_mapHakai;
u32 FUN_0032530c() {
    Entry *entries = g_mapHakai->entries;
    u32 count = 0;
    for (u32 index = 0; index < 16; ++index) if (entries[index].active) ++count;
    return count;
}
}
