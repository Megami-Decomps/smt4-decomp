/* NON_MATCHING: amount and X saved registers are exchanged, and one icon-call argument move is scheduled differently. */
#include <stdio.h>
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
u32 requestKindToId(u32 kind);
void texTableRecordCallWithParams(u32 screen, u32 table, s32 index, u32 x, u32 y, u32 layer);
void drawSetColorFromRGBA8(u32 color);
void statRowDrawValueImpl(u32 screen, s32 x, s32 y, s32 mode, s32 font, s32 layer,
                  const char *format, ...);
void gxResetColorQuadToWhite();

void drawParameterChangeBadge(u32 kind, s32 amount, s32 x, s32 y, s32 layer)
{
    char sign[64];
    u32 icon = requestKindToId(kind);
    u32 color;
    if (amount < 0) {
        sprintf(sign, "-");
        color = 0xdc0f14ff;
    } else {
        sprintf(sign, "+");
        color = 0x72e027ff;
    }
    if (kind == 14) {
        drawSetColorFromRGBA8(color);
        texDrawTableEntryAtStoredOrigin(2, 11, 0x3f5, x, y, layer);
        texTableRecordCallWithParams(2, 11, 0x41e, x, y, layer);
        gxResetColorQuadToWhite();
        return;
    }
    texDrawTableEntryAtStoredOrigin(2, 11, 0x3f5, x, y, layer);
    texTableRecordCallWithParams(2, 11, icon, x, y, layer);
    drawSetColorFromRGBA8(color);
    const TextureTableEntryIV *info = asdTMTexTableEntryAt(11, 0x402);
    statRowDrawValueImpl(2, info->x + x, info->y + y, 0, 1, layer + 1, sign);
    info = asdTMTexTableEntryAt(11, 0x401);
    if (amount < 0) {
        amount = -(u32)amount;
    }
    statRowDrawValueImpl(2, info->x + x, info->y + y, 0, 1, layer + 1, "%d", amount);
    gxResetColorQuadToWhite();
}
}
