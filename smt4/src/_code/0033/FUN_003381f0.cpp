/* NON_MATCHING: register allocation only: in the unrolled search loop retail loads the first id into r4 (push {r4}) where armcc reuses ip, the register holding the 0x48bc offset. */
#include "common.h"

struct BattleMainStateIds {
    u8 unk00[0x48bc];
    u32 ids[42];
};
/* Adds `id` to the main battle state's list of 42 ids unless it is already there. */
extern "C" void FUN_003381f0(BattleMainStateIds *state, u32 id)
{
    s32 i;
    for (i = 0; i < 42; i++) {
        if (state->ids[i] == id) {
            return;
        }
    }
    for (i = 0; i < 42; i++) {
        if (state->ids[i] == 0) {
            state->ids[i] = id;
            return;
        }
    }
}
