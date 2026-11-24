#ifndef SMT4_BATTLE_BTLPOSITIONEDREQUESTS_H
#define SMT4_BATTLE_BTLPOSITIONEDREQUESTS_H

#include "common.h"

struct BtlMainState;
struct BtlUi;
struct BattleVector3;

extern "C" {

/* Gets the member's world-space effect anchor. */
BattleVector3 FUN_0023cd08(BtlMainState *state, s32 memberId, s32 forceEnemy);

/* Starts the slot meter, then queues its number popup at the icon's offset. */
u32 FUN_0023cc00(BtlUi *unused, u32 slot, u32 id, u8 color, s8 kind, u32 enabled, s32 x, s32 y);

/* Appends a number popup at a world-space position and returns its group, or -1. */
u32 FUN_0028a0d0(BtlUi *unused, u32 id, f32 x, f32 y, f32 z, u32 color, u32 kind, s32 enabled, u32 mode);

/* Tests whether a number popup or one of its markers in this group is still active. */
u32 FUN_003adb34(u32 unused, s32 group);

/* Adds a position marker and returns the assigned row, or -1 when no row can hold it. */
s32 btlUiPositionRequestAdd(BtlUi *ui, u8 kind, u8 mode, f32 x, f32 y, f32 z);

/* Places a marker using the layout for the requested style. */
s32 btlUiAddPositionedMarker(BtlUi *ui, s32 style, u8 kind, s32 x, s32 y);

} /* extern "C" */

#endif
