#include "camp/CecMenu.h"
#include "code/Code0024_Smt4.h"

extern "C" {

extern CampCecMenu *g_campCec;

/* Address of the scene's sub block at +0xA0. */
u8 *FUN_0024aaa0(void)
{
    return g_campCec->block0A0;
}

} /* extern "C" */
