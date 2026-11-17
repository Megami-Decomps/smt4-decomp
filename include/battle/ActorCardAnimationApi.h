#ifndef BATTLE_ACTORCARDANIMATIONAPI_H
#define BATTLE_ACTORCARDANIMATIONAPI_H
#include "common.h"
struct BtlUi;
struct ActorCardAnimations;
extern "C" {
void FUN_001f4e54(ActorCardAnimations *owner, s32 slot);
s32 saveIsSelectionOutsideRange(const ActorCardAnimations *owner, u32 slot);
void FUN_003ae574(BtlUi *unused, s32 slot);
s32 FUN_003ae838(BtlUi *unused, s32 slot);
}
#endif
