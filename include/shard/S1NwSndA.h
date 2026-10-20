/* nw::snd sound player (Apocalypse layout): lists of pending, active and prioritized sounds. */
#ifndef SHARD_S1NWSNDA_H
#define SHARD_S1NWSNDA_H

#include <stddef.h>
#include "common.h"

typedef struct ListNode {
    /* 0x0 */ struct ListNode *next;
    /* 0x4 */ struct ListNode *prev;
} ListNode;

/* nw::ut::internal::LinkListImpl: a circular list whose sentinel node follows the count. */
typedef struct LinkList {
    /* 0x0 */ u32 count;
    /* 0x4 */ ListNode node;
} LinkList;

/* A playing sound as the player sees it. */
typedef struct PlayerSound {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ s32 priority;
    /* 0x54 */ u8 unk54[0x49];
    /* 0x9D */ u8 playerPriority;
    /* 0x9E */ u8 unk9E[0x62];
    /* 0x100 */ ListNode activeNode;     /* in SoundPlayer::activeList */
    /* 0x108 */ ListNode priorityNode;   /* in SoundPlayer::priorityList */
} PlayerSound;

/* An entry waiting to be started; `state` precedes its list node. */
typedef struct PendingSound {
    /* 0x0 */ u8 state;                  /* 2: ready to start */
    /* 0x1 */ u8 unk1[3];
    /* 0x4 */ ListNode node;
} PendingSound;

typedef struct SoundPlayer {
    /* 0x00 */ LinkList activeList;
    /* 0x0C */ LinkList priorityList;
    /* 0x18 */ LinkList readyList;
    /* 0x24 */ LinkList pendingList;
} SoundPlayer;

static __inline PlayerSound *playerSoundFromActiveNode(ListNode *node)
{
    return (PlayerSound *)((u8 *)node - offsetof(PlayerSound, activeNode));
}

static __inline PlayerSound *playerSoundFromPriorityNode(ListNode *node)
{
    return (PlayerSound *)((u8 *)node - offsetof(PlayerSound, priorityNode));
}

static __inline PendingSound *pendingSoundFromNode(ListNode *node)
{
    return (PendingSound *)((u8 *)node - offsetof(PendingSound, node));
}

/* nw::ut::internal::LinkListImpl::Iterator */
struct LinkListIterator {
    ListNode *node;

    LinkListIterator(ListNode *n) : node(n) {}
    bool operator!=(const LinkListIterator &other) const { return node != other.node; }
    LinkListIterator operator++(int)
    {
        LinkListIterator prev(node);
        node = node->next;
        return prev;
    }
};

static __inline LinkListIterator linkListBegin(LinkList *list)
{
    return LinkListIterator(list->node.next);
}

static __inline LinkListIterator linkListEndIter(LinkList *list)
{
    return LinkListIterator(&list->node);
}

#endif
