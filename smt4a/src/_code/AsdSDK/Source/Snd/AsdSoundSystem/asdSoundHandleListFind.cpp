/* NON_MATCHING: list head and count now load with one ldm like retail; remaining: retail keeps the id in r0 and the result in r3 with a shared epilogue, the build moves the id to ip. */
#include "common.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
struct SoundHandleList {
    AsdSndHandleNode *head;
    s32 count;
};
extern SoundHandleList g_soundHandleList;

u8 asdSoundHandleListFind(s32 id)
{
    u8 result = 0;
    AsdSndHandleNode *node = g_soundHandleList.head;
    s32 count = g_soundHandleList.count;

    for (s32 index = 0; index < count; ++index) {
        if (node == NULL) {
            break;
        }
        if (node->id == id) {
            if (node->handle != NULL) {
                result = node->value;
            }
            break;
        }
        node = node->next;
    }
    return result;
}
}
