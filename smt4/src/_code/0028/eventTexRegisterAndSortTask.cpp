#include "event/2dEvent/EventTexJobList.h"

extern "C" {
extern EventTex *g_eventTex;

/* Drops finished jobs, inserts this job, then compacts and orders the slots. */
void eventTexRegisterAndSortTask(u32 job)
{
    eventTexInsertSortedJob(g_eventTex, job);
}
} /* extern "C" */
