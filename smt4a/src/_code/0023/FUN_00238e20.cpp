/* NON_MATCHING: Task argument preservation and setup-instruction scheduling differ. */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
/* Callback signature is not recovered here; only its code address is used. */
void FUN_00213020();
void *taskCreate(void (*entry)(), u32, u32, u32, u32, u32, u32, u32, u32);
void sysMemClear(void *destination, u32 bytes);
void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);
void FUN_0034a16c(const PositionedLayoutData *layout,
                  void *firstPair, void *secondPair,
                  void *origin, void *dimensions);

InitializedLayoutTaskA *FUN_00238e20(
    u32 parameter1, const PositionedLayoutParameters *parameters,
    const PositionedLayoutData *layout, u32 parameter4,
    u32 parameter5, u8 parameter6, u16 parameter7, u32 parameter8)
{
    InitializedLayoutTaskA *task = static_cast<InitializedLayoutTaskA *>(
        taskCreate(FUN_00213020, 0, 0, 0, 0, 0x304, 3, 0, 0));
    if (task != 0) {
        sysMemClear(task, 0x304);
        __aeabi_memcpy4(&task->parameters, parameters, 0x134);
        __aeabi_memcpy4(&task->layout, layout, 0xB0);
        task->parameter4 = parameter4;
        task->parameter8 = parameter8;
        task->parameter1 = parameter1;
        task->parameter6 = parameter6;
        task->state234 = 0xFFFFFFFFU;
        task->state230 = 0xFFFFFFFFU;
        FUN_0034a16c(&task->layout,
                      task->unk000 + 0x28, task->unk000 + 0x30,
                      task->unk000 + 0x0C, task->unk000 + 0x18);
        task->parameter5 = parameter5;
        task->frameCopy = parameter7;
        task->frame = parameter7;
    }
    return task;
}
}
