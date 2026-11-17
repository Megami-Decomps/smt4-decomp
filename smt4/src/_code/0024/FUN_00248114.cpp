/* NON_MATCHING: only the first instructions are scheduled differently (retail loads g_mapIf into r2 after the constant moves) */
#include "map/MapIfGlobals.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

struct Vec3 {
    f32 x, y, z;
};

extern "C" {

AsdMdlObject *asdMdlManagerCreateLoaded(const char *path, s32 heap);
void nodeSetTranslation(void *node, s32 index, const Vec3 *translation);
void modelPartSetRotationDegrees(void *node, s32 index, Vec3 scale);

/* Creates the map action-down marker model at the given position (xyz, w) and starts it. */
void FUN_00248114(MapMarkerPosition position)
{
    MapIfModelSlot *block = &g_mapIf.state->slots[3];
    Vec3 scale;

    block->active = 1;
    block->state = 0;
    block->timer = 0;
    block->position = position;
    block->model = asdMdlManagerCreateLoaded("map/all/action_down.bam", 7);
    lightOwnerRegister(block->model, 1);
    nodeSetTranslation(block->model->node, 0, (const Vec3 *)&block->position);
    scale.x = 0.0f;
    scale.y = block->position.w;
    scale.z = 0.0f;
    modelPartSetRotationDegrees(block->model->node, 0, scale);
}

} /* extern "C" */
