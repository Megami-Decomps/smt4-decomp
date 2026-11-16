/* The battle stage loader thread's stack mapping (BattleStageModel::stackRegion). */
#ifndef BATTLE_BTLSTAGESTACKREGION_H
#define BATTLE_BTLSTAGESTACKREGION_H

#include "nn/os/AddressSpaceManager.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" void FUN_002c3f5c(AddressSpaceRegion *region);

/* Its destructor unmaps the region; the memory goes back to the engine heap. */
struct StackRegion : AddressSpaceRegion {
    ~StackRegion() { FUN_002c3f5c(this); }
    static void operator delete(void *block) { asdMemFreeNonNull(block); }
};

#endif
