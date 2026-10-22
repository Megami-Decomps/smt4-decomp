/* NON_MATCHING: the maze-owner and list-owner global addresses use exchanged registers. */
#include "map/mapRndMaze.h"
#include "shard/W4_Match1b_RegisteredHandle.h"
#include <stddef.h>

/* These handle arrays extend beyond the common MapRndMazeA prefix. */
struct MazeHandleTables {
    u8 unk000[0x394];
    u8 active;
    u8 unk395[0x1F];
    RegisteredHandle *roots[6];
    RegisteredHandle *groups[6][64];
    RegisteredHandle *special[4];
};
typedef char MazeHandleTablesOffsetsCheck[
    offsetof(MazeHandleTables, groups) == 0x3CC &&
    offsetof(MazeHandleTables, special) == 0x9CC ? 1 : -1];
extern "C" {
extern MazeHandleTables g_mapRndMaze;
extern void *g_handleRegistry;
void ptrListRemoveClearOwner(void *, u32);
}

static __inline void mazeUnregisterHandle(RegisteredHandle *handle)
{
    if (handle != NULL && handle->id != 0) {
        ptrListRemoveClearOwner(g_handleRegistry, handle->id);
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
