/* NON_MATCHING: camera-vector load grouping, saved angle registers, and visibility flag predication differ. */
#include "map/DestructibleModels.h"
#include "map/lmapMain.h"

extern "C" {
extern MapDestructibleModels *g_mapHakai;
extern LmapExtraA *g_lmapView;
extern GameStateA g_gameState;
f32 mathPositionHeadingDegrees(f32, f32, f32, f32, f32, f32);
f32 mathAngleDeltaDegrees(f32, f32);
void controllerSetDestination(ControllerPose *, const MapVector *);
void controllerSetRotationEulerDegrees(ControllerPose *, f32, f32, f32);
s32 slots4FGetActiveValue(ControllerPose *);
void FUN_003fe86c(ControllerPose *, s32, s32, f32, f32);

void FUN_0027461c(void)
{
    // ControllerPose's legacy header also defines LmapScene; avoid that conflicting definition here.
    struct ControllerFlagsView { u32 unk00; u32 flags; };
    LmapExtraA *view = g_lmapView;
    f32 viewHeading = mathPositionHeadingDegrees(view->camera.savedEye.x, view->camera.savedEye.y, view->camera.savedEye.z,
                                               view->camera.savedTarget.x, view->camera.savedTarget.y, view->camera.savedTarget.z);
    for (s32 i = 0; i < 16; ++i) {
        MapDestructibleModels *work = g_mapHakai;
        MapDestructibleEntry *entry = &work->entries[i];
        if (entry->active && entry->state != 3) {
            MapDestructibleModel *model = entry->direct ? entry->model : work->groups.entries[entry->group].models[entry->index];
            ControllerPose *controller = model->controller;
            ControllerFlagsView *flags = reinterpret_cast<ControllerFlagsView *>(controller);
            if (g_gameState.controllerFlags.secondary) {
                if (!(flags->flags & 1))
                    flags->flags |= 3;
            } else {
                if (flags->flags & 1)
                    flags->flags &= ~3u;
                if (entry->index == 2 && !(flags->flags & 1)) {
                    f32 limit = 50.0f;
                    MapVector *viewPosition = &g_lmapView->camera.savedEye;
                    f32 heading = mathPositionHeadingDegrees(viewPosition->x, viewPosition->y, viewPosition->z,
                                                            entry->position.x, entry->position.y, entry->position.z);
                    if (g_lmapView->unkB0 == -1)
                        limit = 70.0f;
                    f32 delta = mathAngleDeltaDegrees(viewHeading, heading);
                    if (!(delta > -limit && delta < limit))
                        flags->flags |= 3;
                }
                if (entry->changed) {
                    controllerSetDestination(controller, &entry->position);
                    controllerSetRotationEulerDegrees(controller, 0.0f, entry->heading, 0.0f);
                    if (slots4FGetActiveValue(controller) != entry->motion)
                        FUN_003fe86c(controller, entry->motion, 2, 0.0f, 0.0f);
                    entry->changed = 0;
                }
            }
        }
    }
}
}
