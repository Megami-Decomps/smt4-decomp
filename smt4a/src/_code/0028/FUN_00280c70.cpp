/* NON_MATCHING: register allocation (retail hoists the constant 0 into r7 at entry and stores the kind and a zero as one strd) */
#include "shard/S1Light.h"

extern "C" {

extern s32 DAT_005b3c90[2];            /* per-scene state for kinds 1 and 4 */
extern s32 DAT_005b3c98[2];            /* per-scene state for kinds 2 and 5 */
extern u32 g_effAsdLightHandle[2];
extern u32 g_asdModelTransformBuilder[2];
extern LightCount g_asdLightCount[2];

void FUN_0034103c(s32 scene);
void FUN_002246d0(LightNode *node, s32 state);
void sceneTraverserVisit(u32 lightHandle, u32 transformBuilder);

/* Register a node as a light of the given kind (1/2: first scene, 4/5: second scene), when the
 * kind's scene state is set. */
void FUN_00280c70(LightNode *node, s32 kind)
{
    s32 state;

    if (kind == 1) {
        state = DAT_005b3c90[0];
    } else if (kind == 2) {
        state = DAT_005b3c98[0];
        FUN_0034103c(0);
    } else if (kind == 4) {
        state = DAT_005b3c90[1];
    } else if (kind == 5) {
        state = DAT_005b3c98[1];
        FUN_0034103c(1);
    } else {
        return;
    }

    if (state != 0) {
        FUN_002246d0(node, state);
        s32 scene = kind >= 3 ? 1 : 0;
        sceneTraverserVisit(g_effAsdLightHandle[scene], g_asdModelTransformBuilder[scene]);
        g_asdLightCount[scene].count++;
        node->kind = kind;
        node->kindCopy = kind;
        node->unk14 = 0;
        node->unk18 = 0;
    }
}

} /* extern "C" */
