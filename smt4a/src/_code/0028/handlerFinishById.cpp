#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {

void nw_snd_internal_BasicSound_Stop(s32 handle, s32 frames); // declcheck: local (the shared declaration does not compile here or changes this unit)

/* Stop the registered sound and retire its handle-list node. */
void handlerFinishById(s32 id, s32 frames)
{
    AsdSoundSystemA *system = &g_asdSoundSystem;
    AsdSndHandleNode *handler = system->registered.handles;
    for (s32 i = 0; i < system->registered.count; ++i) {
        if (handler == NULL) {
            break;
        }
        if (handler->id == id) {
            if (handler->handle != 0) {
                nw_snd_internal_BasicSound_Stop(handler->handle, frames);
            }
            handler->value = 1;
            handler->unk08 = 0;
            return;
        }
        handler = handler->next;
    }
}

} /* extern "C" */
