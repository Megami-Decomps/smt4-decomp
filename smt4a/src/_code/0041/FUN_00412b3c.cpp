/* NON_MATCHING: native bind-symbol initialization interleaving and descriptor stack placement differ. */
#include "gfx/VertexStreams.h"
#include "shard/W6_W6Match5_ShaderBinding.h"
extern "C" {
void FUN_0042c7c8(void *vertex, const ShaderBindSymbol *symbol, u32 physicalAddress, u32 format);

// Bind the position, color, secondary-color and texture-coordinate streams.
void FUN_00412b3c(VertexStreamSource *source, void *vertex)
{
    ShaderBindSymbol position;
    ShaderBindSymbol texCoord;
    ShaderBindSymbol color;
    if (source->flags & 1) {
        position.vertex.attribute = 0;
        FUN_0042c7c8(vertex, &position, asdGxGetPhysicalAddress(reinterpret_cast<u32>(source->position)), 11);
    }
    if (source->flags & 2) {
        color.vertex.attribute = 1;
        FUN_0042c7c8(vertex, &color, asdGxGetPhysicalAddress(reinterpret_cast<u32>(source->color)), 15);
    }
    if (source->flags & 0x20) {
        color.vertex.attribute = 1;
        FUN_0042c7c8(vertex, &color, asdGxGetPhysicalAddress(reinterpret_cast<u32>(source->secondaryColor)), 13);
    }
    if (source->flags & 4) {
        texCoord.vertex.attribute = 2;
        FUN_0042c7c8(vertex, &texCoord, asdGxGetPhysicalAddress(reinterpret_cast<u32>(source->texCoord)), 7);
    }
}
}
