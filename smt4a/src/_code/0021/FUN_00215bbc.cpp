#include "common.h"
#include "camp/PartyPanel/PartyPanel.h"

extern "C" void FUN_002c8538(s32 enabled);
extern "C" void FUN_00215bd0();

// Enable the common initializer before setting up this screen.
extern "C" void FUN_00215bbc()
{
    FUN_002c8538(1);
    FUN_00215bd0();
}
