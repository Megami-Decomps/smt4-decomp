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
void FUN_003f3e64(State *state, u32 *x, u32 *y);
void FUN_003f5220(State *state, u32 slot)
{
    state->slot = slot;
    Position position = {0, 0};
    FUN_003f3e64(state, &position.x, &position.y);
    state->position = position;
}
}
