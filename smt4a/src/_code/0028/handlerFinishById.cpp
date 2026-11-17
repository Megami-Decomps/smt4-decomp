#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {

void asdSoundObjectStop(s32 handle, s32 frames);

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
                asdSoundObjectStop(handler->handle, frames);
            }
            handler->value = 1;
            handler->unk08 = 0;
            return;
        }
        handler = handler->next;
    }
}

} /* extern "C" */
