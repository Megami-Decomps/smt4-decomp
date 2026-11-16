/* NON_MATCHING: the walk matches; retail returns the found value from inside the loop (shared `mov r0, r3` exit) where the build branches to one exit that masks the u32 result to u8. */
#include "common.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
struct SoundHandleList {
    AsdSndHandleNode *head;
    s32 count;
};
extern SoundHandleList g_soundHandleList;

/* The value byte registered with sound `id`, or 0 when it is not registered or has no handle. */
u8 asdSoundHandleListFind(s32 id)
{
    SoundHandleList *list = &g_soundHandleList;
    AsdSndHandleNode *node;
    u32 result = 0;
    s32 i = 0;

    node = list->head;
    if (0 < list->count) {
        do {
            if (node == NULL) {
                break;
            }
            if (node->id == id) {
                if (node->handle != 0) {
                    result = node->value;
                }
                break;
            }
            node = node->next;
            i++;
        } while (i < list->count);
    }
    return result;
}
}
