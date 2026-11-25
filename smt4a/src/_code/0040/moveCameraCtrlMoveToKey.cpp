/* NON_MATCHING: the immediate path loads the eye's XY pair through an added address rather than
 * ldrd and puts the three coordinates in different registers, shifting the later branches. */
#include "gfx/MoveCameraCtrl.h"
#include "gfx/ControllerModel.h"
#include "Model/MoriModelContent.h"

extern "C" {

/* Moves to a camera key at once or computes a ten-frame move. The optional marker follows. */
void moveCameraCtrlMoveToKey(MoveCameraCtrlWork *ctrl, s32 index, s32 immediate)
{
    if (immediate != 0) {
        const MoveCameraTrackKey *key = ctrl->resource->track->keys[index];
        /* Read the target address before writing the eye: the pose copy can alias the source. */
        const Vec3f &target = *key->target;
        const Vec3f eye = key->position;
        ctrl->destinationPose.position = eye;
        ctrl->destinationPose.target = target;
        ctrl->initialPosition = eye;
        ctrl->initialTarget = ctrl->destinationPose.target;
        spatialCameraUpdateLookAt(ctrl);
        if (ctrl->hasPoints != 0) {
            ctrl->savedPointPosition = ctrl->points[index];
            ctrl->pointPosition = ctrl->savedPointPosition;
            controllerSetDestination(ctrl->pointModel->body, &ctrl->pointPosition);
        }
    } else {
        ctrl->elapsed = 0;
        ctrl->moving = 1;
        if (index == 0) {
            ctrl->destinationPose.position = ctrl->firstKeyPosition;
            ctrl->destinationPose.target = ctrl->firstKeyTarget;
        } else {
            const MoveCameraTrackKey *key = ctrl->resource->track->keys[index];
            const Vec3f &target = *key->target;
            ctrl->destinationPose.position = key->position;
            ctrl->destinationPose.target = target;
        }
        ctrl->poseStep.position.x = (ctrl->destinationPose.position.x - ctrl->initialPosition.x) * 0.1f;
        ctrl->poseStep.position.y = (ctrl->destinationPose.position.y - ctrl->initialPosition.y) * 0.1f;
        ctrl->poseStep.position.z = (ctrl->destinationPose.position.z - ctrl->initialPosition.z) * 0.1f;
        ctrl->poseStep.target.x = (ctrl->destinationPose.target.x - ctrl->initialTarget.x) * 0.1f;
        ctrl->poseStep.target.y = (ctrl->destinationPose.target.y - ctrl->initialTarget.y) * 0.1f;
        ctrl->poseStep.target.z = (ctrl->destinationPose.target.z - ctrl->initialTarget.z) * 0.1f;
        if (ctrl->hasPoints != 0) {
            ctrl->savedPointPosition = ctrl->points[index];
            ctrl->pointStep.x = (ctrl->savedPointPosition.x - ctrl->pointPosition.x) * 0.1f;
            ctrl->pointStep.y = (ctrl->savedPointPosition.y - ctrl->pointPosition.y) * 0.1f;
            ctrl->pointStep.z = (ctrl->savedPointPosition.z - ctrl->pointPosition.z) * 0.1f;
        }
    }
}

} /* extern "C" */
