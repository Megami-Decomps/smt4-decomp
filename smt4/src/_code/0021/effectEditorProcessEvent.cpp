#include "ui/UiSpriteApi.h"
#include "shard/W6_W6Match2_EffectEditor.h"

extern "C" {
void effectEditorApplyHandlerState(u32 event);
void eventDispatch(u32 event);

// Updates the effect editor event state and dispatches when the selected mode permits it.
void effectEditorProcessEvent(u32 event)
{
    if (g_effectEditor.node == NULL) {
        effectEditorApplyHandlerState(event);
        switch (g_effectEditor.mode) {
        case 0:
            eventDispatch(event);
            break;
        case 1:
            break;
        case 2:
            if (g_effectEditor.inhibited == 0) {
                eventDispatch(event);
            }
            break;
        }
        g_effectEditor.cachedEvent = event;
    }
}
}
