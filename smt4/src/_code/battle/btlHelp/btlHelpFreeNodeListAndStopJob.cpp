#include "common.h"
#include "shard/JobWork.h"

extern "C" {

typedef struct BtlNode {
    /* 0x000 */ u8 unk000[0x2A4];
    /* 0x2A4 */ struct BtlNode *next;
    /* 0x2A8 */ struct BtlNode *prev;
} BtlNode;

typedef struct BtlList {
    /* 0x0 */ BtlNode *first;
    /* 0x4 */ BtlNode *last;
    /* 0x8 */ s32 count;
} BtlList;

typedef struct BtlHelpWork {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ u32 job;
} BtlHelpWork;

extern BtlList *DAT_00435d78;
s32 jobIsValid(u32 job);
void jobStop(u32 job, s32 arg);
void asdMemFree(void *block);

static inline void btlListUnlink(BtlNode *node)
{
    BtlList *list = DAT_00435d78;
    if (node->prev == NULL) {
        list->first = node->next;
    } else {
        node->prev->next = node->next;
    }
    if (node->next == NULL) {
        list->last = node->prev;
    } else {
        node->next->prev = node->prev;
    }
    list->count--;
}

// Free every node of the list and the list itself, then stop the work's job.
void btlHelpFreeNodeListAndStopJob(u32 job)
{
    BtlHelpWork *work = (BtlHelpWork *)jobGetWork(job);
    BtlList *list = DAT_00435d78;
    if (list != NULL) {
        while (list->first != NULL) {
            BtlNode *node = list->first;
            btlListUnlink(node);
            asdMemFree(node);
        }
        asdMemFree(DAT_00435d78);
        DAT_00435d78 = NULL;
    }
    if (jobIsValid(work->job)) {
        jobStop(work->job, 0);
    }
}

} /* extern "C" */
