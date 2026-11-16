/* NON_MATCHING: retail narrows the stored alignment with `uxth` after the header stores and keeps the address math in r1-r3
 * (one saved register); with u16 parameters armcc skips the narrowing and needs r4 for the header end. */
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
void *asdMemInitAllocationHeader(AllocationHeader *header, u32 size, u16 alignment, u16 flags)
{
    header->size = size;
    header->alignment = alignment;
    header->flags = flags;
    u32 boundary = header->alignment;
    u32 mask = boundary - 1;
    u32 padding = (boundary - ((u32)(header + 1) & mask)) & mask;
    header->unk0c = 0;
    header->unk10 = 0;
    /* The user data starts `padding` bytes after the header; the word just before it points back at the header. */
    u8 *data = (u8 *)header + padding;
    ((AllocationHeader **)data)[sizeof(AllocationHeader) / sizeof(AllocationHeader *) - 1] = header;
    data += sizeof(AllocationHeader);
    FUN_0019a64c(header);
    return data;
}
}
