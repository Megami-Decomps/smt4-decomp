#include "map/mapIf.h"
#include "shard/X14_ModelTransform.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include <stddef.h>

struct MapFastMarkerPose {
    u8 active;
    u8 unk01[3];
    u32 state, timer;
    TransformVec3 position;
    f32 heading;
    AsdMdlObject *model;
};
typedef char MapFastMarkerPoseLayoutCheck[
    offsetof(MapFastMarkerPose, position) == 0x0c &&
    offsetof(MapFastMarkerPose, heading) == 0x18 &&
    offsetof(MapFastMarkerPose, model) == 0x1c &&
    sizeof(MapFastMarkerPose) == 0x20 ? 1 : -1];
extern "C" {
extern MapIfGlobals g_mapIf;
void textFormatBuffer(char *output, const char *format, ...);
AsdMdlObject *asdMdlManagerCreateLoaded(const char *path, u32 group);
void FUN_002a0428(AsdMdlObject *model, u32 enabled);
void nodeSetTranslation(AsdMdlNode *node, s32 index, const TransformVec3 *position);
void FUN_0028c618(AsdMdlNode *node, s32 index, f32 x, f32 y, f32 z);
void nodeSetScale(AsdMdlNode *node, s32 index, f32 x, f32 y, f32 z);
void FUN_002c58c8(u32 group, u32 id);

// Create the fast-travel marker at the requested position and heading, then start its map cue.
void mapFastMarkerCreate(f32 x, f32 y, f32 z, f32 heading)
{
    MapIfState *state = g_mapIf.state;
    MapFastMarkerPose *pose = (MapFastMarkerPose *)state->unkCBD0;
    pose->active = 1;
    pose->state = 0;
    pose->timer = 0;
    pose->position.x = x;
    pose->position.y = y;
    pose->position.z = z;
    pose->heading = heading;
    char path[128];
    textFormatBuffer(path, "map/all/lmap_fast.bam");
    pose->model = asdMdlManagerCreateLoaded(path, 7);
    FUN_002a0428(pose->model, 1);
    nodeSetTranslation(pose->model->node, 0, &pose->position);
    FUN_0028c618(pose->model->node, 0, 0.0f, pose->heading, 0.0f);
    nodeSetScale(pose->model->node, 0, 50.0f, 50.0f, 50.0f);
    FUN_002c58c8(10, 37);
    state->unkCCD8 = 1;
    state->unkCCDC = 0;
}
}
