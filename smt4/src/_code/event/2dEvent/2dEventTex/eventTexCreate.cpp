#include "event/2dEvent/EventTexJobList.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"
#include "code/Code002c_Smt4.h"

extern "C" {
extern EventTex *g_eventTex;
extern u32 g_eventTexHandles[EVENT_TEX_SLOTS];

void jobSetWork31(u32 job, u8 value);
void jobSetParent(u32 parent, u32 job);

/* Creates the event texture manager once and adopts the valid event jobs, returning its process. */
u32 eventTexCreate(void)
{
    if (g_eventTex == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\event\\2dEvent\\2dEventTex.cpp", 133);
        EventTex *manager = (EventTex *)asdMemAlloc(0x100, 0x100, 0, sizeof(EventTex), 1);
        memClear(manager, sizeof(EventTex));
        g_eventTex = manager;
        manager->flag = 1;
        /* Start the process and register its paired draw jobs before adopting existing jobs. */
        {
            manager->job = asdProcessCreateSimple((const s8 *)"EVE_2dTex", 2, 0, 0,
                eventTexUpdateScreenShake, eventTextureRelease, (u32)manager);
            AsdProcUpdateFunc draw = eventTexDrawJobs;
            taskCreateDraw((const s8 *)"EVE_2dTexDraw", 0x7d, 0, 0, draw, NULL, (u32)manager, (void *)manager->job);
            taskCreateDraw((const s8 *)"EVE_2dTexDraw", 0xdb, 0, 0, draw, NULL, (u32)manager, (void *)manager->job);
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
