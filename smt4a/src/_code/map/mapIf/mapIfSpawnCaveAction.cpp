#include "AsdSDK/AsdDebug.h"
#include "map/MapIfSpawn.h"

extern "C" {

extern MapIfSpawns *g_mapIf;
extern u32 g_handleRegistry;

void *FUN_00178b04(u32 size, const char *file, int line);   /* allocate with source location */
MoriModelContent *modelListInit(void *mem);                 /* content constructor */
void FUN_0040aa6c(MoriModelContent *content, const char *name);
void FUN_0040aad4(MoriModelContent *content, u32 arg);
void handleRegistryRegisterObject(u32 registry, u32 object);
void controllerSetDestination(u32 object, const f32 *position);
void controllerSetRotationEulerDegrees(u32 object, f32 x, f32 y, f32 z);
void FUN_003fe86c(u32 object, s32 first, s32 second, f32 x, f32 y);

// Spawns the cave action model at the given position and starts it moving there.
void mapIfSpawnCaveAction(f32 x, f32 y, f32 z, f32 w)
{
    MapIfSpawnBlock *block = &g_mapIf->cave;
    block->active = 1;
    block->unk04 = 0;
    block->unk08 = 0;
    block->position[0] = x;
    block->position[1] = y;
    block->position[2] = z;
    block->position[3] = w;
    void *mem = FUN_00178b04(0x20, "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapIf.cpp", 0x1827);
    if (mem != NULL) {
        mem = modelListInit(mem);
    }
    block->content = (MoriModelContent *)mem;
    FUN_0040aa6c(block->content, "map/all/action_cave.bam");
    FUN_0040aad4(block->content, 0);
    u32 object = (u32)block->content->body;
    handleRegistryRegisterObject(g_handleRegistry, object);
    controllerSetDestination(object, block->position);
    controllerSetRotationEulerDegrees(object, 0.0f, block->position[3], 0.0f);
    FUN_003fe86c(object, 0, 2, 0.0f, 0.0f);
}

}
