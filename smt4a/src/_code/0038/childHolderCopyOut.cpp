#include "shard/Shard0038.h"

extern "C" {

typedef struct Child14 {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
} Child14;

typedef struct ChildHolder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Child14 *child;
} ChildHolder;

typedef struct ChildCopy {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
    /* 0x08 */ Child14 *child;
} ChildCopy;

/* Copies the owner's child's pair (+0x14, +0x18) and the child pointer into `out`. */
void childHolderCopyOut(ChildHolder *owner, ChildCopy *out)
{
    Child14 *child = owner->child;

    out->child = child;
    if (child != NULL) {
        out->first = child->unk14;
        out->second = child->unk18;
    }
}

} /* extern "C" */
