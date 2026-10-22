#ifndef SHARD_W8MATCH1_ENTRY_DISPATCH_H
#define SHARD_W8MATCH1_ENTRY_DISPATCH_H
#include "common.h"
struct DispatchEntry {
    u8 unk00[0x8C]; // 0x00
};
struct DispatchEntrySet {
    u8 unk00[0x20]; // 0x00
    DispatchEntry entries[13]; // 0x20
};
#endif
