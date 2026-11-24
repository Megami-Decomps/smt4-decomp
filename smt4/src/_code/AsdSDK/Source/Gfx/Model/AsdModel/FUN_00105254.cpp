#include "AsdSDK/Source/Gfx/Model/AsdModelScene.h"
#include "code/Code002c_Smt4.h"
#include "gfx/GfxSettings.h"

extern "C" {

void tripleClear(u8 *triple);
void FUN_001079d8(void);
void FUN_0010e614(void);
void FUN_0010bdb0(void);
void FUN_00131a2c(u32 a);
extern u8 DAT_004dae3c; /* 0x4dae3c */
extern u8 g_asdMdlObjectList; /* 0x4dae48 */
/* Defined here, as in the original file: retail reaches the first array from the second's
 * address (g_asdModelTransformBuilder - 8). */
u32 g_asdModelSceneRoots[2];                /* 0x464b7c: the scene-traverser root of each pass */
nw::gfx::SceneNode *g_asdModelTransformBuilder[2];  /* the root transform of each pass */

/* Resets the model system's scratch state and rebuilds both transform slots. */
void FUN_00105254(const AsdModelSceneCapacities *first, const AsdModelSceneCapacities *second)
{
    tripleClear(&DAT_004dae3c);
    tripleClear(&g_asdMdlObjectList);
    asdModelCreateSceneTrees(first, second);
    FUN_001079d8();
    FUN_0010e614();
    FUN_0010bdb0();
    for (s32 i = 0; i < 2; i++) {
        asdScenePassVisit((AsdScenePass *)g_asdModelSceneRoots[i], (AsdSceneVisitor *)g_asdModelTransformBuilder[i]);
        FUN_00131a2c(g_asdModelSceneRoots[i]);
    }
    g_gfxSettings.unk1C = 0;
}

} /* extern "C" */
