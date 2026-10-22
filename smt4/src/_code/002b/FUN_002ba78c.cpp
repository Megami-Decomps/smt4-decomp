/* NON_MATCHING: Draw-parameter initialization uses different stack and argument allocation. */
#include "gfx/DrawParameterOwner.h"
extern "C" {
void drawParameterBlockClear(Params002c312c*);
void paramsInit(Params002c312c*, u32, u16, u32, u16, u32, u16, u32, u16, u32, u16);
extern const u8 DAT_003ff3f0[0x310];

// Enables a cleared drawing-parameter owner and installs the four default data blocks.
void FUN_002ba78c(DrawParameterOwner* owner)
{
    owner->words[0] = 0;
    owner->words[1] = 0;
    owner->words[2] = 0;
    owner->words[3] = 0;
    owner->words[4] = 0;
    owner->enabled = 1;
    owner->dirty = 1;
    owner->unk41C = 0;
    owner->unk418 = 0;
    drawParameterBlockClear(&owner->parameters);
    // The named retail symbol is the final member of the contiguous default packet.
    const DrawParameterDefaults* defaults = (const DrawParameterDefaults*)
        (DAT_003ff3f0 - offsetof(DrawParameterDefaults, fourth));
    paramsInit(&owner->parameters, (u32)defaults->first, sizeof(defaults->first),
               (u32)defaults->second, sizeof(defaults->second),
               (u32)defaults->third, sizeof(defaults->third), 0, 0,
               (u32)defaults->fourth, sizeof(defaults->fourth));
}
}
