/* NON_MATCHING: listener basis arithmetic uses different VFP scheduling and folds the zero vertical displacement. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include <math.h>

struct ListenerVector { f32 x, y, z; };
struct ListenerOrientationView {
    u8 prefix[0x1100];
    u8 listener[0x6C];
    f32 matrix[12];
    ListenerVector position;
    ListenerVector up;
    f32 angle;
};
typedef char ListenerMatrixOffset[offsetof(ListenerOrientationView, matrix) == 0x116C ? 1 : -1];
typedef char ListenerUpOffset[offsetof(ListenerOrientationView, up) == 0x11A8 ? 1 : -1];
extern "C" {
extern AsdSoundSystem g_asdSound;
f32 FUN_002b70cc(f32 phase);
f32 phaseCosInterpolate(f32 phase);
void FUN_0012f6f4(void *listener, const f32 *matrix);

void FUN_00119c28(const ListenerVector *position, f32 angle)
{
    ListenerOrientationView *sound = (ListenerOrientationView *)&g_asdSound;
    f32 x = position->x;
    sound->position.x = x;
    f32 y = position->y;
    sound->position.y = y;
    f32 z = position->z;
    sound->position.z = z;
    sound->angle = angle;
    f32 phase = angle * 0.7111111f;
    ListenerVector up = sound->up;
    f32 dx = -FUN_002b70cc(phase);
    f32 dz = -phaseCosInterpolate(phase);
    ListenerVector forward = {x - (x + dx), y - (y + 0.0f), z - (z + dz)};
    f32 inverseLength = 1.0f / sqrtf(forward.x * forward.x + forward.y * forward.y + forward.z * forward.z);
    forward.z *= inverseLength;
    forward.x *= inverseLength;
    forward.y *= inverseLength;
    ListenerVector right = {
        up.y * forward.z - up.z * forward.y,
        up.z * forward.x - up.x * forward.z,
        up.x * forward.y - up.y * forward.x
    };
    inverseLength = 1.0f / sqrtf(right.x * right.x + right.y * right.y + right.z * right.z);
    right.z *= inverseLength;
    right.x *= inverseLength;
    right.y *= inverseLength;
    sound->matrix[0] = right.x;
    sound->matrix[1] = right.y;
    sound->matrix[2] = right.z;
    ListenerVector vertical = {
        forward.y * right.z - forward.z * right.y,
        forward.z * right.x - forward.x * right.z,
        forward.x * right.y - forward.y * right.x
    };
    sound->matrix[4] = vertical.x;
    sound->matrix[5] = vertical.y;
    sound->matrix[6] = vertical.z;
    sound->matrix[8] = forward.x;
    sound->matrix[9] = forward.y;
    sound->matrix[10] = forward.z;
    sound->matrix[3] = -(x * right.x + y * right.y + z * right.z);
    sound->matrix[7] = -(x * vertical.x + y * vertical.y + z * vertical.z);
    sound->matrix[11] = -(x * forward.x + y * forward.y + z * forward.z);
    FUN_0012f6f4(sound->listener, sound->matrix);
}
}
