/* NON_MATCHING: the 48-byte target structs are copied word by word through ldm/stm pairs in different register groups, and retail builds the two layout rows into one frame area before calling; the preset logic is the same. */
#include "common.h"

extern "C" {

/* A screen target description returned by the preset query (48 bytes). */
typedef struct GxTarget {
    u32 words[12];
} GxTarget;

/* The layout record handed to the third region (48 bytes). */
typedef struct GxLayout {
    f32 scale;
    s32 height;
    s32 width;
    s32 flagsA;
    s32 idA;
    s32 mode;
    s32 idB;
    s32 height2;
    s32 width2;
    s32 flagsB;
    s32 idC;
    s32 mode2;
} GxLayout;

/* A 0x3C-byte preset region; two word pairs of it mirror into the other regions. */
typedef struct GxRegion {
    u32 unk00[2];
    u32 first[2];       /* 0x08 */
    u32 unk10[6];
    u32 second[2];      /* 0x20 */
    u32 unk28[5];
} GxRegion;

typedef struct GxPresets {
    /* 0x000 */ u8 unk000[0x84];
    /* 0x084 */ s32 topScreen;            /* 1 while the top screen target is the one set */
    /* 0x088 */ GxRegion regions[3];      /* regions at 0x88, 0xC4, 0x100 */
    /* 0x13C */ u8 unk13c[0xB8];
    /* 0x1F4 */ s32 applied;              /* nonzero: the regions are already in use */
    /* 0x1F8 */ f32 scale;
} GxPresets;

extern GxPresets g_asdGxPresets;

GxTarget FUN_002bc560(s32 kind, s32 size);
void FUN_002bc38c(GxRegion *region, const void *source, s32 flag);

/* Sets the display presets: the top screen's target alone, or the bottom screen's target, layout
 * and its 3D target (mirrored into the other regions on the first application). */
void FUN_0010ea10(s32 top, s32 size, s32 mode)
{
    s32 widthKind = size;
    s32 heightKind = size;

    if (mode == 0) {
        widthKind = 0x500;
    } else if (mode == 1) {
        heightKind = 0x500;
    }
    if (top != 0) {
        GxTarget target = FUN_002bc560(1, size);

        FUN_002bc38c(&g_asdGxPresets.regions[0], &target, 1);
        g_asdGxPresets.topScreen = 1;
        return;
    }
    GxTarget bottom = FUN_002bc560(0, heightKind);
    s32 rows = widthKind == 0x501 || widthKind == 0x502 ? 2 : 1;
    s32 columns = widthKind == 0x502 ? 2 : 1;
    GxLayout layout;

    layout.scale = g_asdGxPresets.scale;
    layout.height = rows * 240;
    layout.width = columns * 320;
    layout.flagsA = 0x20000;
    layout.idA = 0x8CE0;
    layout.mode = widthKind;
    layout.idB = 0x88F0;
    layout.height2 = rows * 240;
    layout.width2 = columns * 320;
    layout.flagsB = 0x30000;
    layout.idC = 0x821A;
    layout.mode2 = widthKind;
    GxTarget third = FUN_002bc560(0, heightKind);

    if (g_asdGxPresets.applied != 0) {
        FUN_002bc38c(&g_asdGxPresets.regions[0], &bottom, 1);
        FUN_002bc38c(&g_asdGxPresets.regions[2], &layout, 1);
        FUN_002bc38c(&g_asdGxPresets.regions[1], &third, 1);
    } else {
        FUN_002bc38c(&g_asdGxPresets.regions[0], &bottom, 0);
        FUN_002bc38c(&g_asdGxPresets.regions[2], &layout, 0);
        FUN_002bc38c(&g_asdGxPresets.regions[1], &third, 0);
        g_asdGxPresets.regions[2].first[0] = g_asdGxPresets.regions[0].first[0];
        g_asdGxPresets.regions[2].first[1] = g_asdGxPresets.regions[0].first[1];
        g_asdGxPresets.regions[1].first[0] = g_asdGxPresets.regions[0].first[0];
        g_asdGxPresets.regions[1].first[1] = g_asdGxPresets.regions[0].first[1];
        g_asdGxPresets.regions[2].second[0] = g_asdGxPresets.regions[0].second[0];
        g_asdGxPresets.regions[2].second[1] = g_asdGxPresets.regions[0].second[1];
        g_asdGxPresets.regions[1].second[0] = g_asdGxPresets.regions[0].second[0];
        g_asdGxPresets.regions[1].second[1] = g_asdGxPresets.regions[0].second[1];
    }
    g_asdGxPresets.topScreen = 0;
}

}
