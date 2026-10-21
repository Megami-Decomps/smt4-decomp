/* NON_MATCHING: retail uses `add r0, r0, #4096` where armcc emits `add r1, r0, #7168`. */
#include "common.h"

extern "C" {

struct Owner { u8 unk0000[0x1ee0]; f32 values[6]; u32 state; };

void controllerClearVectorState(Owner *owner)
{
    owner->values[0] = 0.0f;
    owner->values[1] = 0.0f;
    owner->values[2] = 0.0f;
    owner->values[3] = 0.0f;
    owner->values[4] = 0.0f;
    owner->values[5] = 0.0f;
    owner->state = 0;
}

} /* extern "C" */
