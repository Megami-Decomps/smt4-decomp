#include "runtime/Stdio.h"
#include "AsdSDK/AsdLoadFileSyncDefault.h"
#include "Model/MoriModelResource.h"
#include "Model/MoriScene.h"
#include "classes/Obj557c28.h"
#include "classes/MoriModelShadowMap.h"
#include <new>

extern "C" {
extern const char DAT_00526088[];
extern const char DAT_00526098[];
void rt_aeabi_memclr(void *buffer, u32 bytes);
void *asdMemoryAllocTraced(u32 size, const char *file, u32 line);
void moriModelCommandInitBuffers(MoriModelCommand *command, u32 bytes, s32 capacity);
void FUN_00156ea8();
u32 *FUN_001582d0(u32 *value);

/* Loads the default shader and allocates the command queues, tuning block and scratch cell. */
void modelHandleRegistryInit(Obj557c48 *manager)
{
    {
        char path[64];
        rt_aeabi_memclr(path, sizeof(path));
        __2sprintf(path, DAT_00526088);
        void *resource = asdLoadFileSyncNoContext(path, NULL, 1, 0x80);
        manager->setShader(moriModelResourceCreate(&MoriModelRequest().bindTarget(resource).setResourceMode(true)));
    }
    Obj557c28 *memory = (Obj557c28 *)asdMemoryAllocTraced(sizeof(Obj557c28), DAT_00526098, 0x5a);
    Obj557c28 *command = memory != NULL ? new (memory) Obj557c28() : NULL;
    moriModelCommandInitBuffers(command->command(), 0x100000, 0x200);
    manager->setCommands(command);
    MoriModelShadowMap *tuning = (MoriModelShadowMap *)asdMemoryAllocTraced(sizeof(MoriModelShadowMap), DAT_00526098, 0x60);
    if (tuning != NULL)
        tuning = new (tuning) MoriModelShadowMap();
    manager->setShadowMap(tuning);
    FUN_00156ea8();
    u32 *scratch = (u32 *)asdMemoryAllocTraced(sizeof(u32), DAT_00526098, 100);
    if (scratch != NULL)
        scratch = FUN_001582d0(scratch);
    manager->setScratch(scratch);
}
} /* extern "C" */
