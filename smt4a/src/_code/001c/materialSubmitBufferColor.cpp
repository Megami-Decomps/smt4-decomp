/* NON_MATCHING: 106 lines; same clamps and packing, but retail forms &commandsOffset and &color in r3 and reads the channels through it ([r3, #4]...), so the channel and command-word registers differ. */
#include "gfx/MaterialColorCommand.h"

extern "C" {
extern u32 *g_commandBufferCursor;
void FUN_001cefe0(const void *commands, u32 registerIndex);

void materialSubmitBufferColor(MaterialColorOwner *owner)
{
    if (owner->material == NULL)
        return;
    MaterialColorResource *material = owner->material->resource;
    const void *commands = NULL;
    if (material->commandsOffset != 0)
        commands = reinterpret_cast<const u8 *>(&material->commandsOffset) + material->commandsOffset;
    MaterialPackedColor color = materialPackColor(material->color);
    g_commandBufferCursor[0] = (material->flags & 2) ? 0x10000 : 0;
    g_commandBufferCursor[1] = 0x000400E0;
    g_commandBufferCursor[2] = color.value & 0x00FFFFFF;
    g_commandBufferCursor[3] = 0x000F00E1;
    g_commandBufferCursor += 4;
    FUN_001cefe0(commands, 23);
}
}
