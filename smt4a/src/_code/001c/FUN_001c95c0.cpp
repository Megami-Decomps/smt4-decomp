/* NON_MATCHING: material color bitfield packing and VFP scheduling differ from retail. */
#include "gfx/MaterialColorCommand.h"

extern "C" {
extern u32 *g_commandBufferCursor;
void FUN_001cefe0(const void *commands, u32 registerIndex);

void FUN_001c95c0(MaterialColorOwner *owner)
{
    if (owner->material == NULL)
        return;
    MaterialColorResource *material = owner->material->resource;
    const void *commands = NULL;
    if (material->commandsOffset != 0)
        commands = reinterpret_cast<const u8 *>(&material->commandsOffset) + material->commandsOffset;
    MaterialPackedColor color = materialPackColor(material->color);
    u32 enabled = (material->flags & 2) != 0 ? 0x10000 : 0;
    g_commandBufferCursor[3] = 0x000F00E1;
    g_commandBufferCursor[0] = enabled;
    g_commandBufferCursor[1] = 0x000400E0;
    g_commandBufferCursor[2] = color.value & 0x00FFFFFF;
    g_commandBufferCursor += 4;
    FUN_001cefe0(commands, 23);
}
}
