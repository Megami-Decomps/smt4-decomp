#ifndef BATTLE_ACTIONSTATECHANNELS_H
#define BATTLE_ACTIONSTATECHANNELS_H
#include "common.h"
#include <stddef.h>
struct BtlEntry;
struct BtlActionRecord;
struct ActionStateChannelOwner {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 jobs[4];
    /* 0x1C */ u8 unk1C[0x68];
    /* 0x84 */ s32 current;
};
struct ActionStateChannel {
    /* 0x000 */ ActionStateChannelOwner *owner;
    /* 0x004 */ u32 flags;
    /* 0x008 */ s8 state;
    /* 0x009 */ s8 pending;
    /* 0x00A */ u16 frames;
    /* 0x00C */ u32 timer;
    union {
        /* 0x010 */ u8 unk010[0xF0C];
        struct {
            u8 unk010[4];
            /* 0x014 */ u32 phase;
            u8 unk018[4];
            /* 0x01C */ u32 drawState;
            u8 unk020[4];
            /* 0x024 */ BtlEntry *entry;
            /* 0x028 */ BtlActionRecord *record;
            /* 0x02C */ void *parameters;
            /* 0x030 */ s16 index;
            u8 unk032[2];
            /* 0x034 */ s32 mode;
            /* 0x038 */ s32 argument;
            u8 unk03C[0x548];
            /* 0x584 */ s32 parameter;
        } action;
    };
};
/* Transition controls begin immediately after a channel's owner pointer. */
struct ActionStateTransition {
    u32 flags;
    s8 state;
    s8 pending;
    u16 frames;
    u32 timer;
};
typedef char ActionStateTransitionOffsets[
    offsetof(ActionStateChannel, flags) == 4 &&
    offsetof(ActionStateTransition, flags) == 0 &&
    offsetof(ActionStateTransition, state) == 4 &&
    offsetof(ActionStateTransition, pending) == 5 &&
    offsetof(ActionStateTransition, frames) == 6 &&
    offsetof(ActionStateTransition, timer) == 8 &&
    sizeof(ActionStateTransition) == 0xC ? 1 : -1];
struct ActionStateChannels { ActionStateChannel entries[4]; };
typedef char ActionStateChannelLayoutCheck[(sizeof(ActionStateChannel) == 0xF1C && offsetof(ActionStateChannelOwner, current) == 0x84) ? 1 : -1];
typedef char ActionStateChannelActionOffsets[
    offsetof(ActionStateChannel, action.phase) == 0x14 &&
    offsetof(ActionStateChannel, action.drawState) == 0x1C &&
    offsetof(ActionStateChannel, action.entry) == 0x24 &&
    offsetof(ActionStateChannel, action.record) == 0x28 &&
    offsetof(ActionStateChannel, action.parameters) == 0x2C &&
    offsetof(ActionStateChannel, action.index) == 0x30 &&
    offsetof(ActionStateChannel, action.mode) == 0x34 &&
    offsetof(ActionStateChannel, action.argument) == 0x38 &&
    offsetof(ActionStateChannel, action.parameter) == 0x584 &&
    sizeof(ActionStateChannel) == 0xF1C ? 1 : -1];
#endif
