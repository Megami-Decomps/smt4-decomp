/* NON_MATCHING: 178 vs 173 rows; same instruction sequence except callee-saved register numbering (retail keeps the constant 1 in r5 and the global's address in r6) and the job-ordering loops. Twin of the other game's 2dEventTex creator. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

// Manager of the 2D event texture layer: the update process plus the jobs it owns.
struct EventTexManager {
    u32 process;        // 0x00
    u32 jobs[16];       // 0x04: parented jobs, ordered by status
    s32 jobCount;       // 0x44: slots in use
    u8 unk48[0x44];
    u8 active;          // 0x8c
    u8 unk8d[3];
    u8 unk90[8];
};

extern "C" {

extern EventTexManager* g_eventTex;
extern u32 g_eventTexHandles[4];

void* asdMemoryAllocTracked(u32 size, u32 alignment, u32 arg, u32 memoryType, u32 flag);
void sysMemClear(void* block, u32 size);
u32 asdProcessCreateSimple(const char* name, s32 priority, s32 a, s32 b, void (*update)(void*),
                           void (*release)(void*), void* owner);
void taskCreateDraw(const char* name, s32 priority, s32 a, s32 b, s32 (*draw)(u32), s32 c,
                    void* owner, u32 parent);
void FUN_002ad130(void* owner);
void eventTexFree(void* owner);
s32 FUN_002ad180(u32 job);
s32 jobIsValid(u32 job);
void FUN_0026e68c(u32 job, s32 arg);
void jobSetParent(u32 parent, u32 job);
s32 jobGetStatus(u32 job);

// Creates the event texture manager once and adopts the valid event jobs, returning its process.
u32 FUN_0036f424(void)
{
    if (g_eventTex == NULL) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\event\\2dEvent\\2dEventTex.cpp", 133);
        EventTexManager* manager = static_cast<EventTexManager*>(asdMemoryAllocTracked(0x100, 0x100, 0, 0x98, 1));
        sysMemClear(manager, 0x98);
        g_eventTex = manager;
        manager->active = 1;
        manager->process = asdProcessCreateSimple("EVE_2dTex", 4, 0, 0, FUN_002ad130,
                                                  eventTexFree, manager);
        taskCreateDraw("EVE_2dTexDraw", 0x81, 0, 0, FUN_002ad180, 0, manager, manager->process);
        taskCreateDraw("EVE_2dTexDraw", 0xdd, 0, 0, FUN_002ad180, 0, manager, manager->process);

        for (s32 n = 0; n < 4; n++) {
            if (!jobIsValid(g_eventTexHandles[n])) continue;
            FUN_0026e68c(g_eventTexHandles[n], 1);
            jobSetParent(g_eventTex->process, g_eventTexHandles[n]);

            manager = g_eventTex;
            u32 job = g_eventTexHandles[n];
            for (s32 i = 0; i < manager->jobCount; i++) {
                if (!jobIsValid(manager->jobs[i])) manager->jobs[i] = 0;
            }
            for (s32 i = 0; i < 16; i++) {
                if (manager->jobs[i] == 0) {
                    manager->jobs[i] = job;
                    break;
                }
            }
            // Close the gaps left by released jobs.
            s32 hole = -1;
            for (s32 i = 0; i < 16; i++) {
                if (manager->jobs[i] == 0) {
                    if (hole < 0) hole = i;
                } else if (hole >= 0) {
                    manager->jobs[hole] = manager->jobs[i];
                    manager->jobs[i] = 0;
                    hole = i;
                }
            }
            manager->jobCount = 0;
            while (manager->jobCount < 16 && manager->jobs[manager->jobCount] != 0) manager->jobCount++;

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
