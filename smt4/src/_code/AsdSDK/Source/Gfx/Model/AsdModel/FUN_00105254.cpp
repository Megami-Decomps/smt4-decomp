/* NON_MATCHING: retail reaches both slot arrays from the single g_asdModelTransformBuilder literal (second array = base - 8); built loads a separate literal for the first array. */
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
extern u32 DAT_00464b7c[2]; /* 0x464b7c */
extern u32 g_asdModelTransformBuilder[2]; /* 0x464b84 */

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
