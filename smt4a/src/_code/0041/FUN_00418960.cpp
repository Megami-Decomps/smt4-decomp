/* NON_MATCHING: retail addresses each marker as panel + i*16 with the fields at +4..+0x13 (no folded +4 base) and keeps the constants 0x41/2 in registers across the loop (179 vs 181 rows). */
#include "common.h"

extern "C" {

/* One map marker (0x10 bytes). */
typedef struct MapMarker {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ u8 shown;
    /* 0x09 */ u8 kind;
    /* 0x0A */ s8 flagA;
    /* 0x0B */ s8 flagB;
    /* 0x0C */ s8 flagC;
    /* 0x0D */ s8 flagD;
    /* 0x0E */ s8 flagE;
    /* 0x0F */ u8 visible;
} MapMarker;

/* The marker panel (only the fields used here). */
typedef struct MarkerPanel {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ MapMarker markers[5];
    /* 0x54 */ s32 page;
    /* 0x58 */ f32 scale[2];
} MarkerPanel;

extern u32 g_renderCtx;

f32 renderCtxCalculateStereoParallax(u32 context, f32 depth);
void FUN_003d3020(u32 id, s32 a, s32 b, f32 x, f32 y, f32 scaleX, f32 scaleY);
void FUN_001835b4(u32 a, u32 b, u32 icon, s32 x, s32 y, u32 tag);

/* Draws the five map markers of the panel: the marker body, an icon picked from its kind and
 * flags, and the extra overlay icons for the kinds that have them. The x position is shifted by
 * the stereo parallax. */
void FUN_00418960(MarkerPanel *panel)
{
    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.7f);

    for (s32 i = 0; i < 5; i++) {
        MapMarker *marker = &panel->markers[i];
        s32 look;
        u32 icon;

        if (marker->visible == 0) {
            continue;
        }
        if (marker->flagB != 0 || marker->flagC != 0) {
            FUN_003d3020(0x41, marker->flagB, marker->flagC, marker->x + (f32)parallax, marker->y, panel->scale[0],
                         panel->scale[1]);
        }
        if (marker->shown == 0) {
            look = 3;
        } else {
            switch (marker->kind) {
            case 0:
            case 5:
                look = marker->flagA != 0 ? 1 : 0;
                break;
            case 1:
                look = marker->flagE != 0 ? 8 : 4;
                break;
            case 2:
                look = marker->flagD != 0 ? 7 : 2;
                break;
            case 3:
                look = 5;
                break;
            case 4:
                look = marker->flagE != 0 ? 9 : 6;
                break;
            default:
                look = 0;
                break;
            }
        }
        icon = 0x33;
        switch (look) {
        case 1:
            icon = 0x34;
            break;
        case 2:
            icon = panel->page > 0 ? 0x72 : 0x71;
            break;
        case 3:
            icon = panel->page > 0 ? 0x74 : 0x73;
            break;
        case 4:
        case 5:
        case 6:
            icon = panel->page > 0 ? 0x76 : 0x75;
            break;
        case 7:
            icon = panel->page > 0 ? 0x7B : 0x7A;
            break;
        case 8:
            icon = panel->page > 0 ? 0x7D : 0x7C;
            break;
        }
        FUN_001835b4(2, 12, icon, (s32)(marker->x + (f32)parallax), (s32)marker->y, 0x42);
        if (look == 4 || look == 8) {
            FUN_001835b4(2, 12, 0x77, (s32)(marker->x + (f32)parallax), (s32)marker->y, 0x43);
        }
        if (look == 5) {
            FUN_001835b4(2, 12, 0x78, (s32)(marker->x + (f32)parallax), (s32)marker->y, 0x43);
        } else if (look == 6 || look == 9) {
            FUN_001835b4(2, 12, 0x79, (s32)(marker->x + (f32)parallax), (s32)marker->y, 0x43);
        }
    }
}

}
