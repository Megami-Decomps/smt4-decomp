/* NON_MATCHING: the 0x401 preset choice compiles to addeq + branch (retail addne/addeq), and argument staging/scheduling for the 11-argument call differs (retail saves r5, 28-byte frame). */
#include "common.h"

namespace {
struct GxScreenPreset {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u8 unk0c[0x24];
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u32 unk34;
    /* 0x38 */ u32 clearValue;
};

struct GxScreenPresetTable {
    /* 0x000 */ u8 unk000[0x84];
    /* 0x084 */ s32 useFirstForSecondScreen;
    /* 0x088 */ GxScreenPreset presets[3];
    /* 0x13C */ u8 unk13c[0xc0];
    /* 0x1FC */ u32 unk1fc;
    /* 0x200 */ u8 clearEnabled[2]; /* per screen; 0 forces the 0x500 clear value */
};

struct GxScreenRequest {
    /* 0x00 */ s32 kind;
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ s32 bufferIndex;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1c;
    /* 0x20 */ u32 buffers[1];
};
}

extern "C" {

extern GxScreenPresetTable g_asdGxPresets;
void FUN_0013727c(u32 a, u32 b, u32 c, u32 d, u32 buffer, u32 e, u32 f, u32 g, u32 clearValue, s32 h, s32 i);

/* Apply the screen preset that matches the request's screen kind. */
void FUN_002bc120(GxScreenRequest *request, s32 alternate)
{
    GxScreenPreset *preset = NULL;
    s32 screen = 0;
    u32 clearValue;

    switch (request->kind) {
    case 0x400:
        preset = &g_asdGxPresets.presets[0];
        break;
    case 0x401:
        screen = 1;
        if (g_asdGxPresets.useFirstForSecondScreen) {
            preset = &g_asdGxPresets.presets[0];
        } else {
            preset = &g_asdGxPresets.presets[2];
        }
        break;
    case 0x410:
        if (alternate) {
            preset = &g_asdGxPresets.presets[1];
        } else {
            preset = &g_asdGxPresets.presets[0];
        }
        break;
    }
    clearValue = preset->clearValue;
    if (!g_asdGxPresets.clearEnabled[screen]) {
        clearValue = 0x500;
    }
    FUN_0013727c(preset->unk08, preset->unk30, preset->unk34, preset->unk00,
        request->buffers[request->bufferIndex], request->unk18, request->unk1c, g_asdGxPresets.unk1fc,
        clearValue, 0, 8);
}

} /* extern "C" */
