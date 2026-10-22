/* NON_MATCHING: retail copies the alpha table with ldm/stm (not ldrd/strd) and counts the 64 iterations down in a separate register (`subs r2, r2, #1`). */
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
void FUN_002d26a4(void)
{
    SparkleAlphaTable table = DAT_005316c4;
    s32 i;

    for (i = 0; i < 64; i++) {
        SparkleSet *set = g_activeTextureSlot;

        if (set->life[i] > 0) {
            s32 life;

            set->size[i] += 3.0f;
            set->position[i].y += 1.5f;
            life = set->life[i];
            if (life > 10) {
                set->color[i] = 0xc0b0a000;
            } else {
                set->color[i] = table.alpha[life] | 0xc0b0a000;
            }
            set->life[i] = life - 1;
        }
    }
}

} /* extern "C" */
