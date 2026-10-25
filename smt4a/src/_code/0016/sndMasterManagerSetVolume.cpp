#include "common.h"

extern "C" {

void FUN_0016f33c(u8 *object, f32 volume);
extern u8 g_nnSndMasterManager[];

/* Sets the master volume on the object at 0x643380. */
void sndMasterManagerSetVolume(f32 volume)
{
    FUN_0016f33c(g_nnSndMasterManager, volume);
}

} /* extern "C" */
