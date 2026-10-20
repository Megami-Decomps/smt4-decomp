/* NON_MATCHING: the active flag is read through base+0xca and written through the shared base; retail writes it with a literal register offset (ldr r0, =0x2bca; strb r1, [r0, r4]). */
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

typedef struct Actor Actor;
typedef struct ActorVtbl {
    /* 0x00 */ void *unk00[4];
    /* 0x10 */ void (*onDeactivate)(Actor *self);
} ActorVtbl;

struct Actor {
    /* 0x0000 */ ActorVtbl *vtbl;
    /* 0x0004 */ u8 unk0004[0xD0];
    /* 0x00D4 */ ListNode node;
    /* 0x00DC */ u8 unk00DC[0x1C74];
    /* 0x1D50 */ u8 subObject[0xC30];
    /* 0x2980 */ Manager *manager;
    /* 0x2984 */ u8 unk2984[0x246];
    /* 0x2BCA */ u8 active;
};

int FUN_00379a14(Actor *actor);
int FUN_0037c9e8(void *subObject);
int nw_ut_internal_LinkListImpl_erase_2B743C(void *list, ListNode *node);
int nw_ut_internal_LinkListImpl_insert(ListEnd head, ListEnd tail, ListNode *node);

/* Deactivates the actor: clears its flag, releases its sub-object, moves its node out of the manager's active list, notifies it and re-inserts the node. */
void FUN_0037a144(Actor *actor)
{
    Manager *manager;
    ListEnd head;
    ListEnd tail;

    if (actor->active == 0) {
        return;
    }
    actor->active = 0;
    FUN_0037c9e8(actor->subObject);
    FUN_00379a14(actor);
    manager = actor->manager;
    nw_ut_internal_LinkListImpl_erase_2B743C(manager->activeList, &actor->node);
    actor->vtbl->onDeactivate(actor);
    head = listEnd(&manager->head);
    tail = listEnd(&manager->tail);
    nw_ut_internal_LinkListImpl_insert(head, tail, &actor->node);
}

} /* extern "C" */
