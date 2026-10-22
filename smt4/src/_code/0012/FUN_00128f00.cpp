#include "common.h"

struct MasterSoundState {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ f32 value;
};

extern "C" {

extern MasterSoundState g_nnSndMasterManagerImpl;
extern void FUN_0013aae8(MasterSoundState *manager, f32 value);

/* Updates the enabled sound-state scalar and applies it to the master manager. */
void FUN_00128f00(MasterSoundState *state, f32 value)
{
    if (state->enabled != 0) {
        state->value = value;
        FUN_0013aae8(&g_nnSndMasterManagerImpl, value);
    }
}

} /* extern "C" */
