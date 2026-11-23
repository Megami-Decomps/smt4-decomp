/* NON_MATCHING: saved draw arguments, numeric-call stack setup and HP coordinate temporaries use different registers; portrait conversion and cycling marker remainder now follow retail. */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "ui/UiControl.h"
#include "ui/PartnerCard.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

s32 btlUnitMaxHp(SlotRecordA *unit);
void efctSetSpeed(f32 speed);
void numberFontDrawFormatted(u32 a, s32 x, s32 y, u32 b, u32 c, u32 tag, const char *format, s32 value);
void FUN_00183788(s32 hp, s32 maxHp, u32 a, u32 b, u32 group, u32 id0, u32 id1, u32 id2, u32 id3, s32 x, s32 y, u32 tag,
                  u32 c);
s32 valueAtMostFifthOfTotal(s32 value, s32 total);
void drawSetColorFromRGBA8(u32 color);
void gxResetColorQuadToWhite(void);
void uiDrawItemOrStatusIcon(s16 portrait, s32 x, s32 y, u32 id, u32 flag);

/* Draws partner card `slot` for `unit` at (`x`, `y`) with fade `scale`: the card frame, level, hp
 * gauge and number, the cycling marker icon, then the extras. Several owned markers cycle every
 * 24 frames. */
void FUN_004bde34(PartnerCardScreen *screen, SlotRecordA *unit, s32 slot, s32 x, s32 y, f32 scale)
{
    u16 portrait = unit->id;
    u32 level = unit->level;
    s32 hp = unit->hp;
    s32 maxHp = btlUnitMaxHp(unit);
    u16 flags = unit->ailments;

    if (screen->mode == 2 && screen->active[slot] == 0) {
        scale = scale * 0.5f;
    }
    efctSetSpeed(scale);
    if ((flags & 2) != 0) {
        efctSetSpeed(scale * 0.5f);
    }
    texDrawTableEntryAtStoredOrigin(2, 0x11, 2000, x, y, 0x65);
    texDrawTableEntryAtStoredOrigin(2, 0x11, 2, x, y, 0x65);
    texDrawTableEntryAtStoredOrigin(2, 0x11, 0x99, x, y, 0x6F);
    texDrawTableEntryAtStoredOrigin(2, 0x11, 0x9A, x, y, 0x6F);
    texDrawTableEntryAtStoredOrigin(2, 0x11, 0x98, x, y, 0x6F);
    TextureTableEntryIV *levelBox = asdTMTexTableEntryAt(0x11, 0x9D);

    numberFontDrawFormatted(0, levelBox->x + x, levelBox->y + y, 1, 3, 0x79, "%d", level);
    efctSetSpeed(scale);
    texDrawTableEntryAtStoredOrigin(2, 0x11, 0x9E, x, y, 0x6F);
    texDrawTableEntryAtStoredOrigin(2, 0x11, 0x77, x, y, 0x79);
    FUN_00183788(hp, maxHp, 0, 0, 0x11, 0x9F, 0xA2, 0xA0, 0xA1, x, y, 0x74, 0);
    TextureTableEntryIV *hpBox = asdTMTexTableEntryAt(0x11, 0xAA);
    s32 hpX = hpBox->x + x;
    s32 hpY = hpBox->y + y;

    if (valueAtMostFifthOfTotal(hp, maxHp) != 0) {
        drawSetColorFromRGBA8(0xDC0F14FF);
    }
    efctSetSpeed(scale);
    numberFontDrawFormatted(10, hpX, hpY, 1, 4, 0x79, "%d", hp);
    gxResetColorQuadToWhite();
    TextureTableEntryIV *markerBox = asdTMTexTableEntryAt(0x11, 0xAC);
    s32 markerX = markerBox->x + x;
    s32 markerY = markerBox->y + y;
    u32 color = 0xFFFFFFFF;
    s32 owned = 0;

    for (s32 kind = 1; kind < 14; kind++) {
        if ((flags & (1 << kind)) != 0) {
            if (screen->marker[slot] == owned) {
                color = markerKindGetColor((s16)kind);
                break;
            }
            owned++;
        }
    }
    drawSetColorFromRGBA8(color);
    efctSetSpeed(scale);
    uiDrawItemOrStatusIcon(portrait, markerX, markerY, 0x9C, 0);
    gxResetColorQuadToWhite();
    s32 count = 0;

    for (s32 kind = 1; kind < 14; kind++) {
        if ((unit->ailments & (1 << kind)) != 0) {
            count++;
        }
    }
    if (count > 1) {
        screen->cycle[slot]++;
        if (screen->cycle[slot] >= 24) {
            screen->marker[slot] = (screen->marker[slot] + 1) % count;
            screen->cycle[slot] = 0;
        }
    }
    partnerCardDrawAilmentMarker(screen, unit, slot, x, y, scale);
    efctSetSpeed(1.0f);
}

}
