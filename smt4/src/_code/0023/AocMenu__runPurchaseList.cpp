#include "classes/AocMenu.h"
#include "shard/ScreenTransitionState.h"

extern "C" {
bool screenFadesAllReady();
void soundChannelStopAll(u32 channels);
void slotSetRequest(u32 slot, u32 request, u32 value);
void aocMenuSetButtonHelp(ScreenTransitionState *state, s32 selection, u32 value);

void AocMenu::runPurchaseList()
{
    ScreenTransitionState * state = reinterpret_cast<ScreenTransitionState *>(this);
    if (state->phase == 0) {
        soundChannelStopAll(15);
        slotSetRequest(0, 10, 255);
        slotSetRequest(1, 10, 255);
        state->phase = 1;
        aocMenuSetButtonHelp(state, -1, 0);
    } else if (state->phase == 1 && screenFadesAllReady()) {
        state->flags = 16;
        state->phase = 0;
        if (state->callback) {
            state->callback->vtable->destroy(state->callback);
            state->callback = NULL;
        }
    }
}
}
