#include "common.h"

extern "C" {

typedef struct ListNode {
    /* 0x00 */ struct ListNode *prev;
    /* 0x04 */ struct ListNode *next;
} ListNode;

typedef struct Manager {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 activeList[0xC];
    /* 0x14 */ ListNode *head;
    /* 0x18 */ ListNode *tail;
} Manager;

typedef struct Actor Actor;
typedef struct ActorVtbl {
    /* 0x00 */ void *unk00[4];
    /* 0x10 */ void (*onDeactivate)(Actor *self);
} ActorVtbl;

struct Actor {
    /* 0x000 */ ActorVtbl *vtbl;
    /* 0x004 */ u8 unk004[0xF4];
    /* 0x0F8 */ ListNode node;
    /* 0x100 */ u8 unk100[0x1C];
    /* 0x11C */ Manager *manager;
    /* 0x120 */ u8 active;
    /* 0x121 */ u8 visible;
};

/* An end of the intrusive list, passed by value (the list implementation's iterator). */
typedef struct ListEnd {
    ListNode **slot;
} ListEnd;

static __inline ListEnd listEnd(ListNode **slot)
{
    ListEnd end;

    end.slot = slot;
    return end;
}

int FUN_001b6668(void *list, ListNode *node);
int FUN_0045f834(Actor *actor);
int nw_ut_internal_LinkListImpl_insert(ListEnd head, ListEnd tail, ListNode *node);

/* Deactivates the actor: clears its flags, moves its node to the manager's list and notifies it. */
void FUN_00466f0c(Actor *actor)
{
    Manager *manager;
    ListEnd head;
    ListEnd tail;

    if (actor->active == 0) {
        return;
    }
    actor->active = 0;
    actor->visible = 0;
    FUN_0045f834(actor);
    manager = actor->manager;
    FUN_001b6668(manager->activeList, &actor->node);
    actor->vtbl->onDeactivate(actor);
    head = listEnd(&manager->head);
    tail = listEnd(&manager->tail);
    nw_ut_internal_LinkListImpl_insert(head, tail, &actor->node);
}

} /* extern "C" */
