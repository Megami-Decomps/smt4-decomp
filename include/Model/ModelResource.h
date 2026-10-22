#ifndef MODEL_MODEL_RESOURCE_H
#define MODEL_MODEL_RESOURCE_H
#include "classes/AsdAllocatorObject.h"
#include "shard/S1NwGfx.h"
#include <stddef.h>

struct ModelResource;
struct ModelResourceVtable {
    void (*destroy)(ModelResource*); // 0x00
};
struct ModelResource {
    const ModelResourceVtable* vtable; // 0x00
    AsdAllocatorObject* allocator; // 0x04
};
struct ModelResourceList {
    u32 unk00; // 0x00
    ModelResource** begin; // 0x04
    ModelResource** end; // 0x08
};

struct ModelFileAllocation {
    u8 unk00[0x0C]; // 0x00
    RelativePointer data; // 0x0C
    AsdAllocatorObject* allocator; // 0x10
};
struct ModelFileHeader {
    u8 unk00[0x38]; // 0x00
    RelativePointer allocation; // 0x38

    ModelFileAllocation* getAllocation() const
    {
        return (ModelFileAllocation*)allocation.get();
    }
};
typedef char ModelFileAllocationLayoutCheck[sizeof(ModelFileAllocation) == 0x14 &&
    offsetof(ModelFileAllocation, data) == 0x0C &&
    offsetof(ModelFileAllocation, allocator) == 0x10 ? 1 : -1];
typedef char ModelFileHeaderLayoutCheck[sizeof(ModelFileHeader) == 0x3C &&
    offsetof(ModelFileHeader, allocation) == 0x38 ? 1 : -1];
typedef char ModelResourceLayoutCheck[sizeof(ModelResource) == 8 &&
    offsetof(ModelResource, allocator) == 4 && sizeof(ModelResourceList) == 0x0C ? 1 : -1];
#endif
