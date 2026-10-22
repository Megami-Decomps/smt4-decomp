/* NON_MATCHING: the retail build has a stripped debug call (file/line setup + nop) before the node allocation. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
extern AsdSndHandleNode *g_soundHandleList; /* head of the registered sounds */
extern s32 DAT_0063e948;               /* how many */

void *asdMemoryAllocTracked(int heap, int alignClass, int unk08, u32 size, int fromFront);

/* Registers sound `id` (with a flag byte) at the end of the list. Returns 0 if it is already registered. */
u32 asdSoundHandleListAdd(s32 id, u8 flag)
{
    AsdSndHandleNode *node;
    AsdSndHandleNode *last;
    s32 i = 0;

    node = g_soundHandleList;
    if (0 < DAT_0063e948) {
        do {
            if (node == NULL) {
                break;
            }
            if (node->id == id) {
                return 0;
            }
            node = node->next;
            i++;
        } while (i < DAT_0063e948);
    }

    node = (AsdSndHandleNode *)asdMemoryAllocTracked(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(AsdSndHandleNode), 1);
    node->id = id;
    node->unk0d = 0;
    node->unk0f = flag;
    if (g_soundHandleList != NULL) {
        for (last = g_soundHandleList; last->next != NULL; last = last->next) {
        }
        node->prev = last;
        node->next = NULL;
        last->next = node;
    } else {
        node->prev = NULL;
        node->next = NULL;
        g_soundHandleList = node;
    }
    DAT_0063e948++;
    return 1;
}

} /* extern "C" */
