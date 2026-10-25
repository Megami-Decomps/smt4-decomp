/* NON_MATCHING: 178 vs 173 rows; same instruction sequence except callee-saved register numbering (retail keeps the constant 1 in r5 and the global's address in r6) and the job-ordering loops. Twin of the other game's 2dEventTex creator. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"
#include "bible/bibleAnalyze.h"

// Manager of the 2D event texture layer: the update process plus the jobs it owns.
struct EventTexManager {
    u32 process;        // 0x00
    u32 jobs[10];       // 0x04: parented jobs, ordered by status
    s32 jobCount;       // 0x2c: slots in use
    u8 unk30[0x2c];
    u8 active;          // 0x5c
    u8 unk5d[3];
    u8 unk60[8];
};

extern "C" {

extern EventTexManager* g_eventTex;
extern u32 g_eventTexHandles[4];

void taskCreateDraw(const char* name, s32 priority, s32 a, s32 b, s32 (*draw)(u32), s32 c,
                    void* owner, u32 parent);
void eventTexUpdateScreenShake(void* owner);
void eventTextureRelease(void* owner);
s32 FUN_001f42d4(u32 job);
s32 jobIsValid(u32 job);
void FUN_0026e68c(u32 job, u8 value);
void jobSetParent(u32 parent, u32 job);
s32 jobGetStatus(u32 job);

// Creates the event texture manager once and adopts the valid event jobs, returning its process.
u32 FUN_002ee6f8(void)
{
    if (g_eventTex == NULL) {
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\event\\2dEvent\\2dEventTex.cpp", 133);
        EventTexManager* manager = static_cast<EventTexManager*>(asdMemAlloc(0x100, 0x100, 0, 0x68, 1));
        memClear(manager, 0x68);
        g_eventTex = manager;
        manager->active = 1;
        manager->process = asdProcessCreateSimple(reinterpret_cast<const s8 *>("EVE_2dTex"), 2, 0, 0, reinterpret_cast<AsdProcUpdateFunc>(eventTexUpdateScreenShake), reinterpret_cast<AsdProcFunc>(eventTextureRelease), reinterpret_cast<u32>(manager));
        taskCreateDraw("EVE_2dTexDraw", 0x7d, 0, 0, FUN_001f42d4, 0, manager, manager->process);
        taskCreateDraw("EVE_2dTexDraw", 0xdb, 0, 0, FUN_001f42d4, 0, manager, manager->process);

        for (s32 n = 0; n < 4; n++) {
            if (!jobIsValid(g_eventTexHandles[n])) continue;
            FUN_0026e68c(g_eventTexHandles[n], 1);
            jobSetParent(g_eventTex->process, g_eventTexHandles[n]);

            manager = g_eventTex;
            u32 job = g_eventTexHandles[n];
            for (s32 i = 0; i < manager->jobCount; i++) {
                if (!jobIsValid(manager->jobs[i])) manager->jobs[i] = 0;
            }
            for (s32 i = 0; i < 10; i++) {
                if (manager->jobs[i] == 0) {
                    manager->jobs[i] = job;
                    break;
                }
            }
            // Close the gaps left by released jobs.
            s32 hole = -1;
            for (s32 i = 0; i < 10; i++) {
                if (manager->jobs[i] == 0) {
                    if (hole < 0) hole = i;
                } else if (hole >= 0) {
                    manager->jobs[hole] = manager->jobs[i];
                    manager->jobs[i] = 0;
                    hole = i;
                }
            }
            manager->jobCount = 0;
            while (manager->jobCount < 10 && manager->jobs[manager->jobCount] != 0) manager->jobCount++;

            // Order the jobs by ascending status.
            bool swapped;
            do {
                swapped = false;
                for (s32 i = 0; i < manager->jobCount - 1; i++) {
                    if (manager->jobs[i] != 0) {
                        if (manager->jobs[i + 1] != 0 && jobGetStatus(manager->jobs[i + 1]) < jobGetStatus(manager->jobs[i])) {
                            u32 swap = manager->jobs[i];
                            manager->jobs[i] = manager->jobs[i + 1];
                            manager->jobs[i + 1] = swap;
                            swapped = true;
                        }
                    } else if (manager->jobs[i + 1] != 0) {
                        manager->jobs[i] = manager->jobs[i + 1];
                        swapped = true;
                    }
                }
            } while (swapped);
        }
    }
    return g_eventTex->process;
}

} /* extern "C" */
