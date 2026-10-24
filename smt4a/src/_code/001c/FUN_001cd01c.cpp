/* NON_MATCHING: loop/register allocation only (retail keeps the offsets pointer in r2 across the loop and exits through ldr [r2, #20]; armcc copies the pointer and saves r4-r7 instead of r4, lr) */
/* Reads the table of section offsets at the start of a packed blob into the container (one pointer per section),
 * then lets FUN_001cd064 (placed right after, so the last call is a linker NOP) process the sections. */
#include "common.h"

struct PackedBlob {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 sectionCount;   /* low byte */
    /* 0x08 */ u32 sectionOffsets[1];  /* sectionCount entries, then the blob's trailing words */
};

struct SectionContainer {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u8 sectionCount;
    /* 0x0D */ u8 unk0d[3];
    /* 0x10 */ u8 *sections[32];
    /* 0x90 */ u8 unk90[0xC];
    /* 0x9C */ u32 trailer;
};

extern "C" {
void FUN_001cd064(SectionContainer *container, PackedBlob *blob);

void FUN_001cd01c(SectionContainer *container, PackedBlob *blob)
{
    const u32 *offsets = blob->sectionOffsets;
    u32 count = blob->sectionCount & 0xFF;

    container->sectionCount = count;
    for (u32 i = 0; i < count; i++) {
        container->sections[i] = (u8 *)blob + *offsets++;
    }
    container->trailer = offsets[5];
    FUN_001cd064(container, blob);
}
}
