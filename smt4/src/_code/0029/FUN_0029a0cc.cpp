/* NON_MATCHING: global base is loaded into r0 instead of retail's r2 before the argument move. */
#include "common.h"

namespace {
struct UnitRecord;
struct GameState { u8 padding[0x18b0]; u8 record[1]; };
struct Owner { u32 job; GameState *state; };
}

extern "C" {
/* Reads or forwards the current state. */
extern Owner g_gameGlobals;
void FUN_0024d94c(void *record, UnitRecord *unit);
void FUN_0029a0cc(UnitRecord *unit)
{
    FUN_0024d94c(g_gameGlobals.state->record, unit);
}
}
