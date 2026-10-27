#include "shard/VObject.h"

extern "C" {

extern const u8 DAT_0055bfc4[];  /* vtable */
VObject *_ZN9Obj55bea0C1Ev(void);
u8 *FUN_001b23cc(u8 *member);

typedef struct Object0055bfc4 {
    /* 0x000 */ const void *vtbl;
    /* 0x004 */ u8 unk004[0x118];
    /* 0x11C */ u32 owner;
    /* 0x120 */ u8 flagA;
    /* 0x121 */ u8 flagB;
    /* 0x122 */ u8 unk122[6];
    /* 0x128 */ u8 member128[1];
} Object0055bfc4;

/* Constructor: builds the base object (Obj55bea0), sets the vtable and owner, clears both flags and constructs the embedded member; returns the address FUN_001b23cc yields minus 0x128. */
u8 *constructObj0055bfc4(u32 unused, u32 owner)
{
    Object0055bfc4 *object;
    u8 *member;

    object = (Object0055bfc4 *)_ZN9Obj55bea0C1Ev();
    object->vtbl = DAT_0055bfc4;
    object->owner = owner;
    object->flagA = 0;
    object->flagB = 0;
    member = FUN_001b23cc(object->member128);
    return member - 0x128;
}

} /* extern "C" */
