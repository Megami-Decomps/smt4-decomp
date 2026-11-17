/* NON_MATCHING: camera-vector load grouping, saved angle registers, and visibility flag predication differ. */
#include "map/DestructibleModels.h"
#include "game/GameStateA.h"
#include "map/LmapViewGlobals.h"
#include "gfx/ControllerModel.h"

extern "C" {
extern MapDestructibleModels *g_mapHakai;
f32 mathPositionHeadingDegrees(f32, f32, f32, f32, f32, f32);
f32 mathAngleDeltaDegrees(f32, f32);

void FUN_0027461c(void)
{
    LmapViewA *view = g_lmapView;
    f32 viewHeading = mathPositionHeadingDegrees(view->savedEye.x, view->savedEye.y, view->savedEye.z,
                                               view->savedTarget.x, view->savedTarget.y, view->savedTarget.z);
    for (s32 i = 0; i < 16; ++i) {
        MapDestructibleModels *work = g_mapHakai;
        MapDestructibleEntry *entry = &work->entries[i];
        if (entry->active && entry->state != 3) {
            MapDestructibleModel *model = entry->direct ? entry->model : work->groups.entries[entry->group].models[entry->index];
            Obj557b18 *controller = model->controller;
            if (g_gameState.loading) {
                if (!(controller->flags & 1))
                    controller->flags |= 3;
            } else {
                if (controller->flags & 1)
                    controller->flags &= ~3u;
                if (entry->index == 2 && !(controller->flags & 1)) {
                    f32 limit = 50.0f;
                    MapVector *viewPosition = &g_lmapView->savedEye;
                    f32 heading = mathPositionHeadingDegrees(viewPosition->x, viewPosition->y, viewPosition->z,
                                                            entry->position.x, entry->position.y, entry->position.z);
                    if (g_lmapView->contextMode == -1)
                        limit = 70.0f;
                    f32 delta = mathAngleDeltaDegrees(viewHeading, heading);
                    if (!(delta > -limit && delta < limit))
                        controller->flags |= 3;
                }
                if (entry->changed) {
                    controllerSetDestination(controller, &entry->position);
                    controllerSetRotationEulerDegrees(controller, 0.0f, entry->heading, 0.0f);
                    if (slots4FGetActiveValue(controller) != entry->motion)
                        modelPlayClip(controller, entry->motion, 2, 0.0f, 0.0f);
                    entry->changed = 0;
                }
            }
        }
    }
}
}
