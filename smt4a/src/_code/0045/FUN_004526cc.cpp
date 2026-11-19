/* NON_MATCHING: FUN_0045092c takes (allocator, data, flags) as its forwarder passes them; remaining: retail builds the data pointer in r1 (offset + base) and copies it to r4, and keeps the unwrapped type pointer in r1 apart from data (the wrapper target lands in the zero register r7); armcc merges target into r4. */
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

u32 FUN_0045092c(u32 allocator, BinaryResourceData *resource, u32 flags);
void FUN_001caea8(BinaryResource *resource);
void FUN_001cb08c(BinaryResource *resource);
void FUN_001cb1e8(BinaryResource *resource);

/* Resolves the resource's data with FUN_0045092c and, when that succeeds, finishes setting up the resource by its data type. */
u32 FUN_004526cc(BinaryResource *resource, u32 allocator, u32 flags)
{
    BinaryResourceData *data = static_cast<BinaryResourceData *>(resource->data.get());
    u32 result = FUN_0045092c(allocator, data, flags);

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
