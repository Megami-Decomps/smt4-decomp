/* A doubly linked list whose nodes carry their index, a payload and a destroy callback. */
#ifndef SHARD_W4_W4MATCH2_INDEXEDLIST_H
#define SHARD_W4_W4MATCH2_INDEXEDLIST_H

#include "common.h"

typedef void (*IndexedNodeDestroy)(void *payload);

typedef struct IndexedNode {
    /* 0x00 */ s32 index;                 /* position in the list */
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ void *payload;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ IndexedNodeDestroy destroy; /* called with the payload before the node is freed */
    /* 0x14 */ struct IndexedNode *prev;
    /* 0x18 */ struct IndexedNode *next;
} IndexedNode;

typedef struct IndexedList {
    /* 0x00 */ IndexedNode *head;
    /* 0x04 */ IndexedNode *tail;
    /* 0x08 */ s32 count;
} IndexedList;

#endif
