/* NON_MATCHING: only the search loop's id load differs: retail compares it through r7, the build through ip. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {
extern AsdSndHandleList g_soundHandleList; /* the registered sounds */

/* Registers sound `id` (with a flag byte) at the end of the list. Returns 0 if it is already registered. */
u32 asdSoundHandleListAdd(s32 id, u8 flag)
{
    AsdSndHandleList *list = &g_soundHandleList;
    AsdSndHandleNode *node;
    AsdSndHandleNode *last;
    u32 result = 0;
    s32 i = 0;

    node = list->handles;
    for (; i < list->count; i++) {
        if (node == NULL) {
            break;
        }
        if (node->id == id) {
            return result;
        }
        node = node->next;
    }

    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Snd\\AsdSoundSystem.cpp", 4263);
    node = (AsdSndHandleNode *)asdMemoryAllocTracked(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(AsdSndHandleNode), 1);
    node->id = id;
    node->unk0d = 0;
    node->unk0f = flag;
    if (list->handles == NULL) {
        node->prev = NULL;
        node->next = NULL;
        list->handles = node;
        list->count++;
        result = 1;
    } else {
        for (last = list->handles; last->next != NULL; last = last->next) {
        }
        node->prev = last;
        node->next = NULL;
        last->next = node;
        list->count++;
        result = 1;
    }
    return result;
}

} /* extern "C" */
