/* NON_MATCHING: retail uses ldr r2, [pc, #84] where the compiled block uses push {r4, r5}. */
#include "common.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSndHandleNode *g_soundHandleList;
extern s32 DAT_0063e948;

u8 asdSoundHandleListFind(s32 id)
{
    u8 result = 0;
    AsdSndHandleNode *node = g_soundHandleList;
    const s32 count = DAT_0063e948;
    s32 index = 0;

    if (count > 0) {
        do {
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
            ++index;
        } while (index < count);
    }

    return result;
}
}
