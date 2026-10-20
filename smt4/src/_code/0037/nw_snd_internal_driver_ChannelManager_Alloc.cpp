#include "common.h"

extern "C" {

typedef struct LinkNode {
    /* 0x00 */ struct LinkNode *prev;
    /* 0x04 */ struct LinkNode *next;
} LinkNode;

typedef struct Channel {
    /* 0x000 */ u8 unk000[0x13C];
    /* 0x13C */ LinkNode link;
} Channel;

typedef struct ChannelManager {
    /* 0x00 */ u8 pool[4];
    /* 0x04 */ LinkNode *head;
    /* 0x08 */ LinkNode *tail;
} ChannelManager;

/* An end of the intrusive list, passed by value (the list implementation's iterator). */
typedef struct ListEnd {
    LinkNode **slot;
} ListEnd;

static __inline ListEnd listEnd(LinkNode **slot)
{
    ListEnd end;

    end.slot = slot;
    return end;
}

int nw_ut_internal_LinkListImpl_insert(ListEnd head, ListEnd tail, LinkNode *node);
void *nw_snd_internal_PoolImpl_AllocImpl(ChannelManager *manager);
Channel *FUN_00380138(void *memory);

/* Allocates a Channel from the pool, constructs it and appends it to the active list; returns it (NULL if the pool is empty). */
Channel *nw_snd_internal_driver_ChannelManager_Alloc(ChannelManager *manager)
{
    void *memory = nw_snd_internal_PoolImpl_AllocImpl(manager);
    Channel *channel = (memory != NULL) ? FUN_00380138(memory) : NULL;
    ListEnd head = listEnd(&manager->head);
    ListEnd tail = listEnd(&manager->tail);

    nw_ut_internal_LinkListImpl_insert(head, tail, &channel->link);
    return channel;
}

} /* extern "C" */
