/* NON_MATCHING: the maze-owner and list-owner global addresses use exchanged registers. */
#include "map/mapRndMaze.h"
#include "Model/MoriModelContent.h"
#include "Model/MoriModelManager.h"
#include <stddef.h>

/* These handle arrays extend beyond the common MapRndMazeA prefix. */
struct MazeHandleTables {
    u8 unk000[0x394];
    u8 active;
    u8 unk395[0x1F];
    MoriModelContent *roots[6];
    MoriModelContent *groups[6][64];
    MoriModelContent *special[4];
};
typedef char MazeHandleTablesOffsetsCheck[
    offsetof(MazeHandleTables, groups) == 0x3CC &&
    offsetof(MazeHandleTables, special) == 0x9CC ? 1 : -1];
extern "C" {
extern MazeHandleTables g_mapRndMaze;
}

static __inline void mazeUnregisterHandle(MoriModelContent *handle)
{
    if (handle != NULL && handle->body != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, handle->body);
    }
}

/* Unregister maze objects, preserving each group's reserved zero slot. */
extern "C" void FUN_0031eb04(void)
{
    g_mapRndMaze.active = 0;
    for (s32 group = 0; group < 6; ++group) {
        for (s32 slot = 1; slot < 64; ++slot) {
            mazeUnregisterHandle(g_mapRndMaze.groups[group][slot]);
        }
        mazeUnregisterHandle(g_mapRndMaze.roots[group]);
    }
    mazeUnregisterHandle(g_mapRndMaze.special[2]);
    mazeUnregisterHandle(g_mapRndMaze.special[1]);
    mazeUnregisterHandle(g_mapRndMaze.special[0]);
    mazeUnregisterHandle(g_mapRndMaze.special[3]);
}
