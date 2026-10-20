#include "shard/VObject.h"

extern "C" {

extern const u8 DAT_0055ae64[];  /* vtable */
VObject *FUN_002e9f80(void);
u8 *FUN_002ed912(u8 *member);

typedef struct Object55ae64 {
    /* 0x00 */ const void *vtbl;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u8 member0C[1];
} Object55ae64;

/* Creates the object through FUN_002e9f80, sets its vtable and initialises the member at 0xC; returns the address FUN_002ed912 yields minus 0xC. */
u8 *FUN_002ec75c(void)
{
    Object55ae64 *object;
    u8 *member;

    object = (Object55ae64 *)FUN_002e9f80();
    object->vtbl = DAT_0055ae64;
    member = FUN_002ed912(object->member0C);
    return member - 0xC;
}

} /* extern "C" */
