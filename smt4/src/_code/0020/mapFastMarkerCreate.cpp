#include "map/MapIfGlobals.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {
void textFormatBuffer(char *output, const char *format, ...);
void lightOwnerRegister(AsdMdlObject *model, u32 enabled);
void modelPartSetRotationDegrees(AsdMdlNode *node, s32 index, f32 x, f32 y, f32 z);
void nodeSetScale(AsdMdlNode *node, s32 index, f32 x, f32 y, f32 z);
void asdTMTexTablePrepareNodeImage(u32 group, u32 id);

// Create the fast-travel marker at the requested position and heading, then start its map cue.
void mapFastMarkerCreate(f32 x, f32 y, f32 z, f32 heading)
{
    MapIfState *state = g_mapIf.state;
    MapIfModelSlot *pose = &state->slots[0];
    pose->active = 1;
    pose->state = 0;
    pose->timer = 0;
    pose->position.x = x;
    pose->position.y = y;
    pose->position.z = z;
    pose->position.w = heading;
    char path[128];
    textFormatBuffer(path, "map/all/lmap_fast.bam");
    pose->model = asdMdlManagerCreateLoaded(path, 7);
    lightOwnerRegister(pose->model, 1);
    nodeSetTranslation(pose->model->node, 0, &pose->position.x);
    modelPartSetRotationDegrees(pose->model->node, 0, 0.0f, pose->position.w, 0.0f);
    nodeSetScale(pose->model->node, 0, 50.0f, 50.0f, 50.0f);
    asdTMTexTablePrepareNodeImage(10, 37);
    state->unkCCD8 = 1;
    state->unkCCDC = 0;
}
}
