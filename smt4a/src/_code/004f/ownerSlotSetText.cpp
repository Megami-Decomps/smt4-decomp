#include "common.h"

extern "C" {

typedef struct Slot {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 payload[4];
} Slot;

typedef struct Inner {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ Slot slot;
} Inner;

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ Inner *inner;
} Holder;

typedef struct Owner {
    /* 0x000 */ u8 unk000[0x20C];
    /* 0x20C */ Holder *holder;   /* NULL: the Owner itself (+0xC) is used */
} Owner;

int FUN_001a7a20(void *payload, u32 value, u32 arg);
u32 wstrlen(u32 value);

/* Forwards `value` to the payload of the slot of the owner's holder (or of the owner's own embedded holder when it has none). */
void ownerSlotSetText(Owner *owner, u32 value)
{
    Holder *holder = owner->holder;
    Slot *slot;
    u32 arg;

    if (holder != NULL) {
        holder = (Holder *)((u8 *)holder + 0xc);
    }
    slot = &holder->inner->slot;
    arg = wstrlen(value);
    FUN_001a7a20(slot->payload, value, arg);
}

} /* extern "C" */
