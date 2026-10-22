#ifndef GAMEDATA_TABLE_ENTRY_CACHE_H
#define GAMEDATA_TABLE_ENTRY_CACHE_H
#include "shard/W5_W5Match2_PlainData.h"
struct EntryState {
    s32 first; // 0x00
    s32 second; // 0x04
    s32 third; // 0x08
    u8 active; // 0x0C
    u8 requested; // 0x0D
    u8 unk0E[2]; // 0x0E
};
struct TableEntryCache {
    ReadyResource source; // 0x00
    EntryState* states; // 0x4C
};
extern "C" void entryStateClear(EntryState*);
#endif
