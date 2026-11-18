/* NON_MATCHING: only the search loop's id load differs: retail compares it through r7, the build through ip. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdMemAlloc.h"

struct SoundHandleList {
    /* 0x00 */ AsdSndHandleNode *head; /* the registered sounds */
    /* 0x04 */ s32 count;
};

extern "C" {
extern SoundHandleList g_soundHandleList;

/* Registers sound `id` (with a flag byte) at the end of the list. Returns 0 if it is already registered. */
u32 asdSoundHandleListAdd(s32 id, u8 flag)
{
    SoundHandleList *list = &g_soundHandleList;
    AsdSndHandleNode *node;
    AsdSndHandleNode *last;
    u32 result = 0;
    s32 i = 0;

    node = list->head;
    if (0 < list->count) {
        do {
            if (node == NULL) {
                break;
            }
            if (node->id == id) {
                return result;
            }
            node = node->next;
            i++;
        } while (i < list->count);
    }

    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Snd\\AsdSoundSystem.cpp", 4263);
    node = (AsdSndHandleNode *)asdMemoryAllocTracked(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(AsdSndHandleNode), 1);
    node->id = id;
    node->unk0d = 0;
    node->unk0f = flag;
    if (list->head == NULL) {
        node->prev = NULL;
        node->next = NULL;
        list->head = node;
        list->count++;
        result = 1;
    } else {
        for (last = list->head; last->next != NULL; last = last->next) {
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
