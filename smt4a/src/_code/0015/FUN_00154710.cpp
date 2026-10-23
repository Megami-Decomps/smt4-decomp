/* NON_MATCHING: listener global-address grouping, scalar/vector store combining and VFP basis-register allocation differ. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "gfx/CameraMatrixCache.h"
#include <math.h>

extern "C" {
extern AsdSoundSystem g_asdSoundSystem;
f32 FUN_001a1ee0(f32 angle);
f32 FUN_001b63b0(f32 angle);
void FUN_00173b2c(void *listener, const Matrix34Data *matrix);

void FUN_00154710(const AsdSndListener *position, f32 heading)
{
    // Apocalypse's listener fields extend beyond the shared IV sound-system prefix.
    struct ListenerView {
        u8 prefix[0x1210];
        u8 listener[0x6c];
        Matrix34Data matrix;
        AsdSndListener position;
        AsdSndListener up;
        f32 heading;
    };
    typedef char LayoutCheck[offsetof(ListenerView, matrix) == 0x127c &&
        offsetof(ListenerView, position) == 0x12ac &&
        offsetof(ListenerView, up) == 0x12b8 ? 1 : -1];
    ListenerView *state = reinterpret_cast<ListenerView *>(&g_asdSoundSystem);
    f32 x = position->x;
    f32 y = position->y;
    f32 z = position->z;
    state->position.x = x;
    state->position.y = y;
    state->position.z = z;
    state->heading = heading;
    AsdSndListener up = state->up;
    f32 angle = heading * 0.7111111f;
    AsdSndListener offset = { -FUN_001a1ee0(angle), 0.0f, -FUN_001b63b0(angle) };
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
    state->matrix.values[0] = right.x;
    state->matrix.values[1] = right.y;
    state->matrix.values[2] = right.z;
    state->matrix.values[4] = vertical.x;
    state->matrix.values[5] = vertical.y;
    state->matrix.values[6] = vertical.z;
    state->matrix.values[8] = forward.x;
    state->matrix.values[9] = forward.y;
    state->matrix.values[10] = forward.z;
    state->matrix.values[3] = -(x * right.x + y * right.y + z * right.z);
    state->matrix.values[7] = -(x * vertical.x + y * vertical.y + z * vertical.z);
    state->matrix.values[11] = -(x * forward.x + y * forward.y + z * forward.z);
    FUN_00173b2c(state->listener, &state->matrix);
}
}
