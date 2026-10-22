/* NON_MATCHING: initial map-global load/prologue ordering differs; the model-creation body matches. */
#include "map/mapIf.h"
#include "map/mapDepart.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {
extern MapIfGlobals g_mapIf;
extern GameState g_gameState;
s32 textFormatBuffer(char *buffer, const char *format, ...);
AsdMdlObject *asdMdlManagerCreateLoaded(const char *path, u32 flags);
void FUN_002a0428(AsdMdlObject *model, u32 enabled);
void nodeSetTranslation(AsdMdlNode *node, u32 mode, const f32 *position);
void FUN_0028c618(AsdMdlNode *node, u32 mode, f32 x, f32 y, f32 z);

void FUN_001a9008(f32 x, f32 y, f32 z, f32 heading)
{
    // The model pointer follows the shared fast-model state, without growing it.
    struct FastModelWorkView {
        MapIfFastModelState state;
        AsdMdlObject *model;
    };
    typedef char FastModelWorkLayoutCheck[offsetof(FastModelWorkView, model) == 0x1c ? 1 : -1];
    FastModelWorkView *work = (FastModelWorkView *)&g_mapIf.state->fastModel;
    char path[128];
    work->state.active = 1;
    work->state.first = 0;
    work->state.second = 0;
    work->state.position[0] = x;
    work->state.position[1] = y;
    work->state.position[2] = z;
    work->state.heading = heading;
    if (g_gameState.unk000 == 24) {
        textFormatBuffer(path, "map/all/m099_fast.bam");
    } else {
        textFormatBuffer(path, "map/m%03d/m%03d_fast.bam", g_gameState.unk000, g_gameState.unk000);
    }
    work->model = asdMdlManagerCreateLoaded(path, 7);
    FUN_002a0428(work->model, 1);
    nodeSetTranslation(work->model->node, 0, work->state.position);
    FUN_0028c618(work->model->node, 0, 0.0f, work->state.heading, 0.0f);
}
}
