/* NON_MATCHING: retail resolves the offsets with pre-indexed loads into separate registers, tests the result with ands/bmi, and orders the case blocks differently. */
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
    return *offset != 0 ? (BinaryResourceData *)((u8 *)offset + *offset) : NULL;
}

/* Runs FUN_0036eaf0 and, when it succeeds, finishes setting up the resource by its data type. */
u32 FUN_0036ff60(BinaryResource *resource, u32 arg)
{
    BinaryResourceData *data = binaryResolveOffset(&resource->dataOffset);
    u32 result = FUN_0036eaf0(arg);

    if (result & 0x80000000) {
        return result;
    }
    if (data->type == 0x20000004) {
        data = binaryResolveOffset(&data->innerOffset);
    }
    switch (data->type) {
    case 0x20000009:
        FUN_0015b6ac(resource);
        break;
    case 0x20000011:
        FUN_0015b890(resource);
        break;
    case 0x20000021:
        FUN_0015b9ec(resource);
        break;
    }
    return result;
}

} /* extern "C" */
