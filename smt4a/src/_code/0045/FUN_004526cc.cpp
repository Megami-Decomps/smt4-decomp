/* NON_MATCHING: retail keeps the unwrapped data pointer in a separate register (r1 via movne) and spills the argument to r3 before the offset load; the resolved wrapper target is built into r4 here. */
#include "shard/S1NwGfx.h"

extern "C" {

/* The data a resource refers to: a type signature, and for wrappers a nested relative pointer at 0x1C. */
typedef struct BinaryResourceData {
    /* 0x00 */ u32 type;
    /* 0x04 */ u8 unk04[0x18];
    /* 0x1C */ RelativePointer inner;
} BinaryResourceData;

/* A resource block that refers to its data through a self-relative pointer. */
typedef struct BinaryResource {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ RelativePointer data;
} BinaryResource;

u32 FUN_0045092c(u32 arg);
void FUN_001caea8(BinaryResource *resource);
void FUN_001cb08c(BinaryResource *resource);
void FUN_001cb1e8(BinaryResource *resource);

/* Runs FUN_0045092c and, when it succeeds, finishes setting up the resource by its data type. */
u32 FUN_004526cc(BinaryResource *resource, u32 arg)
{
    BinaryResourceData *data = static_cast<BinaryResourceData *>(resource->data.get());
    u32 result = FUN_0045092c(arg);

    if ((s32)(result & 0x80000000) < 0) {
        return result;
    }
    BinaryResourceData *target = data;
    if (data->type == 0x20000004) {
        target = static_cast<BinaryResourceData *>(data->inner.get());
    }
    switch (target->type) {
    case 0x20000011:
        FUN_001cb08c(resource);
        break;
    case 0x20000009:
        FUN_001caea8(resource);
        break;
    case 0x20000021:
        FUN_001cb1e8(resource);
        break;
    }
    return result;
}

} /* extern "C" */
