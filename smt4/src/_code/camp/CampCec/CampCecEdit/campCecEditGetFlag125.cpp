/* Returns nonzero when the CEC edit screen's flag at +0x125 is set. */
#include "common.h"
#include "camp/CampCec/CampCecEdit.h"

extern "C" {

extern CampCecEdit *g_campCecEdit;

u8 campCecEditGetFlag125(void)
{
    return g_campCecEdit->unk125 != 0;
}

} /* extern "C" */
