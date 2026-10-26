/* NON_MATCHING: saved draw arguments, numeric-call stack setup and HP coordinate temporaries use different registers; portrait conversion and cycling marker remainder now follow retail. */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "ui/UiControl.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

/* A party unit record (only the fields read here). */
typedef struct PartnerCardUnit {
    /* 0x00 */ u8 unk00[0x2A];
    /* 0x2A */ s16 hp;
    /* 0x2C */ u8 unk2c[0x34];
    /* 0x60 */ u16 flags;               /* bit 1: dimmed; bits 1..13: owned marker kinds */
    /* 0x62 */ u16 portrait;
    /* 0x64 */ u16 level;
} PartnerCardUnit;


/* The partner screen (only the fields used here, by their offsets). */
typedef struct PartnerCardScreen {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u8 mode;
    /* 0x005 */ u8 unk005[0x333];
    /* 0x338 */ u8 active[16];
    /* 0x348 */ s32 cycle[12];          /* frames each slot's marker has been shown */
    /* 0x378 */ s32 marker[12];         /* which owned marker each slot shows */
} PartnerCardScreen;

s32 FUN_002b4dcc(PartnerCardUnit *unit);
void efctSetSpeed(f32 speed);
void FUN_00180310(u32 a, s32 x, s32 y, u32 b, u32 c, u32 tag, const char *format, s32 value);
void FUN_00183788(s32 hp, s32 maxHp, u32 a, u32 b, u32 group, u32 id0, u32 id1, u32 id2, u32 id3, s32 x, s32 y, u32 tag,
                  u32 c);
s32 valueAtMostFifthOfTotal(s32 value, s32 total);
void drawSetColorFromRGBA8(u32 color);
void FUN_00183bb0(void);
void FUN_0018152c(s16 portrait, s32 x, s32 y, u32 id, u32 flag);
void FUN_004bda84(PartnerCardScreen *screen, PartnerCardUnit *unit, s32 slot, s32 x, s32 y, f32 scale);

/* Draws partner card `slot` for `unit` at (`x`, `y`) with fade `scale`: the card frame, level, hp
 * gauge and number, the cycling marker icon, then the extras. Several owned markers cycle every
 * 24 frames. */
void FUN_004bde34(PartnerCardScreen *screen, PartnerCardUnit *unit, s32 slot, s32 x, s32 y, f32 scale)
{
    u16 portrait = unit->portrait;
    u32 level = unit->level;
    s32 hp = unit->hp;
    s32 maxHp = FUN_002b4dcc(unit);
    u16 flags = unit->flags;

    if (screen->mode == 2 && screen->active[slot] == 0) {
        scale = scale * 0.5f;
    }
    efctSetSpeed(scale);
    if ((flags & 2) != 0) {
        efctSetSpeed(scale * 0.5f);
    }
    FUN_001835b4(2, 0x11, 2000, x, y, 0x65);
    FUN_001835b4(2, 0x11, 2, x, y, 0x65);
    FUN_001835b4(2, 0x11, 0x99, x, y, 0x6F);
    FUN_001835b4(2, 0x11, 0x9A, x, y, 0x6F);
    FUN_001835b4(2, 0x11, 0x98, x, y, 0x6F);
    TextureTableEntryIV *levelBox = asdTMTexTableEntryAt(0x11, 0x9D);

    FUN_00180310(0, levelBox->x + x, levelBox->y + y, 1, 3, 0x79, "%d", level);
    efctSetSpeed(scale);
    FUN_001835b4(2, 0x11, 0x9E, x, y, 0x6F);
    FUN_001835b4(2, 0x11, 0x77, x, y, 0x79);
    FUN_00183788(hp, maxHp, 0, 0, 0x11, 0x9F, 0xA2, 0xA0, 0xA1, x, y, 0x74, 0);
    TextureTableEntryIV *hpBox = asdTMTexTableEntryAt(0x11, 0xAA);
    s32 hpX = hpBox->x + x;
    s32 hpY = hpBox->y + y;

    if (valueAtMostFifthOfTotal(hp, maxHp) != 0) {
        drawSetColorFromRGBA8(0xDC0F14FF);
    }
    efctSetSpeed(scale);
    FUN_00180310(10, hpX, hpY, 1, 4, 0x79, "%d", hp);
    FUN_00183bb0();
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
    FUN_0018152c(portrait, markerX, markerY, 0x9C, 0);
    FUN_00183bb0();
    s32 count = 0;

    for (s32 kind = 1; kind < 14; kind++) {
        if ((unit->flags & (1 << kind)) != 0) {
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
    FUN_004bda84(screen, unit, slot, x, y, scale);
    efctSetSpeed(1.0f);
}

}
