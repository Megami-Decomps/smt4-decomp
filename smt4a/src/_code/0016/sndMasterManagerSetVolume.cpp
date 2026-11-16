#include "common.h"

extern "C" {

void nnSndMasterManagerSetVolume(u8 *object, f32 volume);
extern u8 g_nnSndMasterManager[];

/* Sets the master volume on the object at 0x643380. */
void sndMasterManagerSetVolume(f32 volume)
{
    nnSndMasterManagerSetVolume(g_nnSndMasterManager, volume);
}

} /* extern "C" */
