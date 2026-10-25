/* NON_MATCHING: Draw-parameter initialization uses different stack and argument allocation. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "gfx/DrawParameterOwner.h"
extern "C" {
void drawParameterBlockClear(UiResourceParameters*);

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
    paramsInit(&owner->parameters, defaults->first, sizeof(defaults->first), defaults->second, sizeof(defaults->second), defaults->third, sizeof(defaults->third), 0, 0, defaults->fourth, sizeof(defaults->fourth));
}
}
