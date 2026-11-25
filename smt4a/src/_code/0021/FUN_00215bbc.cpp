#include "common.h"
#include "camp/PartyPanel/PartyPanel.h"

extern "C" void gameGlobalsSetOverlayActive(s32 enabled);

// Enable the common initializer before setting up this screen.
extern "C" void FUN_00215bbc()
{
    gameGlobalsSetOverlayActive(1);
    unitStatusResetSpriteState();
}
