#include "battle/btlMain.h"
#include "util/BitsAndBytes.h"
#include "battle/BtlGlobals.h"

struct BattleCameraTransition {
    u8 unk0000[0x339c];
    u32 flags; // 0x339c
    u8 unk33a0[8];
    void *object; // 0x33a8
    u8 state; // 0x33ac
};

extern "C" {
void objDestroyIfSet(void *object);

// Release the transition object and clear its pending battle-camera flag.
void btlCameraFinishTransition(BattleCameraTransition *transition)
{
    if (transition->object != NULL) {
        objDestroyIfSet(transition->object);
        transition->object = NULL;
    }
    transition->state = 12;
    transition->flags &= ~2u;
    BtlCameraA *camera = g_btlCamera;
    if (camera != NULL) {
        flagsClearBits(&camera->flags, 0x04000000u);
    }
}
}
