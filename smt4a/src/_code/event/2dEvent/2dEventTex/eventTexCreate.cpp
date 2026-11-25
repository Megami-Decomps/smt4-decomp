#include "event/2dEvent/EventTexJobList.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"
#include "code/Code0015_Smt4a.h"

extern "C" {
extern EventTexA *g_eventTex;
extern u32 g_eventTexHandles[EVENT_TEX_SLOTS];

void jobSetWork31(u32 job, u8 value);
void jobSetParent(u32 parent, u32 job);

/* Creates the event texture manager once and adopts the valid event jobs, returning its process. */
u32 eventTexCreate(void)
{
    if (g_eventTex == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\event\\2dEvent\\2dEventTex.cpp", 133);
        EventTexA *manager = (EventTexA *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(EventTexA), 1);
        sysMemClear(manager, sizeof(EventTexA));
        g_eventTex = manager;
        manager->flag = 1;
        /* Start the process and register its paired draw jobs before adopting existing jobs. */
        {
            manager->job = asdProcessCreateSimple((const s8 *)"EVE_2dTex", 4, 0, 0,
                eventTexUpdateScreenShake, eventTexFree, (u32)manager);
            AsdProcUpdateFunc draw = eventTexDrawJobs;
            taskCreateDraw((const s8 *)"EVE_2dTexDraw", 0x81, 0, 0, draw, NULL, (u32)manager, (void *)manager->job);
            taskCreateDraw((const s8 *)"EVE_2dTexDraw", 0xdd, 0, 0, draw, NULL, (u32)manager, (void *)manager->job);
        }

        for (s32 n = 0; n < EVENT_TEX_SLOTS; ++n) {
            if (!jobIsValid(g_eventTexHandles[n]))
                continue;
            jobSetWork31(g_eventTexHandles[n], 1);
            jobSetParent(g_eventTex->job, g_eventTexHandles[n]);
            eventTexInsertSortedJob(g_eventTex, g_eventTexHandles[n]);
        }
    }
    return g_eventTex->job;
}

} /* extern "C" */
