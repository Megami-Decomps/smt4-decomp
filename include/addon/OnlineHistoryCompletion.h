#ifndef ADDON_ONLINEHISTORYCOMPLETION_H
#define ADDON_ONLINEHISTORYCOMPLETION_H
#include "common.h"
#include <stddef.h>

struct OnlineHistoryTimestamp { u32 low; u32 high; };
struct OnlineHistoryQueueItem { u32 handle; };
struct OnlineHistoryLinkedNode { u32 unk00; u32 value; };
struct OnlineHistoryEntry {
    u8 unk00[0x3C];
    u16 flags;
    u8 unk3E[0xDA];
    OnlineHistoryLinkedNode *node;
    u32 unk11C;
    u16 attempts;
};
struct OnlineHistoryCore {
    u8 unk00[0x14];
    u8 pendingQueue[1];
};
struct OnlineHistoryOptions { u8 unk00[0x70]; u8 timestampsEnabled; };
struct OnlineHistoryCompletionState {
    u32 unk00;
    OnlineHistoryCore *core;
    u8 unk08[0x86];
    u16 channel;
    u8 unk90[0xC];
    u8 queue[0x3C];
    OnlineHistoryTimestamp timestamp;
    u8 unkE0[0x24];
    u16 entryCount;
    u8 unk106[0x11A];
    u8 result[0x8C];
    s32 rejected;
    u8 unk2B0[0x5C];
    s32 failed;
    s32 repeated;
    s32 accumulated;
    u32 longest;
};
typedef char OnlineHistoryCompletionOffsetsCheck[
    offsetof(OnlineHistoryEntry, node) == 0x118 && offsetof(OnlineHistoryEntry, attempts) == 0x120 &&
    offsetof(OnlineHistoryCompletionState, channel) == 0x8E &&
    offsetof(OnlineHistoryCompletionState, queue) == 0x9C &&
    offsetof(OnlineHistoryCompletionState, timestamp) == 0xD8 &&
    offsetof(OnlineHistoryCompletionState, entryCount) == 0x104 &&
    offsetof(OnlineHistoryCompletionState, result) == 0x220 &&
    offsetof(OnlineHistoryCompletionState, rejected) == 0x2AC &&
    offsetof(OnlineHistoryCompletionState, failed) == 0x30C &&
    offsetof(OnlineHistoryCompletionState, longest) == 0x318 ? 1 : -1];
#endif
