/* NON_MATCHING: retail keeps the unwrapped data pointer in a separate register (r1 via movne) and spills the argument to r3 before the offset load; the resolved wrapper target is built into r4 here. */
#include "common.h"

extern "C" {

/* A resource block that refers to its data through a self-relative offset. */
typedef struct BinaryResource {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 dataOffset;
} BinaryResource;

/* The data a resource refers to: a type signature, and for wrappers a nested offset at 0x1C. */
typedef struct BinaryResourceData {
    /* 0x00 */ u32 type;
    /* 0x04 */ u8 unk04[0x18];
    /* 0x1C */ s32 innerOffset;
} BinaryResourceData;

u32 FUN_0036eaf0(u32 arg);
void FUN_0015b6ac(BinaryResource *resource);
void FUN_0015b890(BinaryResource *resource);
void FUN_0015b9ec(BinaryResource *resource);

/* The address a self-relative offset points to, or NULL for a zero offset. */
static __inline BinaryResourceData *binaryResolveOffset(s32 *offset)
{
    s32 relative = *offset;
    if (relative == 0) {
        return NULL;
    }
    return (BinaryResourceData *)((u8 *)offset + relative);
}

/* Runs FUN_0036eaf0 and, when it succeeds, finishes setting up the resource by its data type. */
u32 FUN_0036ff60(BinaryResource *resource, u32 arg)
{
    BinaryResourceData *data = binaryResolveOffset(&resource->dataOffset);
    u32 result = FUN_0036eaf0(arg);

    if ((s32)(result & 0x80000000) < 0) {
        return result;
    }
    BinaryResourceData *target = data;
    if (data->type == 0x20000004) {
        target = binaryResolveOffset(&data->innerOffset);
    }
    switch (target->type) {
    case 0x20000011:
        FUN_0015b890(resource);
        break;
    case 0x20000009:
        FUN_0015b6ac(resource);
        break;
    case 0x20000021:
        FUN_0015b9ec(resource);
        break;
    }
    return result;
}

} /* extern "C" */
