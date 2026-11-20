/* NON_MATCHING: listener global-address grouping, scalar/vector store combining and VFP basis-register allocation differ. */
#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"
#include <math.h>

extern "C" {
f32 FUN_001a1ee0(f32 angle);
f32 phaseCosine(f32 angle);
void FUN_00173b2c(u8 *listener, const Matrix34Data *matrix);

/* Places the 3D listener at `position` facing `heading` and rebuilds its view matrix. */
void FUN_00154710(const AsdSndListener *position, f32 heading)
{
    AsdSnd3dStateA *state = &g_asdSoundSystem.sound3d;
    f32 x = position->x;
    f32 y = position->y;
    f32 z = position->z;
    state->listenerPosition.x = x;
    state->listenerPosition.y = y;
    state->listenerPosition.z = z;
    state->listenerHeading = heading;
    AsdSndListener up = state->listenerUp;
    f32 angle = heading * 0.7111111f;
    AsdSndListener offset = { -FUN_001a1ee0(angle), 0.0f, -phaseCosine(angle) };
    AsdSndListener target = { x + offset.x, y + offset.y, z + offset.z };
    AsdSndListener forward = { x - target.x, y - target.y, z - target.z };
    f32 inverseLength = 1.0f / sqrtf(forward.x * forward.x + forward.y * forward.y + forward.z * forward.z);
    forward.x *= inverseLength;
    forward.y *= inverseLength;
    forward.z *= inverseLength;
    AsdSndListener right = {
        up.y * forward.z - up.z * forward.y,
        up.z * forward.x - up.x * forward.z,
        up.x * forward.y - up.y * forward.x
    };
    inverseLength = 1.0f / sqrtf(right.x * right.x + right.y * right.y + right.z * right.z);
    right.x *= inverseLength;
    right.y *= inverseLength;
    right.z *= inverseLength;
    AsdSndListener vertical = {
        forward.y * right.z - forward.z * right.y,
        forward.z * right.x - forward.x * right.z,
        forward.x * right.y - forward.y * right.x
    };
    state->listenerMatrix.values[0] = right.x;
    state->listenerMatrix.values[1] = right.y;
    state->listenerMatrix.values[2] = right.z;
    state->listenerMatrix.values[4] = vertical.x;
    state->listenerMatrix.values[5] = vertical.y;
    state->listenerMatrix.values[6] = vertical.z;
    state->listenerMatrix.values[8] = forward.x;
    state->listenerMatrix.values[9] = forward.y;
    state->listenerMatrix.values[10] = forward.z;
    state->listenerMatrix.values[3] = -(x * right.x + y * right.y + z * right.z);
    state->listenerMatrix.values[7] = -(x * vertical.x + y * vertical.y + z * vertical.z);
    state->listenerMatrix.values[11] = -(x * forward.x + y * forward.y + z * forward.z);
    FUN_00173b2c(state->listener, &state->listenerMatrix);
}
}
