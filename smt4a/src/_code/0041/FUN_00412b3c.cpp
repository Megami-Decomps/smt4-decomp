/* NON_MATCHING: native bind-symbol initialization interleaving and descriptor stack placement differ. */
#include "gfx/VertexStreams.h"
#include "shard/W6_W6Match5_ShaderBinding.h"
extern "C" {
u32 asdGxGetPhysicalAddress(const void *address);
void FUN_0042c7c8(void *vertex, const ShaderBindSymbol *symbol, u32 physicalAddress, u32 format);

// Bind the position, color, secondary-color and texture-coordinate streams.
void FUN_00412b3c(VertexStreamSource *source, void *vertex)
{
    ShaderBindSymbol position;
    position.vertex.kind = 0;
    position.vertex.count = 1;
    position.vertex.attribute = 255;
    position.vertex.registerIndex = 255;
    position.vertex.flags = 0;
    ShaderBindSymbol texCoord;
    texCoord.vertex.kind = 0;
    texCoord.vertex.count = 1;
    texCoord.vertex.attribute = 255;
    texCoord.vertex.registerIndex = 255;
    texCoord.vertex.flags = 0;
    ShaderBindSymbol color;
    color.vertex.kind = 0;
    color.vertex.count = 1;
    color.vertex.attribute = 255;
    color.vertex.registerIndex = 255;
    color.vertex.flags = 0;
    if (source->flags & 1) {
        position.vertex.attribute = 0;
        FUN_0042c7c8(vertex, &position, asdGxGetPhysicalAddress(source->position), 11);
    }
    if (source->flags & 2) {
        color.vertex.attribute = 1;
        FUN_0042c7c8(vertex, &color, asdGxGetPhysicalAddress(source->color), 15);
    }
    if (source->flags & 0x20) {
        color.vertex.attribute = 1;
        FUN_0042c7c8(vertex, &color, asdGxGetPhysicalAddress(source->secondaryColor), 13);
    }
    if (source->flags & 4) {
        texCoord.vertex.attribute = 2;
        FUN_0042c7c8(vertex, &texCoord, asdGxGetPhysicalAddress(source->texCoord), 7);
    }
}
}
