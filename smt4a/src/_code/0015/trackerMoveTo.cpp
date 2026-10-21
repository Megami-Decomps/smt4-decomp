#include "common.h"

extern "C" {

typedef struct Vec3 {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
} Vec3;

typedef struct Tracker {
    /* 0x00 */ u8 unk00[0x6C];
    /* 0x6C */ Vec3 position;
    /* 0x78 */ Vec3 delta;
    /* 0x84 */ u8 reset;
} Tracker;

/* Moves the tracker to `position`: unless a reset is pending, `delta` becomes the movement since the last position; then the reset flag is cleared. */
void trackerMoveTo(Tracker *tracker, Vec3 *position)
{
    if (tracker->reset == 0) {
        tracker->delta.x = position->x - tracker->position.x;
        tracker->delta.y = position->y - tracker->position.y;
        tracker->delta.z = position->z - tracker->position.z;
    }
    tracker->position = *position;
    tracker->reset = 0;
}

} /* extern "C" */
