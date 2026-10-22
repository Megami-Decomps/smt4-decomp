/* NON_MATCHING: member-initializer return adjustments and final vtable-store scheduling differ. */
#include "common.h"
#include <stddef.h>
struct ConstructedOwner460 {
    /* 0x0000 */ const void *vtable;
    /* 0x0004 */ u8 unk0004[0x9b];
    /* 0x009F */ u8 state;
    /* 0x00A0 */ u8 unk00A0[0x78];
    /* 0x0118 */ u8 base[0x21fc];
    /* 0x2314 */ u8 member[1];
};
extern "C" {
extern const u32 DAT_0055bef8[];
extern const u32 DAT_0055bea8[];
void *FUN_00464a10(void *member);
void *FUN_00465564(void *base);

/* Constructs the member and base, then installs the final vtable and state. */
void FUN_00460024(ConstructedOwner460 *object)
{
    object->vtable = DAT_0055bef8;
    u8 *member = static_cast<u8 *>(FUN_00464a10(object->member));
    u8 *base = member - (offsetof(ConstructedOwner460, member) - offsetof(ConstructedOwner460, base));
    base = static_cast<u8 *>(FUN_00465564(base));
    object = reinterpret_cast<ConstructedOwner460 *>(base - offsetof(ConstructedOwner460, base));
    object->vtable = DAT_0055bea8;
    object->state = 3;
}
}
