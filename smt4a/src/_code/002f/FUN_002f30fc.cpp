#include "common.h"

extern "C" {

u8 *destroyObj00558ac4(u8 *member);
u8 *FUN_002f8520(u8 *member);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u8 member30[1];
} Holder;

/* Destroys the member at 0x30 and then the base part FUN_002f8520 hands back; returns the address 8 past that. */
u8 *FUN_002f30fc(Holder *object)
{
    u8 *member;

    member = FUN_002f8520(object->member30);
    member = destroyObj00558ac4(member - 0x28);
    return member - 8;
}

} /* extern "C" */
