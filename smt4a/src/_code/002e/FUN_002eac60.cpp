#include "common.h"

extern "C" {

typedef struct Owner Owner;
typedef struct Item Item;
typedef struct OwnerVtbl {
    /* 0x00 */ void *unk00[16];
    /* 0x40 */ void (*attach)(Owner *owner, Item *item, Item *holder);
    /* 0x44 */ void (*detach)(Owner *owner, Item *item, Item *holder);
} OwnerVtbl;
struct Owner {
    /* 0x00 */ const OwnerVtbl *vtbl;
};

struct Item {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Owner *owner;
    /* 0x08 */ u8 unk08[0x70];
    /* 0x78 */ Item *current;
};

/* Replaces the item attached at 0x78: detaches the old one and attaches `item` through the owner's vtable (when there is an owner), then stores it. */
void FUN_002eac60(Item *holder, Item *item)
{
    Owner *owner;

    owner = holder->owner;
    if (owner != NULL) {
        if (holder->current != NULL) {
            owner->vtbl->detach(owner, holder->current, holder);
        }
        if (item != NULL) {
            holder->owner->vtbl->attach(holder->owner, item, holder);
        }
    }
    holder->current = item;
}

} /* extern "C" */
