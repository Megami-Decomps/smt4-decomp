/* NON_MATCHING: allocation initialization branches instead of retail conditional stores, and the load-slot/state constant is hoisted. */
#include "npc_shop/DevilMarket.h"

extern "C" {
extern DevilMarketWork *DAT_0058812c;
extern const char DAT_00533250[];
extern const char DAT_00533240[];
extern const char DAT_005331dc[];
extern const char DAT_005331b8[];
void *asdOperatorNew(u32 size);
s32 scrTransitionUpdate(void);
s32 FUN_0036edf4(void);
u32 asdProcessCreateSimple(const char *, s32, u16, u16, s32 (*)(void), void (*)(u32), u32);
u32 taskCreateDraw(const char *, s32, u16, u16, s32 (*)(void), void (*)(u32), u32, u32);
void asdLoadFileAsyncSimple(const char *name, void **destination, u32 flags);
s32 loadSlotIsLoaded(u32 slot);
void loadSlotRequestAsync(u32 slot, u32 flags);
void campButtonHelpAcquire(void);
void FUN_002c7e6c(void);
void FUN_002c85b0(s32 enabled);
void FUN_002c8538(s32 enabled);
void FUN_003c607c(s32 enabled);

// Allocate the devil-market work, launch its process and draw callback, and request resources.
void FUN_0035b404(u32 argument)
{
    DevilMarketWork *work = (DevilMarketWork *)asdOperatorNew(sizeof(DevilMarketWork));
    if (work != NULL) {
        work->messages = NULL;
        work->scriptFile = NULL;
        work->scriptProcess = NULL;
    }
    DAT_0058812c = work;
    work->process = asdProcessCreateSimple(DAT_00533250, 4, 0, 0, scrTransitionUpdate, NULL, 0);
    taskCreateDraw(DAT_00533240, 235, 0, 0, FUN_0036edf4, NULL, 0, work->process);
    work->argument = argument;
    asdLoadFileAsyncSimple(DAT_005331dc, &work->messages, 0);
    asdLoadFileAsyncSimple(DAT_005331b8, &work->scriptFile, 0);
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
    work->previousState = work->state;
    work->state = 1;
    work->started = 0;
}
}
