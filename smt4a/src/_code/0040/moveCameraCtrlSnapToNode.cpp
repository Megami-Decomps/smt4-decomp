#include "gfx/MoveCameraCtrl.h"
#include "gfx/ControllerModel.h"
#include "Model/MoriModelContent.h"

extern "C" {

/* Moves the camera to a key of its track and puts the point marker back where it stood. */
void moveCameraCtrlSnapToNode(MoveCameraCtrlWork *camera, s32 index, s32 mode)
{
    camera->elapsed = 0;
    camera->moving = 0;
    moveCameraSelectKey(camera, index, mode);
    if (camera->hasPoints) {
        camera->pointPosition = camera->savedPointPosition;
        controllerSetDestination(camera->pointModel->body, &camera->pointPosition);
    }
}
}
