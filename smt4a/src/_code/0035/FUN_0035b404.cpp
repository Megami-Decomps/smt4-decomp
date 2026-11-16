/* NON_MATCHING: the constructor gives retail's predicated allocation and the state-entry helper its final stores; remaining: scrTransitionUpdate's pool word is loaded before the DAT_0058812c store (retail places DAT_0058812c first in the pool and loads the callback after it), and ownsLoadSlot's 1 is built in r0 instead of r1. */
#include "npc_shop/DevilMarket.h"
#include "code/Code002c.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

extern "C" {
extern DevilMarketWork *DAT_0058812c;
extern const char DAT_00533250[];
extern const char DAT_00533240[];
extern const char DAT_005331dc[];
extern const char DAT_005331b8[];
s32 scrTransitionUpdate(u32 job);
s32 FUN_0036edf4(void);
u32 taskCreateDraw(const char *, s32, u16, u16, s32 (*)(void), void (*)(u32), u32, u32);
s32 loadSlotIsLoaded(u32 slot);
void loadSlotRequestAsync(u32 slot, u32 flags);
void campButtonHelpAcquire(void);
void FUN_002c7e6c(void);
void FUN_002c85b0(s32 enabled);
void FUN_003c607c(u8 value);

/* Moves the market work to `state`, remembering the state it left and restarting its counter. */
static inline void devilMarketEnterState(DevilMarketWork *work, u32 state)
{
    work->previousState = work->state;
    work->state = state;
    work->started = 0;
}

// Allocate the devil-market work, launch its process and draw callback, and request resources.
void FUN_0035b404(u32 argument)
{
    DevilMarketWork *work = new DevilMarketWork;
    DAT_0058812c = work;
    work->process = asdProcessCreateSimple(reinterpret_cast<const s8 *>(DAT_00533250), 4, 0, 0, scrTransitionUpdate, NULL, 0);
    taskCreateDraw(DAT_00533240, 235, 0, 0, FUN_0036edf4, NULL, 0, work->process);
    work->argument = argument;
    asdLoadFileAsyncSimple(DAT_005331dc, reinterpret_cast<u32 *>(&work->messages), 0);
    asdLoadFileAsyncSimple(DAT_005331b8, reinterpret_cast<u32 *>(&work->scriptFile), 0);
    work->ownsLoadSlot = 0;
    if (!loadSlotIsLoaded(79)) {
        loadSlotRequestAsync(79, 0);
        work->ownsLoadSlot = 1;
    }
    campButtonHelpAcquire();
    FUN_002c7e6c();
    FUN_002c85b0(0);
    FUN_002c8538(0);
    FUN_003c607c(1);
    devilMarketEnterState(work, 1);
}
}
