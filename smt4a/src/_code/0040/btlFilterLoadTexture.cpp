#include "shard/W6_W6Match3_FilterTexture.h"
#include "battle/Filter/Filter4Poly.h"

extern "C" {

void* asdTMTexLoadMainHeap(u32 table, u32 index);
void* resourceApplyNodeFlag(u32 table, u32 index);
void* asdTMTexNodeSetMode(s32 table, s32 index);

void btlFilterLoadTexture(Filter4Poly* filter, u32 flags, u32 textureIndex)
{
    if ((flags & 8) != 0) {
        filter->object = resourceApplyNodeFlag(14, textureIndex);
    } else if ((flags & 0x40) != 0) {
        filter->object = asdTMTexNodeSetMode(14, textureIndex);
    } else if ((flags & 1) != 0) {
        filter->object = asdTMTexLoadMainHeap(14, textureIndex);
    }
}

} // extern "C"
