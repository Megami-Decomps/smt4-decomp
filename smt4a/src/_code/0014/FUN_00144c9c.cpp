/* NON_MATCHING: the 48-byte target structs are copied word by word through ldm/stm pairs in different register groups, and retail builds the two layout rows into one frame area before calling; the preset logic is the same. */
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
/* A screen target description returned by the preset query (48 bytes). */
typedef struct GxTarget {
    u32 words[12];
} GxTarget;

/* The layout record handed to the third region (48 bytes). */
typedef struct GxLayout {
    u32 colorFormat;
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

GxTarget FUN_001550b8(s32 kind, s32 size);
void FUN_00153084(AsdGxFramebuffer *framebuffer, const void *source, s32 allocated);

/* Sets the display presets: the top screen's target alone, or the bottom screen's target, layout
 * and its 3D target (its buffers mirrored into the other framebuffers on the first application). */
void FUN_00144c9c(s32 top, s32 size, s32 mode)
{
    s32 widthKind = size;
    s32 heightKind = size;

    if (mode == 0) {
        widthKind = 0x500;
    } else if (mode == 1) {
        heightKind = 0x500;
    }
    if (top != 0) {
        GxTarget target = FUN_001550b8(1, size);

        FUN_00153084(&g_asdGxPresets.framebuffers[0], &target, 1);
        g_asdGxPresets.sharePrimaryFramebuffer = 1;
        return;
    }
    GxTarget bottom = FUN_001550b8(0, heightKind);
    s32 rows = widthKind == 0x501 || widthKind == 0x502 ? 2 : 1;
    s32 columns = widthKind == 0x502 ? 2 : 1;
    GxLayout layout;

    layout.colorFormat = g_asdGxPresets.colorFormat;
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
    GxTarget third = FUN_001550b8(0, heightKind);

    if (g_asdGxPresets.displayMode != 0) {
        FUN_00153084(&g_asdGxPresets.framebuffers[0], &bottom, 1);
        FUN_00153084(&g_asdGxPresets.framebuffers[2], &layout, 1);
        FUN_00153084(&g_asdGxPresets.framebuffers[1], &third, 1);
    } else {
        FUN_00153084(&g_asdGxPresets.framebuffers[0], &bottom, 0);
        FUN_00153084(&g_asdGxPresets.framebuffers[2], &layout, 0);
        FUN_00153084(&g_asdGxPresets.framebuffers[1], &third, 0);
        g_asdGxPresets.framebuffers[2].color.buffer = g_asdGxPresets.framebuffers[0].color.buffer;
        g_asdGxPresets.framebuffers[2].color.unk0C = g_asdGxPresets.framebuffers[0].color.unk0C;
        g_asdGxPresets.framebuffers[1].color.buffer = g_asdGxPresets.framebuffers[0].color.buffer;
        g_asdGxPresets.framebuffers[1].color.unk0C = g_asdGxPresets.framebuffers[0].color.unk0C;
        g_asdGxPresets.framebuffers[2].depth.buffer = g_asdGxPresets.framebuffers[0].depth.buffer;
        g_asdGxPresets.framebuffers[2].depth.unk0C = g_asdGxPresets.framebuffers[0].depth.unk0C;
        g_asdGxPresets.framebuffers[1].depth.buffer = g_asdGxPresets.framebuffers[0].depth.buffer;
        g_asdGxPresets.framebuffers[1].depth.unk0C = g_asdGxPresets.framebuffers[0].depth.unk0C;
    }
    g_asdGxPresets.sharePrimaryFramebuffer = 0;
}

}
