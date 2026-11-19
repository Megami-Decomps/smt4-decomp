/* NON_MATCHING: readable rebuild of the party member card draw; armcc here keeps the offset pairs and the 0.5664f speed in different registers (retail holds the speed in s16 and the VFP conversions in d8/d9 across the calls), and the layout positions come from calls the draft passed through unchanged. */
#include "common.h"
#include <stdio.h>
#include "addon/PackageSelection.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include <string.h>
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void sysMemClear(void *block, s32 bytes);
void efctSetSpeed(f32 speed);
u32 FUN_004038e0(u32 effect, u16 kind);
void drawSetColorFromRGBA8(u32 color);
void gxResetColorQuadToWhite(void);
void *gameGetPlayerData(void);
const char *gameGetPlayerName(void);
void efctPlayVariantSet(u32 effect, s32 x, s32 y, s32 sprite, u32 a, u32 b);

/* Draws one party member card at (x, y): its frame, name and optional badge. */
void FUN_00404f40(u32 effect, u16 cardId, s32 x, s32 y, f32 speed, u32 arg5, u32 arg6, u32 font)
{
    u8 text[128];
    PackageSelectableRecord *card = contentFindRecordById(cardId);
    if (card == NULL)
        return;
    sysMemClear(text, 0x80);
    efctSetSpeed(speed);
    u32 frameSprite = FUN_004038e0(effect, card->content.kind);
    switch (card->content.kind) {
    case 2: case 4: case 6: case 8: case 10: case 12: case 14: case 16: case 18: {
        drawSetColorFromRGBA8(0x57D8FFFF);
        TextureTableEntryIV *shadow = asdTMTexTableEntryAt(0x32, 0x97);
        texDrawTableEntryAtStoredOrigin(2, 0x32, 1000, shadow->x + x, shadow->y + y, 0x6A);
        TextureTableEntryIV *frame = asdTMTexTableEntryAt(0x32, 0x96);
        s32 frameX = frame->x + x;
        s32 frameY = frame->y + y;
        texDrawTableEntryAtStoredOrigin(2, 0x32, frameSprite, frameX, frameY, 0x6B);
        texDrawTableEntryAtStoredOrigin(2, 0x32, 0x3F1, frameX, frameY, 0x6B);
        gxResetColorQuadToWhite();
        break;
    }
    default: {
        TextureTableEntryIV *shadow = asdTMTexTableEntryAt(0x32, 0x97);
        texDrawTableEntryAtStoredOrigin(2, 0x32, 1000, shadow->x + x, shadow->y + y, 0x6A);
        TextureTableEntryIV *frame = asdTMTexTableEntryAt(0x32, 0x96);
        texDrawTableEntryAtStoredOrigin(2, 0x32, frameSprite, frame->x + x, frame->y + y, 0x6B);
        break;
    }
    }
    TextureTableEntryIV *namePoint = asdTMTexTableEntryAt(0x32, 0x98);
    s16 nameX = namePoint->x;
    s16 nameY = namePoint->y;
    const char *name = card->content.name;
    if (strcmp(card->content.name, "<pc 0>") == 0) {
        gameGetPlayerData();
        name = gameGetPlayerName();
    }
    sprintf((char *)text, "%s", name);
    textDrawString(3, font, (const char *)text, (f32)(nameX + x), (f32)(nameY + y), 0.56640625f, 0.0f, speed);
    TextureTableEntryIV *badge = asdTMTexTableEntryAt(0x32, 0x99);
    efctPlayVariantSet(effect, badge->x + x, badge->y + y, 0x79, arg5, arg6);
    if (card->content.badge != 0) {
        efctSetSpeed(speed);
        TextureTableEntryIV *mark = asdTMTexTableEntryAt(0x32, 0x9A);
        x += mark->x;
        y += mark->y;
        texDrawTableEntryAtStoredOrigin(2, 0x32, 0x9C, x, y, 0x79);
        texDrawTableEntryAtStoredOrigin(2, 0x32, 0x9D, x, y, 0x7A);
    }
    efctSetSpeed(1.0f);
}

} /* extern "C" */
