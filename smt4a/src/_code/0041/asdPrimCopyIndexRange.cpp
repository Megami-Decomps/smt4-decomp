#include "common.h"

struct IndexSource {
    u8 unk00[0x48]; // 0x00
    const u16* indices; // 0x48
};
struct PrimitiveIndexBuffer {
    u32 address; // 0x00
    u32 count;   // 0x04
    u8 flag;     // 0x08
};

extern "C" {
void* asdPrimAlloc(u32 size);
void rt_memcpy(void* destination, const void* source, u32 size);
u32 asdGxGetPhysicalAddress(const void* allocation);

// Copies a range of halfword indices into primitive memory and records its mapped address.
void asdPrimCopyIndexRange(const IndexSource* source, PrimitiveIndexBuffer* output, s32 first, u32 count)
{
    u32 size = count * sizeof(u16);
    void* data = asdPrimAlloc(size);
    rt_memcpy(data, &source->indices[first], size);
    output->address = asdGxGetPhysicalAddress(data);
    output->count = count;
    output->flag = 0;
}
}
