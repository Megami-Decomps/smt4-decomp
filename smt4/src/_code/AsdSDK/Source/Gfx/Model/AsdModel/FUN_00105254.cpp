#include "shard/Sys464af0.h"

extern "C" {

void tripleClear(u8 *triple);
void FUN_00108c5c(u32 a, u32 b);
void FUN_001079d8(void);
void FUN_0010e614(void);
void FUN_0010bdb0(void);
void FUN_002c2968(u32 a, u32 b);
void FUN_00131a2c(u32 a);
extern u8 DAT_004dae3c; /* 0x4dae3c */
extern u8 DAT_004dae48; /* 0x4dae48 */
/* Defined here, as in the original file: retail reaches the first array from the second's
 * address (g_asdModelTransformBuilder - 8). */
u32 DAT_00464b7c[2];                /* 0x464b7c: the scene-traverser root of each pass */
u32 g_asdModelTransformBuilder[2];  /* 0x464b84: the transform builder of each pass */

// Reset the model system's scratch state and rebuild both transform slots.
void FUN_00105254(u32 a, u32 b)
{
    tripleClear(&DAT_004dae3c);
    tripleClear(&DAT_004dae48);
    FUN_00108c5c(a, b);
    FUN_001079d8();
    FUN_0010e614();
    FUN_0010bdb0();
    for (s32 i = 0; i < 2; i++) {
        FUN_002c2968(DAT_00464b7c[i], g_asdModelTransformBuilder[i]);
        FUN_00131a2c(DAT_00464b7c[i]);
    }
    g_gfxSettings.unk1C = 0;
}

} /* extern "C" */
