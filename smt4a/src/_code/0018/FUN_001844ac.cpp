/* NON_MATCHING: alignment narrowing and metadata stores schedule differently; -O2 reduces register use but is not identical. */
#include "common.h"

struct AllocationHeader {
    u32 size; // 0x00
    u16 alignment; // 0x04
    u16 flags; // 0x06
    u32 unk08;
    u32 unk0c;
    u32 unk10;
    u8 unk14[0x2c];
};

extern "C" {
void FUN_0019a64c(AllocationHeader *header);

// Align the user allocation after its header and install the preceding back-pointer.
void *FUN_001844ac(AllocationHeader *header, u32 size, u32 alignment, u32 flags)
{
    header->size = size;
    header->alignment = alignment;
    header->flags = flags;
    u32 boundary = header->alignment;
    u32 mask = boundary - 1;
    u32 padding = (boundary - ((u32)(header + 1) & mask)) & mask;
    header->unk0c = 0;
    header->unk10 = 0;
    u8 *data = (u8 *)(header + 1) + padding;
    ((AllocationHeader **)data)[-1] = header;
    FUN_0019a64c(header);
    return data;
}
}
