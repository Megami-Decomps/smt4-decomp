/* NON_MATCHING: readable rebuild of the screen fade start; retail computes the fade rate with the three loads interleaved before the request is built and keeps the vector grow path (allocatorWordVectorPush, inlined) in a different register assignment than armcc here. */
#include "classes/AllocatorWordVector.h"

/* The fade settings inside g_gfxSettings. */
struct GfxFadeSettings {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 enabled;
    /* 0x02 */ u8 dirty;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ s8 mode;
    /* 0x05 */ u8 unk05[0x3B];
    /* 0x40 */ s32 holdFrames;
    /* 0x44 */ u8 unk44[8];
    /* 0x4C */ f32 nearValue;
    /* 0x50 */ f32 farValue;
    /* 0x54 */ u8 unk54[4];
    /* 0x58 */ u32 color;
    /* 0x5C */ f32 depth;
    /* 0x60 */ u8 unk60[0x20];
    /* 0x80 */ u32 handle;
};

/* The request the fade object is created from (0x1C bytes). */
struct FadeRequest {
    /* 0x00 */ u32 color;
    /* 0x04 */ u32 colorCopy;
    /* 0x08 */ u32 flags;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u8 enabled;
    /* 0x11 */ u8 cullBack;
    /* 0x12 */ u8 unk12[2];
    /* 0x14 */ f32 rate;
    /* 0x18 */ u8 unk18;
};

/* A fade target whose first word is mirrored from the newest fade. */
struct FadeMirror {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 value;
};

extern "C" {
extern GfxFadeSettings g_gfxSettings;
extern AllocatorWordVector DAT_004dae60;
extern FadeMirror *DAT_00472950;
extern FadeMirror *DAT_00472958;

u32 asdMemoryGetDefaultAllocator(void);
u32 FUN_00120584(const FadeRequest *request, u32 allocator);
void FUN_002bd498(u32 *handle, u32 allocator, s32 arg);
u32 FUN_0011f8b8(u32 allocator, u32 handle);

/* Starts a screen fade of `color` with the given flags: builds the request from the current
 * settings, registers the new fade object and mirrors it into the two fade targets. */
void FUN_0010bb84(u32 color, u32 flags)
{
    if (!g_gfxSettings.enabled)
        return;
    if (g_gfxSettings.holdFrames > 0)
        return;
    if (g_gfxSettings.handle != 0)
        return;
    bool cullBack = g_gfxSettings.mode != 2;
    g_gfxSettings.color = color;
    u32 allocator = asdMemoryGetDefaultAllocator();
    FadeRequest request;
    request.unk0C = 0;
    request.unk18 = 0;
    request.color = g_gfxSettings.color;
    request.enabled = 1;
    request.colorCopy = g_gfxSettings.color;
    request.flags = flags | 0x2000000;
    request.cullBack = cullBack;
    request.rate = (g_gfxSettings.depth * g_gfxSettings.nearValue) / (g_gfxSettings.farValue - g_gfxSettings.nearValue);
    g_gfxSettings.handle = FUN_00120584(&request, allocator);
    FUN_002bd498(&g_gfxSettings.handle, asdMemoryGetDefaultAllocator(), 0);
    u32 object = FUN_0011f8b8(asdMemoryGetDefaultAllocator(), g_gfxSettings.handle);
    if (allocatorWordVectorPush(&DAT_004dae60, object)) {
        if (DAT_00472950 != NULL)
            DAT_00472950->value = *DAT_004dae60.begin;
        if (DAT_00472958 != NULL)
            DAT_00472958->value = *DAT_004dae60.begin;
        g_gfxSettings.dirty = 1;
    }
}

} /* extern "C" */
