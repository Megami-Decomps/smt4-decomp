/* NON_MATCHING: retail stores each size pair as separate words (only the last pair as stm) and sets the owner pointer early; the built stores merge into strd/stm in a different grouping. */
#include "common.h"

struct ScreenSize {
    s32 height;
    s32 width;

    ScreenSize() {}
    ScreenSize(s32 h, s32 w) : height(h), width(w) {}
};

struct ScreenConfig {
    s32 mode;           // 0x00
    u8 enabled;         // 0x04
    u8 dirty;           // 0x05
    s32 height;         // 0x08
    s32 width;          // 0x0c
    f32 viewport[4];    // 0x10
    ScreenConfig *owner; // 0x20
    s32 unk24;          // 0x24
    u8 format;          // 0x28
    s32 height2;        // 0x2c
    s32 width2;         // 0x30
    f32 scale;          // 0x34
    u8 unk38;           // 0x38
    ScreenConfig *owner2; // 0x3c
    ScreenSize size3;   // 0x40
};

extern "C" {

// Initialise the screen configuration to the 400x240 top-screen defaults.
void FUN_0016d17c(ScreenConfig *config)
{
    config->mode = 0;
    config->enabled = 0;
    config->dirty = 0;
    config->height = 240;
    config->width = 400;
    config->owner = config;
    config->viewport[0] = 0.0f;
    config->viewport[1] = 0.0f;
    config->viewport[2] = 0.0f;
    config->viewport[3] = 0.0f;
    config->unk24 = 0;
    config->format = 3;
    config->height2 = 240;
    config->width2 = 400;
    config->scale = 1.0f;
    config->unk38 = 0;
    config->owner2 = config;
    config->size3 = ScreenSize(240, 400);
}

} /* extern "C" */
