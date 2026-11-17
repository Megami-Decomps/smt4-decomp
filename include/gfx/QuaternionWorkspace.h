#ifndef GFX_QUATERNIONWORKSPACE_H
#define GFX_QUATERNIONWORKSPACE_H

#include "common.h"
#include "shard/S1Mover.h"
#include "AsdSDK/Source/Gfx/Effect/effMenuMatrix.h"
#include <stddef.h>
#include "shard/W5_W5Match2_ShiftRandom.h"

struct RotationQuaternion {
    f32 x, y, z, w;
};
typedef char RotationQuaternionSizeCheck[sizeof(RotationQuaternion) == 0x10 ? 1 : -1];


#ifdef __cplusplus
extern "C" {
#endif

u32 randomAdvanceShiftRegister(ShiftRandomState *state);

#ifdef __cplusplus
}
#endif

#endif
