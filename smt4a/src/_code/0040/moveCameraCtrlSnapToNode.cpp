/* NON_MATCHING: retail loads the node's angle pointer before it copies the position (then copies the angles
 * with ldrd/stm); the build reloads the pointer after the position copy. A single-use `angles` pointer local
 * taken before the copy gives IDENTICAL, but it is register/schedule steering, so it is not written. */
#include "mikado/mikadoMain.h"
#include "gfx/ControllerModel.h"

extern "C" {
void FUN_00407598(MikadoTalkWorkA *camera);

/* Snap to a route node. The movement update uses the same position/angle pair. */
static __inline void routeSelectNode(MikadoTalkWorkA *camera, s32 index, s32 mode)
{
    if (index >= 0 && camera->nodeCount > index) {
        camera->selectedNode = index;
        camera->routeMode = mode;
        const MikadoRouteNodeA *node = camera->route->table->nodes[index];
        camera->position = node->position;
        camera->angles = *node->angles;
        FUN_00407598(camera);
    }
}

/* Select a camera node and restore the attached actor's destination if present. */
void moveCameraCtrlSnapToNode(MikadoTalkWorkA *camera, s32 index, s32 mode)
{
    camera->elapsed = 0;
    camera->moving = 0;
    routeSelectNode(camera, index, mode);
    if (camera->hasActorDestination) {
        camera->actorDestination = camera->savedActorDestination;
        controllerSetDestination(camera->actor->controller, &camera->actorDestination);
    }
}
}
