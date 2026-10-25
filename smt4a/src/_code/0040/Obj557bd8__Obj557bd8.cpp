/* NON_MATCHING: only the two packed-color computations differ: retail loads the RGBA floats with scalar vldr (b/a as a vldm pair in the first) and a different scheduling. */
#include "common.h"
#include "classes/Obj557bd8.h"
#include "shard/S1ListPanel.h"

struct ColorRecord {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ f32 r, g, b, a;
};

struct TexHeader {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 mode;
};

extern "C" {
s32 textFormatBuffer(char *output, const char *format, ...);
SpriteInfo *asdTMTexTableEntryAt(u32 group, s32 id);
TexHeader *asdTMTexTableGetHeaderValue(u32 group, s32 index);
}

/* Builds the target selection information panel: sprite metrics, colors and texture modes. */
Obj557bd8::Obj557bd8()
{
    textFormatBuffer(labelText, "");
    textFormatBuffer(detailText, "");
    labelMode = 1;
    labelVisible = 0;
    detailVisible = 0;
    detailMode = 2;
    slotOrder[0] = 0;
    slotOrder[1] = 1;
    slotOrder[2] = 2;
    slotOrder[3] = 3;
    slotOrder[4] = 4;
    slotOrder[5] = 5;
    slotState[0] = 0;
    slotState[1] = 1;
    slotState[2] = 0;
    slotState[3] = 0;
    slotState[4] = 0;
    slotState[5] = 0;
    slotState[6] = 0;
    slotState[7] = 0;

    SpriteInfo *sprite = asdTMTexTableEntryAt(12, 70);
    iconPos[0][0] = sprite->x;
    iconPos[0][1] = sprite->y;
    sprite = asdTMTexTableEntryAt(12, 71);
    iconPos[1][0] = sprite->x;
    iconPos[1][1] = sprite->y;
    sprite = asdTMTexTableEntryAt(12, 72);
    iconPos[2][0] = sprite->x;
    iconPos[2][1] = sprite->y;
    sprite = asdTMTexTableEntryAt(12, 81);
    frameSize[0][0] = sprite->x;
    frameSize[0][1] = sprite->y;
    sprite = asdTMTexTableEntryAt(12, 82);
    frameSize[1][0] = sprite->x;
    frameSize[1][1] = sprite->y;
    frameSize[0][1] = frameSize[1][1];
    barWidth = sprite->size[0];
    const ColorRecord *color = (const ColorRecord *)asdTMTexTableEntryAt(12, 107)->size;
    colorA = ((u32)(color->r * 255.0f) << 24) | ((u32)(color->g * 255.0f) << 16) | ((u32)(color->b * 255.0f) << 8) |
             (u32)(color->a * 255.0f);
    color = (const ColorRecord *)asdTMTexTableEntryAt(12, 110)->size;
    colorB = ((u32)(color->r * 255.0f) << 24) | ((u32)(color->g * 255.0f) << 16) | ((u32)(color->b * 255.0f) << 8) |
             (u32)(color->a * 255.0f);
    asdTMTexTableGetHeaderValue(12, 3)->mode = 3;
    asdTMTexTableGetHeaderValue(12, 2)->mode = 2;
}
