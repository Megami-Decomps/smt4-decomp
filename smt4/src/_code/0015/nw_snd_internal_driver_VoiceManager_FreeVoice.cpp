/* NON_MATCHING: register allocation only: retail keeps the manager in r5 and the voice in r4 (swapped here) */
/* Returns a voice to the free list: unlinks it from the active list and appends it to the free list. */
#include "common.h"

extern "C" {

typedef struct VoiceNode {
    /* 0x00 */ u8 unk00[8];
} VoiceNode;

typedef struct Voice {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ VoiceNode node;      /* link in the manager's active/free list */
} Voice;

typedef struct VoiceManager {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 activeList[0x0C];
    /* 0x10 */ u8 freeList[4];
    /* 0x14 */ u8 freeListEnd[4];
} VoiceManager;

extern void nw_ut_internal_LinkListImpl_erase_2B743C(void *list, VoiceNode *node);
extern void nw_ut_internal_LinkListImpl_insert(void *list, void *position, VoiceNode *node);

void nw_snd_internal_driver_VoiceManager_FreeVoice(VoiceManager *manager, Voice *voice)
{
    nw_ut_internal_LinkListImpl_erase_2B743C(manager->activeList, &voice->node);
    nw_ut_internal_LinkListImpl_insert(manager->freeList, manager->freeListEnd, &voice->node);
}

}
