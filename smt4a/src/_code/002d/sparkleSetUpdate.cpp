/* NON_MATCHING: register allocation only: retail keeps the colour constant 0xc0b0a000 in r4 and the life-table
 * loaded alpha and the size field's base in r5; this build swaps the two. */
#include "common.h"

typedef struct Vec3f {
    f32 x, y, z;
} Vec3f;

/* 64 rising sparkles: remaining life, position, size and color. */
struct SparkleSet {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ s32 life[64];
    /* 0x104 */ Vec3f position[64];
    /* 0x404 */ f32 size[64];
    /* 0x504 */ u32 color[64];
};

/* The alpha of a sparkle by its remaining life (fading in, then out over the last frames). */
struct SparkleAlphaTable {
    u32 alpha[11];
};

extern "C" {
extern const SparkleAlphaTable DAT_005316c4;
extern SparkleSet *g_activeTextureSlot;

/* Advances every live sparkle: grows it, moves it up and fades it by its remaining life. */
void sparkleSetUpdate(void)
{
    SparkleAlphaTable table = DAT_005316c4;
    s32 i;

    for (i = 0; i < 64; i++) {
        if (g_activeTextureSlot->life[i] > 0) {
            g_activeTextureSlot->size[i] += 3.0f;
            g_activeTextureSlot->position[i].y += 1.5f;
            if (g_activeTextureSlot->life[i] > 10) {
                g_activeTextureSlot->color[i] = 0xc0b0a000;
            } else {
                g_activeTextureSlot->color[i] = table.alpha[g_activeTextureSlot->life[i]] | 0xc0b0a000;
            }
            g_activeTextureSlot->life[i]--;
        }
    }
}

} /* extern "C" */
