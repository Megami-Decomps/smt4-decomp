/* NON_MATCHING: final camera-flag update materializes flags' address in r1, adding two instructions instead of retail's immediate-offset load/store. */
#include "battle/btlMain.h"

struct BattleCameraTransition {
    u8 unk0000[0x339c];
    u32 flags; // 0x339c
    u8 unk33a0[8];
    void *object; // 0x33a8
    u8 state; // 0x33ac
};

extern "C" {
void objDestroyIfSet(void *object);
extern BtlMainA *g_btlCamera;


// Release the transition object and clear its pending battle-camera flag.
void btlCameraFinishTransition(BattleCameraTransition *transition)
{
    if (transition->object != NULL) {
        objDestroyIfSet(transition->object);
        transition->object = NULL;
    }
    transition->state = 12;
    transition->flags &= ~2u;
    BtlMainA *camera = g_btlCamera;
    if (camera != NULL) {
        camera->flags &= ~0x04000000u;
    }
}
}
