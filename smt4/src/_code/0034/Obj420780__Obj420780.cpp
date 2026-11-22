/* NON_MATCHING: color packing's VFP loads, multiplies, conversions and integer scratch registers differ. */
#include <stdio.h>
#include "classes/Obj420780.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"

/* A texture-table entry: its draw offset and a record specific to the entry. */
struct PanelTexture {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ void *record;
};

/* A record of four unit-interval colour components. */
struct ColorRecord {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ f32 component[4];
};

struct PanelTextureTarget {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 mode;
};

extern "C" {
PanelTexture *asdTMTexTableEntryAt(u32 table, s32 index);
PanelTextureTarget *asdTMTexTableGetNodeTexture(u32 table, s32 index);
}

/* Packs the unit-interval components into four bytes, first component in the top byte. */
static __inline u32 packColor(const ColorRecord *color)
{
    return ((u32)(color->component[0] * 255.0f) << 24) |
           ((u32)(color->component[1] * 255.0f) << 16) |
           ((u32)(color->component[2] * 255.0f) << 8) |
           (u32)(color->component[3] * 255.0f);
}

Obj420780::Obj420780()
{
    sprintf(name, "");
    sprintf(raceName, "");
    level = 1;
    registered = 0;
    resistances[0] = 0;
    resistances[1] = 1;
    resistances[2] = 2;
    resistances[3] = 3;
    resistances[4] = 4;
    resistances[5] = 5;
    resistances[6] = 0;
    resistances[7] = 1;
    options[0] = 0;
    options[1] = 0;
    options[2] = 0;
    options[3] = 0;
    options[4] = 0;
    options[5] = 0;
    const s32 slotTextures[8] = {0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50};
    for (s32 i = 0; i < 8; i++) {
        PanelTexture *texture = asdTMTexTableEntryAt(0x14, slotTextures[i]);
        slots[i].x = (f32)texture->x;
        slots[i].y = (f32)texture->y;
    }
    PanelTexture *texture = asdTMTexTableEntryAt(0x14, 0x46);
    anchors[2].x = (f32)texture->x;
    anchors[2].y = (f32)texture->y;
    texture = asdTMTexTableEntryAt(0x14, 0x47);
    anchors[3].x = (f32)texture->x;
    anchors[3].y = (f32)texture->y;
    texture = asdTMTexTableEntryAt(0x14, 0x48);
    anchors[4].x = (f32)texture->x;
    anchors[4].y = (f32)texture->y;
    texture = asdTMTexTableEntryAt(0x14, 0x51);
    anchors[0].x = (f32)texture->x;
    anchors[0].y = (f32)texture->y;
    texture = asdTMTexTableEntryAt(0x14, 0x52);
    anchors[1].x = (f32)texture->x;
    anchors[1].y = (f32)texture->y;
    anchors[0].y = anchors[1].y;
    scale = (f32) * (s16 *)texture->record;
    color = packColor((const ColorRecord *)asdTMTexTableEntryAt(0x14, 0x6b)->record);
    shadowColor = packColor((const ColorRecord *)asdTMTexTableEntryAt(0x14, 0x6e)->record);
    asdTMTexTableGetNodeTexture(0x14, 3)->mode = 3;
    asdTMTexTableGetNodeTexture(0x14, 2)->mode = 2;
}
