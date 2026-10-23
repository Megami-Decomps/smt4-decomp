#include "sound/SoundSpatialState.h"

// Destination vectors extend beyond the shared spatial-state prefix.
struct SoundSpatialUpdateView {
    SoundSpatialState state;
    /* 0x5FC */ AsdSndListener destinationDelta;
    /* 0x608 */ AsdSndListener destination;
    /* 0x614 */ AsdSndListener targetDestination;
};
extern "C" {
void controllerSetDestination(void* controller, const AsdSndListener* destination);
void FUN_00407598(SoundSpatialUpdateView* work);

// Advance the ten-frame position/rotation transition and update the attached controller.
void spatialAdvanceTransformTransition(SoundSpatialUpdateView* work)
{
    if (work->state.unk014) {
        work->state.transition.position.x += work->state.transition.positionDelta.x;
        work->state.transition.position.y += work->state.transition.positionDelta.y;
        work->state.transition.position.z += work->state.transition.positionDelta.z;
        work->state.transition.rotation.x += work->state.transition.rotationDelta.x;
        work->state.transition.rotation.y += work->state.transition.rotationDelta.y;
        work->state.transition.rotation.z += work->state.transition.rotationDelta.z;
        if (work->state.unk015) {
            work->destination.x += work->destinationDelta.x;
            work->destination.y += work->destinationDelta.y;
            work->destination.z += work->destinationDelta.z;
            controllerSetDestination(work->state.controllerOwner->controller, &work->destination);
        }
        ++work->state.unk010;
        if (work->state.unk010 >= 10) {
            work->state.unk014 = 0;
            work->state.transition.position = work->state.transition.targetPosition;
            work->state.transition.rotation = work->state.transition.targetRotation;
            if (work->state.unk015) {
                work->destination = work->targetDestination;
                controllerSetDestination(work->state.controllerOwner->controller, &work->destination);
            }
        }
    }
    FUN_00407598(work);
}
}
