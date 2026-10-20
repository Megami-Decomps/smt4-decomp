/* Runs the owner's handler on `item`: builds a 104-byte context from `arg` and passes it with the item (or NULL when the item has no field at +0x10). */
#include "common.h"

extern "C" {

struct Handler;

typedef struct HandlerVtbl {
    /* 0x00 */ void *slots[2];
    /* 0x08 */ void (*process)(struct Handler *handler, void *owner, void *item, void *context);
} HandlerVtbl;

typedef struct Handler {
    /* 0x00 */ HandlerVtbl *vtbl;
} Handler;

typedef struct Owner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Handler *handler;
} Owner;

typedef struct Item {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 link;
} Item;

typedef struct Context {
    u32 unk00[26];
} Context; /* 0x68 */

extern void FUN_002ea974(Context *context);
extern void onlineUrlSetAddress(Context *context, u32 arg);
extern void onlineUrlDestroy(Context *context);

void FUN_00104900(Owner *owner, u32 arg, Item *item)
{
    if (owner->handler != NULL) {
        Context context;

        FUN_002ea974(&context);
        onlineUrlSetAddress(&context, arg);
        if (item->link != 0) {
            owner->handler->vtbl->process(owner->handler, owner, item, &context);
        } else {
            owner->handler->vtbl->process(owner->handler, owner, NULL, &context);
        }
        onlineUrlDestroy(&context);
    }
}

}
