#include "event/2dEvent/EventTexJobList.h"

extern "C" {
extern EventTexA *g_eventTex;

/* Drops finished jobs, inserts this job, then compacts and orders the slots. */
void eventInsertSortedTextureJob(u32 job)
{
    eventTexInsertSortedJob(g_eventTex, job);
}
} /* extern "C" */
