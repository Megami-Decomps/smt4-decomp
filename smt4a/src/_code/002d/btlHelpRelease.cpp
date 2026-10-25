#include "battle/btlHelp.h"
#include "shard/JobWork.h"

/* The work area of the job that runs the help screens. */
struct BtlHelpWorkA {
    /* 0x00 */ u8 unk00[0x70];
    /* 0x70 */ u32 subJob;
};

extern "C" {

extern BtlHelpListA *g_btlHelp;

s32 jobIsValid(u32 job);
void jobStop(u32 job, s32 mode);
void asdMemFree(void *block);

/* Unlinks a help entry from the help list. */
static __inline BtlHelpEntryA *btlHelpListRemove(BtlHelpListA *list, BtlHelpEntryA *entry)
{
    if (entry->prev == NULL) {
        list->head = entry->next;
    } else {
        entry->prev->next = entry->next;
    }
    if (entry->next == NULL) {
        list->tail = entry->prev;
    } else {
        entry->next->prev = entry->prev;
    }
    list->count--;
    return entry;
}

/* Frees every help entry and the help list itself, then stops the job it runs. */
void btlHelpRelease(u32 job)
{
    BtlHelpWorkA *work = (BtlHelpWorkA *)jobGetWork(job);
    BtlHelpListA *list = g_btlHelp;

    if (list != NULL) {
        while (list->head != NULL) {
            asdMemFree(btlHelpListRemove(g_btlHelp, list->head));
        }
        asdMemFree(g_btlHelp);
        g_btlHelp = NULL;
    }
    if (jobIsValid(work->subJob)) {
        jobStop(work->subJob, 0);
    }
}

} /* extern "C" */
