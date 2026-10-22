#ifndef SHARD_W8MATCH1_CALLBACK_SELECTION_H
#define SHARD_W8MATCH1_CALLBACK_SELECTION_H
#include "common.h"
struct CallbackSelectionWork {
    typedef void (CallbackSelectionWork::*Callback)();
    u8 unk0000[0x14]; // 0x0000
    s32 selection; // 0x0014
    u8 unk0018[0x57C]; // 0x0018
    s32 state; // 0x0594
    u8 unk0598[0xA100]; // 0x0598
    Callback callbacks[1]; // 0xA698: trailing member-callback table
};
#endif
