/* NON_MATCHING: the same instructions as retail with other callee-saved registers (retail: constant 1 in r5, the
 * global's address in r6, zero in fp, handles in sl, the job index in r9). Twin of the other game's creator. */
#include "common.h"
#include "event/2dEvent/2dEventTex.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "bible/bibleAnalyze.h"

extern "C" {

extern EventTex* g_eventTex;
extern u32 g_eventTexHandles[4];

void taskCreateDraw(const char* name, s32 priority, s32 a, s32 b, s32 (*draw)(u32), s32 c,
                    void* owner, u32 parent);
void eventTexUpdateScreenShake(void* owner);
void eventTextureRelease(void* owner);
s32 eventTexDrawJobs(u32 job);
s32 jobIsValid(u32 job);
void jobSetWork31(u32 job, u8 value);
void jobSetParent(u32 parent, u32 job);
s32 jobGetStatus(u32 job);

/* Creates the event texture manager once and adopts the valid event jobs, returning its process. */
u32 eventTexCreate(void)
{
    if (g_eventTex == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\event\\2dEvent\\2dEventTex.cpp", 133);
        EventTex* manager = static_cast<EventTex*>(asdMemAlloc(0x100, 0x100, 0, 0x68, 1));
        memClear(manager, 0x68);
        g_eventTex = manager;
        manager->flag = 1;
        manager->job = asdProcessCreateSimple(reinterpret_cast<const s8 *>("EVE_2dTex"), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(eventTexUpdateScreenShake), reinterpret_cast<AsdProcFunc>(eventTextureRelease), reinterpret_cast<u32>(manager));
        taskCreateDraw("EVE_2dTexDraw", 0x7d, 0, 0, eventTexDrawJobs, 0, manager, manager->job);
        taskCreateDraw("EVE_2dTexDraw", 0xdb, 0, 0, eventTexDrawJobs, 0, manager, manager->job);

        for (s32 n = 0; n < 4; n++) {
            if (!jobIsValid(g_eventTexHandles[n])) continue;
            jobSetWork31(g_eventTexHandles[n], 1);
            jobSetParent(g_eventTex->job, g_eventTexHandles[n]);

            EventTex* tex = g_eventTex;
            u32 job = g_eventTexHandles[n];
            for (s32 i = 0; i < tex->count; i++) {
                if (!jobIsValid(tex->slots[i])) tex->slots[i] = 0;
            }
            for (s32 i = 0; i < 10; i++) {
                if (tex->slots[i] == 0) {
                    tex->slots[i] = job;
                    break;
                }
            }
            /* Close the gaps left by released jobs. */
            s32 hole = -1;
            for (s32 i = 0; i < 10; i++) {
                if (hole < 0) {
                    if (tex->slots[i] == 0) hole = i;
                } else if (tex->slots[i] != 0) {
                    tex->slots[hole] = tex->slots[i];
                    tex->slots[i] = 0;
                    hole = i;
                }
            }
            tex->count = 0;
            while (tex->count < 10 && tex->slots[tex->count] != 0) tex->count++;

            /* Order the jobs by ascending status. */
            bool swapped;
            do {
                swapped = false;
                for (s32 i = 0; i < tex->count - 1; i++) {
                    if (tex->slots[i] == 0) {
                        if (tex->slots[i + 1] != 0) {
                            tex->slots[i] = tex->slots[i + 1];
                            swapped = true;
                        }
                    } else if (tex->slots[i + 1] != 0 && jobGetStatus(tex->slots[i]) > jobGetStatus(tex->slots[i + 1])) {
                        u32 swap = tex->slots[i];
                        tex->slots[i] = tex->slots[i + 1];
                        tex->slots[i + 1] = swap;
                        swapped = true;
                    }
                }
            } while (swapped);
        }
    }
    return g_eventTex->job;
}

} /* extern "C" */
