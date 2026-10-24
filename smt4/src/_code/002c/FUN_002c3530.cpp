/* NON_MATCHING: only r2/ip allocation differs (retail keeps the globals base in r2 and the preset id in ip) */
#include "common.h"

struct Vec3f {
    f32 x, y, z;
};

struct GxPreset {
    u8 data[0x3C];
};

struct GxPresetParams {
    Vec3f position;  // 0x00
    f32 weight;      // 0x0C
};

struct GxPresets {
    u8 unk000[0x84];           // 0x000
    s32 busy;                  // 0x084
    GxPreset presets[3];       // 0x088
    u8 unk13C[0x38];           // 0x13C
    GxPresetParams params[2];  // 0x174
    u8 unk194[0x10];           // 0x194
    f32 extra[2];              // 0x1A4
    u8 unk1AC[4];              // 0x1AC
    u32 ids[2];                // 0x1B0
};

extern "C" {

extern GxPresets g_asdGxPresets;

void FUN_00119750(GxPreset *preset, void *data, u32 id, s32 mode, u32 arg, Vec3f position, f32 weight, f32 extra);

/* Starts preset 0, 1 or 2 (2 only when the system is not busy); presets 0 and 1 use parameter set 0, preset 2 set 1. */
void FUN_002c3530(s32 preset, u32 arg, u32 unused, s32 index)
{
    GxPreset *selected = NULL;

    if (preset == 0) {
        index = 0;
        selected = &g_asdGxPresets.presets[0];
    } else if (preset == 1) {
        index = 0;
        selected = &g_asdGxPresets.presets[1];
    } else if (preset == 2) {
        if (g_asdGxPresets.busy == 1) {
            return;
        }
        index = 1;
        selected = &g_asdGxPresets.presets[2];
    }
    FUN_00119750(selected, selected->data + 0x18, g_asdGxPresets.ids[index], 7, arg,
                 g_asdGxPresets.params[index].position, g_asdGxPresets.params[index].weight,
                 g_asdGxPresets.extra[index]);
}

} /* extern "C" */
