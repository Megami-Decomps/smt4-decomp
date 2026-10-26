#include "common.h"

struct SndMasterManagerView {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ f32 volume;
};

extern "C" {

extern SndMasterManagerView g_nnSndMasterManager;

/* Returns the master volume of the sound manager. */
f32 FUN_00439ea0(void)
{
    return g_nnSndMasterManager.volume;
}

} /* extern "C" */
