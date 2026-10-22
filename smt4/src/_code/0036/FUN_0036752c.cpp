/* NON_MATCHING: allocation-result lifetime and descriptor-copy scheduling differ. */
#include "classes/AsdAllocatorObject.h"

struct DescriptorRequest {
    /* 0x00 */ u32 unk00[4];
    /* 0x10 */ u8 unk10;
    /* 0x11 */ u8 unk11;
    /* 0x12 */ u8 unk12;
    /* 0x13 */ u8 unk13;
    /* 0x14 */ u32 unk14;
};

struct DescriptorObject;
struct DescriptorObjectVtable {
    /* 0x00 */ void (*unk00[9])();
    /* 0x24 */ void (*vfunc24)(DescriptorObject *object, AsdAllocatorObject *allocator);
};

struct DescriptorObject {
    /* 0x000 */ const DescriptorObjectVtable *vtable;
    /* 0x004 */ u8 unk004[0x144];
    /* 0x148 */ u8 unk148;
    /* 0x149 */ u8 unk149;
    /* 0x14a */ u8 unk14a;
    /* 0x14b */ u8 unk14b;
    /* 0x14c */ u32 unk14c;
    /* 0x150 */ DescriptorRequest request;
};

typedef char DescriptorRequestSizeCheck[sizeof(DescriptorRequest) == 24 ? 1 : -1];
typedef char DescriptorObjectSizeCheck[sizeof(DescriptorObject) == 0x168 ? 1 : -1];

extern "C" {
extern const DescriptorObjectVtable DAT_004212bc;
DescriptorObject *FUN_002b52b4(void *storage, AsdAllocatorObject *allocator,
                              u32 options, const DescriptorRequest *request);

DescriptorObject *FUN_0036752c(const DescriptorRequest *request, AsdAllocatorObject *allocator)
{
    void *storage = allocator->allocate(sizeof(DescriptorObject), 4);
    DescriptorObject *object = 0;
    if (storage != 0) {
        object = FUN_002b52b4(storage, allocator, 0, request);
        object->vtable = &DAT_004212bc;
        object->unk148 = request->unk10;
        object->unk149 = request->unk11;
        object->unk14a = request->unk12;
        object->unk14c = request->unk14;
        object->request = *request;
    }
    object->vtable->vfunc24(object, allocator);
    return object;
}
}
