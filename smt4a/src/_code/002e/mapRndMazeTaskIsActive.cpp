#include "common.h"
#include "map/mapRndMaze.h"

extern "C" {

s32 jobFind(u32 job);

typedef struct Task {
    /* 0x00 */ u32 job;
} Task;
extern Task *g_saveLoadRunner;

/* Returns whether the task at 0x588E2C exists and its job is found. */
u8 mapRndMazeTaskIsActive(void)
{
    s32 found;

    if (g_saveLoadRunner == NULL) {
        return 0;
    }
    found = jobFind(g_saveLoadRunner->job);
    return found != 0;
}

} /* extern "C" */
