#include "common.h"

struct PopupQueueState {
    u8 unk00[0xb0]; // 0x00
    s32 pending[16]; // 0xb0
};

extern "C" PopupQueueState* g_popupState;

// Queue one of the supported popup kinds unless it is already present.
extern "C" void popupQueueInsertUnique(s32 kind)
{
    if ((kind == 13 || kind == 16) || (kind == 18 || kind == 19)) {
        for (s32 index = 0; index < 16; ++index) {
            s32 pending = g_popupState->pending[index];
            if (pending == kind) {
                return;
            }
            if (pending == 0) {
                g_popupState->pending[index] = kind;
                return;
            }
        }
    }
}
