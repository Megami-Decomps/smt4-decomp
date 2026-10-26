#include "ui/UiSpriteState.h"
#include "AsdSDK/AsdMemUtil.h"

// Clear the sprite state, install its initial values, and copy the channels from the source.
static __inline void uiSpriteInitializeState(UiSpriteState *sprite, u32 value0, u32 value1, u32 value2,
                                             UiSpriteSource *source, u16 id, f32 value)
{
    sysMemClear(sprite, sizeof(UiSpriteState));
    sprite->unk00 = value0;
    sprite->unk04 = value1;
    sprite->unk08 = value2;
    sprite->unk20 = value;
    sprite->unk38 = id;
    sprite->unk24 = 1.0f;
    sprite->unk28 = 1.0f;
    sprite->unk2C = 1.0f;
    sprite->source = source;
    sprite->unk4C = source->unk0C;
    sprite->unk58 = source->unk10;
    sprite->unk64 = source->unk14;
    sprite->unk70 = source->unk18;
    sprite->unk78 = source->unk1C;
    sprite->unk86[0] = 1;
    sprite->unk86[1] = 1;
    sprite->unk86[2] = 1;
    sprite->unk86[3] = 1;
    sprite->unk86[4] = 1;
}

extern "C" void FUN_0014e188(UiSpriteState *sprite, u32 value0, u32 value1, UiSpriteSource *source, u16 id, f32 value)
{
    uiSpriteInitializeState(sprite, value0, value1, -1, source, id, value);
}
