/* NON_MATCHING: the masked count and table address are scheduled differently;
 * the loop uses r4/r5 where retail uses lr/r4. */
#include "shard/Resource.h"

enum {
    RESOURCE_BLOB_SECTION_COUNT_WORD = 1,
    RESOURCE_BLOB_SECTION_COUNT_MASK = 0xFF,
    RESOURCE_BLOB_OFFSET_TABLE_WORD = 2,
    RESOURCE_BLOB_EXTRA_SIZE_WORD = 5 /* relative to the end of the offset table */
};

/* Resolves the blob's group offsets and returns its unpacked workspace size. */
extern "C" u32 FUN_001cd01c(ResourceSizingState *state, u32 *blob)
{
    const u32 *offsets = blob + RESOURCE_BLOB_OFFSET_TABLE_WORD;
    u32 count = blob[RESOURCE_BLOB_SECTION_COUNT_WORD] & RESOURCE_BLOB_SECTION_COUNT_MASK;
    state->count = count;
    for (u32 i = 0; i < count; ++i) {
        state->groups[i] = (ResourceSizingGroup *)((u8 *)blob + *offsets++);
    }
    state->extraWords = offsets[RESOURCE_BLOB_EXTRA_SIZE_WORD];
    return FUN_001cd064(state);
}
