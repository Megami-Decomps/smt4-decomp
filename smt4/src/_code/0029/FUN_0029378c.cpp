#include "common.h"

namespace {
struct Position {
    u32 x, y;
};
struct State {
    u8 padding[0x2c];
    Position position;
    u8 unused[8];
    u32 slot;
};
}

extern "C" {
void slotPlacementGetPosition(State *state, u32 *x, u32 *y);
void FUN_0029378c(State *state, u32 slot)
{
    state->slot = slot;
    Position position = {0, 0};
    slotPlacementGetPosition(state, &position.x, &position.y);
    state->position = position;
}
}
