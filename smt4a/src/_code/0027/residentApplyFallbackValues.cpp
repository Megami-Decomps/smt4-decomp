#include "map/MapVector.h"
#include "kernel/jyoucyuGetTableEntry.h"
extern "C" {
void soundListenerSetPose(const MapVector *position, f32 angle);
/* Apply the camera's position and angle to the sound listener only while resident table entry one is absent. */
void residentApplyFallbackValues(MapVector position, f32 angle)
{
    if (jyoucyuGetTableEntry(1) == NULL) {
        soundListenerSetPose(&position, angle);
    }
}
}
