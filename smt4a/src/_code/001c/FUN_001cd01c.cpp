/* NON_MATCHING: countdown loop now matches retail's shape; retail predicates the index init (movne ip,#0) and uses lr as a scratch register (push {r4, lr}), the build uses r4/r5. */
/* Reads the table of section offsets at the start of a packed blob into the sizing state (one group pointer per section),
 * then lets FUN_001cd064 (placed right after, so the last call is a linker NOP) size the result. */
#include "shard/Resource.h"

struct PackedBlob {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 sectionCount;   /* low byte */
    /* 0x08 */ u32 sectionOffsets[1];  /* sectionCount entries, then the blob's trailing words */
};

extern "C" {
u32 FUN_001cd064(const ResourceSizingState *resource);

u32 FUN_001cd01c(ResourceSizingState *state, PackedBlob *blob)
{
    const u32 *offsets = blob->sectionOffsets;
    u32 count = blob->sectionCount & 0xFF;

    state->count = count;
    s32 i = 0;
    for (u32 remaining = count; remaining != 0; --remaining) {
        state->groups[i++] = (ResourceSizingGroup *)((u8 *)blob + *offsets++);
    }
    state->extraWords = offsets[5];
    return FUN_001cd064(state);
}
}
