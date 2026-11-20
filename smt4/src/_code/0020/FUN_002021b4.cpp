/* NON_MATCHING: retail addresses the counter with add then ldr (value in r0), the build with a writeback ldr (value in r1); the rest matches. */
#include "common.h"
#include "event/2dEvent/Npc2d.h"
#include "code/Code0034.h"
#include "code/Code0034_Smt4.h"

extern "C" {
u32 scrGetArg(u32 index);
void questCenterAddPoints(u32 amount);
void gameAddPointsClamped(u32 amount);

/* gameCounterAddSaturating's body, inlined here: adds `amount` to counter `index` (saturating at
 * 0xFFFFFFFF) and notifies the counter's handler. */
static __inline void counterAddSaturating(s32 index, u32 amount)
{
    u32 *table = reinterpret_cast<u32 *>(gameGetCounters());
    u32 *counter = &table[index];
    u32 value = *counter;

    if (~value > amount) {
        value = value + amount;
    } else {
        value = 0xffffffff;
    }
    *counter = value;
    switch (index) {
    case 2:
        questCenterCounterAddSaturating14(amount);
        return;
    case 9:
        questCenterAddPoints(amount);
        return;
    case 0x13:
        questCenterCounterAddSaturating1A(amount);
        return;
    case 0x26:
        gameAddPointsClamped(amount);
        return;
    }
}

/* Script command: adds argument 1 to the counter named by argument 0. */
u32 FUN_002021b4()
{
    u32 counterId = scrGetArg(0);
    u32 amount = scrGetArg(1);
    counterAddSaturating((u8)counterId, amount);
    return 1;
}
}
