/* NON_MATCHING: debug trace and list/count struct now match; remaining difference is register allocation (retail keeps 0 in r2 and uses r5/r6/r7 for id, flag and the loop temp). */
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
    AsdSndHandleNode *node;
    AsdSndHandleNode *last;
    s32 i = 0;

    node = g_soundHandleList.head;
    if (0 < g_soundHandleList.count) {
        do {
            if (node == NULL) {
                break;
            }
            if (node->id == id) {
                return 0;
            }
            node = node->next;
            i++;
        } while (i < g_soundHandleList.count);
    }

    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Snd\\AsdSoundSystem.cpp", 4263);
    node = (AsdSndHandleNode *)asdMemoryAllocTracked(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(AsdSndHandleNode), 1);
    node->id = id;
    node->unk0d = 0;
    node->unk0f = flag;
    if (g_soundHandleList.head != NULL) {
        for (last = g_soundHandleList.head; last->next != NULL; last = last->next) {
        }
        node->prev = last;
        node->next = NULL;
        last->next = node;
    } else {
        node->prev = NULL;
        node->next = NULL;
        g_soundHandleList.head = node;
    }
    g_soundHandleList.count++;
    return 1;
}

} /* extern "C" */
