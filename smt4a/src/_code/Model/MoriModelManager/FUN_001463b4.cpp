/* NON_MATCHING: only the constant materialisation and store order of the shader setup block differ (all statement orders tried). */
#include "classes/Obj557c48.h"
#include "classes/Obj557c28.h"
#include "classes/Obj557b28.h"
#include <new>

class Obj557d00;

struct ModelShaderResourceSetup {
    u32 handle;
    u8 isResource;
    u8 padding05[3];
    u32 first;
    u32 second;
    u32 third;
    u8 mode;
    u8 padding15[3];
};


extern "C" {
extern const char DAT_00526088[];
extern const char DAT_00526098[];
void rt_aeabi_memclr(void *buffer, u32 bytes);
s32 textFormatBuffer(char *destination, const char *format, ...);
u32 asdLoadFileSyncNoContext(const char *path, u32 *size, u32 mode, u32 flags);
Obj557d00 *FUN_001581dc(void *setup);
void *FUN_00178b04(u32 size, const char *file, u32 line);
void moriModelCommandInitBuffers(MoriModelCommand *command, u32 bytes, s32 capacity);
void FUN_00156ea8();
u32 *FUN_001582d0(u32 *value);

// Load the default shader and allocate the command queues, tuning block and scratch cell.
void FUN_001463b4(Obj557c48 *manager)
{
    ModelShaderResourceSetup setup;
    {
        char path[64];
        rt_aeabi_memclr(path, sizeof(path));
        textFormatBuffer(path, DAT_00526088);
        setup.handle = asdLoadFileSyncNoContext(path, NULL, 1, 0x80);
        setup.mode = 0;
        setup.second = 0x10000;
        setup.first = 0x30000;
        setup.third = 0x10000;
        setup.isResource = 1;
        manager->setShader(FUN_001581dc(&setup));
    }
    Obj557c28 *memory = static_cast<Obj557c28 *>(FUN_00178b04(sizeof(Obj557c28), DAT_00526098, 0x5a));
    Obj557c28 *command = memory != NULL ? new (memory) Obj557c28() : NULL;
    moriModelCommandInitBuffers(command->command(), 0x100000, 0x200);
    manager->setCommands(command);
    Obj557b28 *tuning = static_cast<Obj557b28 *>(FUN_00178b04(sizeof(Obj557b28), DAT_00526098, 0x60));
    if (tuning != NULL)
        tuning = new (tuning) Obj557b28();
    manager->setShadowMap(tuning);
    FUN_00156ea8();
    u32 *scratch = static_cast<u32 *>(FUN_00178b04(sizeof(u32), DAT_00526098, 100));
    if (scratch != NULL)
        scratch = FUN_001582d0(scratch);
    manager->setScratch(scratch);
}
}
