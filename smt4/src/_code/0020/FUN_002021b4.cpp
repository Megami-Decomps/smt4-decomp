/* NON_MATCHING: counter argument lifetimes and saturation stores use different registers. */
#include "common.h"
#include "event/2dEvent/Npc2d.h"
#include "shard/FUN_00343a04.h"

extern "C" {
u32 scrGetArg(u32 index);
void FUN_00343a74(u32 amount);
void questCenterAddPoints(u32 amount);
void gameAddPointsClamped(u32 amount);

u32 FUN_002021b4()
{
    u32 counterId = scrGetArg(0);
    u32 amount = scrGetArg(1);
    counterId &= 0xff;
    u32 *counter = &reinterpret_cast<u32 *>(gameGetCounters())[counterId];
    if (~*counter > amount) {
        *counter += amount;
    } else {
        *counter = 0xffffffff;
    }
    if (counterId == 2) {
        FUN_00343a74(amount);
    } else if (counterId == 9) {
        questCenterAddPoints(amount);
    } else if (counterId == 19) {
        FUN_00343a04(amount);
    } else if (counterId == 38) {
        gameAddPointsClamped(amount);
    }
    return 1;
}
}
