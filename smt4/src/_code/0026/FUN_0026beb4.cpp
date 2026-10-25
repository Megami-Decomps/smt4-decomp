/* NON_MATCHING: readable rewrite from retail disassembly compiles (215 vs 175 rows); retail spills r0-r3 and reloads the second argument from the stack and lays the per-kind cases out as shared tails */
#include "battle/btlReflect.h"
#include "common.h"
#include "battle/BtlMainAccess.h"

extern "C" {


s32 FUN_00293230(BtlMainState* state);

void FUN_002505c0(u32 a, u32 b, u32 event, s32 c, s32 d, s32 e, s32 f);

// Menu cursor step for the given direction `kind`: works out how far the two cursors move
// (clamped to the row limit), optionally sends the "cannot move" notice, then queues the
// movement as a reflect action. Always returns 1.
u32 FUN_0026beb4(u32 id, u32 arg, u32 kind, u32 unused, f32 speed)
{
    s32 moveX = 0;
    s32 moveY = 0;
    bool wide = (btlGetMainState()->battleFlags & 0x400) != 0;
    BtlMainState* state = btlGetMainState();
    s32 cursor = state->menuCursor.x;
    s32 limit = state->menuCursor.y;
    bool atStart = cursor == 0;
    bool canAdvance = cursor < limit;
    bool check = false;

    switch (kind) {
    case 0: case 4: case 9: case 12: case 13: case 20:
        if (!canAdvance) moveX = -1;
        moveY = -1;
        break;
    case 1: case 11:
        if (canAdvance) moveY = -1;
        else moveX = -1;
        break;
    case 2: case 3:
        if (!atStart) moveX = -1;
        else moveY = -1;
        break;
    case 5: case 6:
        if (canAdvance) {
            s32 room = limit - (wide ? 1 : 0);
            moveY = -2 - (wide ? 1 : 0);
            if (room - 2 < cursor) moveX = room - cursor - 2;
        } else {
            moveY = -2 - (wide ? 1 : 0);
            moveX = moveY;
        }
        check = true;
        break;
    case 7: case 8: case 14: case 15:
        moveY = -10;
        moveX = moveY;
        check = true;
        break;
    case 16: moveY = 1; break;
    case 17: moveY = 2; break;
    case 18: moveY = 3; break;
    case 19: moveY = 4; break;
    case 21:
        if (!canAdvance) {
            moveY = -2;
            moveX = moveY;
        } else {
            moveY = -2;
            if (cursor > limit - 2) moveX = limit - cursor - 2;
        }
        check = true;
        break;
    case 22:
        if (!canAdvance) {
            moveY = -3;
            moveX = moveY;
        } else {
            moveY = -3;
            if (cursor > limit - 3) moveX = limit - cursor - 3;
        }
        check = true;
        break;
    case 23:
        if (!canAdvance) {
            moveY = -4;
            moveX = moveY;
        } else {
            moveY = -4;
            if (cursor > limit - 4) moveX = limit - cursor - 4;
        }
        check = true;
        break;
    default:
        break;
    }

    if (check && FUN_00293230(state) == 0 && (state->battleFlags & 0x1000) == 0) {
        FUN_002505c0(id, arg, 0x01000175, 0, 0, 0, 0);
    }

    if (state->menuCursor.x + moveX > 9) moveX = 9 - state->menuCursor.x;
    if (state->menuCursor.y + moveY > 9) moveY = 9 - state->menuCursor.y;
    f32 stepX = (f32)moveX;
    f32 stepY = (f32)moveY;
    ReflectAction* action = btlQueueReflectAction(g_btlActionReflect, (s16)id, 0, arg);
    action->kind = 30;
    action->first = (s16)(s32)stepX;
    action->second = (s16)(s32)stepY;
    action->scalar = speed;
    return 1;
}

} /* extern "C" */
