/* nw::snd sound player: lists of active sounds and a priority-ordered re-sort. */
#ifndef SHARD_S1NWSND_H
#define SHARD_S1NWSND_H

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
