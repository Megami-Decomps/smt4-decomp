/* nw::snd sound player (Apocalypse layout): lists of pending, active and prioritized sounds. */
#ifndef SHARD_S1NWSNDA_H
#define SHARD_S1NWSNDA_H

#include <stddef.h>
#include "common.h"
#include "nw/ut/LinkList.h"

/* A playing sound as the player sees it. */
typedef struct PlayerSoundA {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ s32 priority;
    /* 0x54 */ u8 unk54[0x49];
    /* 0x9D */ u8 playerPriority;
    /* 0x9E */ u8 unk9E[0x62];
    /* 0x100 */ ListNode activeNode;     /* in SoundPlayerA::activeList */
    /* 0x108 */ ListNode priorityNode;   /* in SoundPlayerA::priorityList */
} PlayerSoundA;

/* An entry waiting to be started; `state` precedes its list node. */
typedef struct PendingSound {
    /* 0x0 */ u8 state;                  /* 2: ready to start */
    /* 0x1 */ u8 unk1[3];
    /* 0x4 */ ListNode node;
} PendingSound;

typedef struct SoundPlayerA {
    /* 0x00 */ LinkList activeList;
    /* 0x0C */ LinkList priorityList;
    /* 0x18 */ LinkList readyList;
    /* 0x24 */ LinkList pendingList;
} SoundPlayerA;

static __inline PlayerSoundA *playerSoundFromActiveNode(ListNode *node)
{
    return (PlayerSoundA *)((u8 *)node - offsetof(PlayerSoundA, activeNode));
}

static __inline PlayerSoundA *playerSoundFromPriorityNode(ListNode *node)
{
    return (PlayerSoundA *)((u8 *)node - offsetof(PlayerSoundA, priorityNode));
}

static __inline PendingSound *pendingSoundFromNode(ListNode *node)
{
    return (PendingSound *)((u8 *)node - offsetof(PendingSound, node));
}

#endif
