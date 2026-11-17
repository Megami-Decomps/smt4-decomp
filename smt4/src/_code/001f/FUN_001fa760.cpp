/* NON_MATCHING: only the first instructions are scheduled differently (retail loads g_mapIf into r2 after the constant moves) */
#include "map/MapIfGlobals.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

struct Vec3 {
    f32 x, y, z;
};

extern "C" {

void modelPartSetRotationDegrees(void *node, s32 index, Vec3 scale);

/* Creates the map action-manhole marker model at the given position (xyz, w) and starts it. */
void FUN_001fa760(MapMarkerPosition position)
{
    MapIfModelSlot *block = &g_mapIf.state->slots[1];
    Vec3 scale;

    block->active = 1;
    block->state = 0;
    block->timer = 0;
    block->position = position;
    block->model = asdMdlManagerCreateLoaded("map/all/action_manhole.bam", 7);
    lightOwnerRegister(block->model, 1);
    nodeSetTranslation(block->model->node, 0, &block->position.x);
    scale.x = 0.0f;
    scale.y = block->position.w;
    scale.z = 0.0f;
    modelPartSetRotationDegrees(block->model->node, 0, scale);
}

} /* extern "C" */
