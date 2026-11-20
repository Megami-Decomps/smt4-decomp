/* nw::snd sound player: lists of active sounds and a priority-ordered re-sort. */
#ifndef SHARD_S1NWSND_H
#define SHARD_S1NWSND_H

#include <stddef.h>
#include "common.h"
#include "nw/ut/LinkList.h"

/* A playing sound as the player sees it. */
typedef struct PlayerSound {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ s32 priority;
    /* 0x54 */ u8 unk54[0x44];
    /* 0x98 */ u8 playerPriority;
    /* 0x99 */ u8 unk99[0x3B];
    /* 0xD4 */ u8 unkD4[8];
    /* 0xDC */ ListNode activeNode;      /* in SoundPlayer::activeList */
    /* 0xE4 */ ListNode priorityNode;    /* in SoundPlayer::priorityList */
} PlayerSound;

typedef struct SoundPlayer {
    /* 0x00 */ LinkList activeList;
    /* 0x0C */ LinkList priorityList;
} SoundPlayer;

struct SoundPlayerResetState {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 value;
};

struct SoundPlayerPairState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 first;
    /* 0x08 */ u32 second;
};

typedef char SoundPlayerResetStateSizeCheck[sizeof(SoundPlayerResetState) == 0x14 ? 1 : -1];
typedef char SoundPlayerPairStateSizeCheck[sizeof(SoundPlayerPairState) == 0x0c ? 1 : -1];

/* The 0x3c-byte heap the sound system's initializer constructs two of (smt4 FUN_003f1cb8) after its
 * Obj421f54 base. Its 64-bit range value is __packed: a 0x3c-byte element can only be 4-aligned,
 * and retail clears it with two word stores of one zero register. */
struct FrameHeapStateView {
    /* 0x00 */ u8 base[0x20];
    /* 0x20 */ __packed u64 range;
};
typedef char FrameHeapStateViewSizeCheck[sizeof(FrameHeapStateView) == 0x28 ? 1 : -1];

static __inline ListNode *linkListEnd(LinkList *list)
{
    return &list->node;
}

static __inline PlayerSound *playerSoundFromActiveNode(ListNode *node)
{
    return (PlayerSound *)((u8 *)node - offsetof(PlayerSound, activeNode));
}

static __inline PlayerSound *playerSoundFromPriorityNode(ListNode *node)
{
    return (PlayerSound *)((u8 *)node - offsetof(PlayerSound, priorityNode));
}

#endif
