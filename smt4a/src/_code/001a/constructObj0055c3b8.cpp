#include "shard/VObject.h"

extern "C" {

extern const u8 DAT_0055c3b8[];  /* vtable */
VObject *FUN_001b18cc(void);
u8 *FUN_001b2280(u8 *member);

typedef struct Object0055c3b8 {
    /* 0x000 */ const void *vtbl;
    /* 0x004 */ u8 unk004[0x118];
    /* 0x11C */ u32 owner;
    /* 0x120 */ u8 flagA;
    /* 0x121 */ u8 flagB;
    /* 0x122 */ u8 unk122[2];
    /* 0x124 */ u8 member124[1];
} Object0055c3b8;

/* Constructor: builds the base object, sets the vtable and owner, clears both flags and constructs the embedded member; returns the address FUN_001b2280 yields minus 0x124. */
u8 *constructObj0055c3b8(u32 unused, u32 owner)
{
    Object0055c3b8 *object;
    u8 *member;

    object = (Object0055c3b8 *)FUN_001b18cc();
    object->vtbl = DAT_0055c3b8;
    object->owner = owner;
    object->flagA = 0;
    object->flagB = 0;
    member = FUN_001b2280(object->member124);
    return member - 0x124;
}

} /* extern "C" */
