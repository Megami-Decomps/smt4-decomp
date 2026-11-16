/* NON_MATCHING: register allocation (retail hoists the constant 0 into r7 at entry and stores the kind and a zero as one strd) */
#include "shard/S1Light.h"
#include "AsdSDK/Source/Gfx/Effect/effAsdLight.h"

extern "C" {

extern s32 DAT_005b3c90[2];            /* per-scene state for kinds 1 and 4 */
extern s32 DAT_005b3c98[2];            /* per-scene state for kinds 2 and 5 */
extern u32 g_effAsdLightHandle[2];
extern u32 g_asdModelTransformBuilder[2];
extern LightCount g_asdLightCount[2];

void FUN_002246d0(LightNode *node, s32 state);
void sceneTraverserVisit(u32 lightHandle, u32 transformBuilder);

/* Register a node as a light of the given kind (1/2: first scene, 4/5: second scene), when the
 * kind's scene state is set. */
void FUN_00280c70(LightNode *node, s32 kind)
{
    s32 state;

    switch (kind) {
    case 1:
        state = DAT_005b3c90[0];
        break;
    case 2:
        state = DAT_005b3c98[0];
        asdLightActivate(0);
        break;
    case 4:
        state = DAT_005b3c90[1];
        break;
    case 5:
        state = DAT_005b3c98[1];
        asdLightActivate(1);
        break;
    default:
        return;
    }
    if (state != 0) {
        FUN_002246d0(node, state);
        s32 scene;
        if (kind < 3)
            scene = 0;
        else
            scene = 1;
        sceneTraverserVisit(g_effAsdLightHandle[scene], g_asdModelTransformBuilder[scene]);
        g_asdLightCount[scene].count++;
        node->kindCopy = node->kind = kind;
        node->unk18 = node->unk14 = 0;
    }
}

} /* extern "C" */
