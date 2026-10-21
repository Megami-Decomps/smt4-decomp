/* NON_MATCHING: sprite-coordinate/dimension load order and pointer registers differ; retail retains an extra sprite-pointer move for each masked-dimension region. */
#include "shard/S1ListPanel.h"

struct SpriteTouchPanel {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ s16 regions[4];
    /* 0x24 */ s16 count;
    /* 0x26 */ u8 unk26[0xc2];
    /* 0xe8 */ u8 selection[1];
};

struct SpriteTouchOwner {
    SpriteTouchPanel *panel;
};

extern "C" {
void ifTouchRegionRemove(void);
void memFill8(void *, u32 value);
s32 FUN_0029efa8(void *selection);
SpriteInfo *FUN_002bf4f8(u32 group, u32 sprite);
s32 ifTouchRegionAdd(s32 x, s32 y, s32 width, s32 height);
}

static __inline s32 addSpriteTouchRegion(const SpriteInfo *anchor, const SpriteInfo *sprite)
{
    return ifTouchRegionAdd(static_cast<s16>(anchor->x + sprite->x),
                            static_cast<s16>(anchor->y + sprite->y),
                            sprite->bounds.width & 0x7fff, sprite->bounds.height & 0x7fff);
}

// Rebuild four touch regions from the selected sprite-group anchor.
extern "C" void FUN_00259e98(SpriteTouchOwner *owner)
{
    SpriteTouchPanel *panel = owner->panel;
    for (s32 index = 0; index < panel->count; ++index) {
        ifTouchRegionRemove();
    }
    memFill8(panel->regions, 0xffffffff);
    panel->count = 0;
    SpriteInfo *anchor = FUN_002bf4f8(0x2f, FUN_0029efa8(panel->selection) + 0x1f);
    panel->regions[0] = addSpriteTouchRegion(anchor, FUN_002bf4f8(0x2f, 0x1b));
    ++panel->count;
    panel->regions[1] = addSpriteTouchRegion(anchor, FUN_002bf4f8(0x2f, 0x34));
    panel->regions[2] = addSpriteTouchRegion(anchor, FUN_002bf4f8(0x2f, 0x38));
    SpriteInfo *sprite = FUN_002bf4f8(0x2f, 0x33);
    panel->regions[3] = ifTouchRegionAdd(static_cast<s16>(anchor->x + sprite->x),
                                        static_cast<s16>(anchor->y + sprite->y),
                                        sprite->size[0], sprite->size[1]);
    panel->count += 3;
}
