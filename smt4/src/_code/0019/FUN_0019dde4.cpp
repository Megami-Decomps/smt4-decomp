/* NON_MATCHING: model-work initialization uses different base registers and final flag-store scheduling. */
/* Clears model-placement work and creates the configured map model when present. */
#include "shard/W5_W5Match2_MapCallbacks.h"
#include "shard/W6_W6Match3_NodeEnable.h"
#include "map/mapDepart.h"

extern "C" {
extern ModelRequestWork *g_mapModelWork;
extern GameState g_gameState;
NodeEnableNode *asdMdlManagerCreateLoaded(const char *path, s32 kind);
void FUN_002a0428(NodeEnableNode *model, s32 enabled);

void FUN_0019dde4(void)
{
    /* Float members cannot be added to the byte-aligned unk0D region without shifting it. */
    struct Placement {
        u8 active;
        u8 unk01[3];
        f32 position[3];
        f32 heading;
        u32 counter;
        u8 enabled;
        u8 unk19[3];
        NodeEnableNode *model;
    };
    struct ModelPlacementView {
        s32 state;
        s32 counter;
        s32 resourceId;
        u8 requested;
        u8 unk0D[3];
        Placement placement;
    };
    ModelPlacementView *work = (ModelPlacementView *)g_mapModelWork;
    work->state = 0;
    work->counter = 0;
    work->resourceId = 0;
    work->requested = 0;
    work->placement.active = 0;
    work->placement.position[0] = 0.0f;
    work->placement.position[1] = 0.0f;
    work->placement.position[2] = 0.0f;
    work->placement.heading = 0.0f;
    work->placement.counter = 0;
    work->placement.enabled = 0;
    work->placement.model = NULL;
    /* A word view in unk1C0 would round its 0x91-byte extent up and shift later fields. */
    struct PlacementConfigView {
        u8 unk000[0x1DC];
        s32 modelPlacementId;
    };
    s32 resourceId = ((PlacementConfigView *)&g_gameState)->modelPlacementId;
    work = (ModelPlacementView *)g_mapModelWork;
    work->resourceId = resourceId;
    if (resourceId > 0) {
        Placement *placement = &work->placement;
        placement->model = asdMdlManagerCreateLoaded("map/unit/u006.bam", 7);
        FUN_002a0428(placement->model, 1);
        NodeEnableNode *model = placement->model;
        model->flags |= 2;
        model->resource->target->enabled = 0;
        ((ModelPlacementView *)g_mapModelWork)->state = 1;
    }
}
}
