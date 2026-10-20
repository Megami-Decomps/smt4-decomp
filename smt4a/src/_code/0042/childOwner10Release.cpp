#include "shard/Shard0042.h"

extern "C" {

typedef struct Child24 {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u32 unk24;
} Child24;

typedef struct ChildOwner10 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Child24 *child;
} ChildOwner10;

extern void FUN_001800b8(Child24 *child);

/* Clears the child's back reference, releases the child and drops it. */
void childOwner10Release(ChildOwner10 *owner)
{
    owner->child->unk24 = 0;
    FUN_001800b8(owner->child);
    owner->child = NULL;
}

} /* extern "C" */
