#include "common.h"

struct CommandRange {
    u32 physicalAddress;  // 0x00
    u32 size;             // 0x04
    u8 valid;             // 0x08
};

struct ModelBuffers {
    u8 unk00[4];            // 0x00
    u32 flags;              // 0x04
    u8 unk08[0x10];         // 0x08
    u32 indexCount;         // 0x18
    u8 unk1C[0x2C];         // 0x1C
    void *indices;          // 0x48
    u8 unk4C[0x790];        // 0x4C
    CommandRange range;     // 0x7DC
};

extern "C" {

void FUN_00346f2c(ModelBuffers *model);
void *asdPrimAlloc(u32 size);
void rt_memcpy(void *destination, const void *source, u32 size);
u32 osVirtToPhysAddress(void *address);
void modelShaderSubmitCommands(ModelBuffers *model, void *commands, CommandRange *range);

/* Copies the 16-bit indices into primitive memory once (unless already prepared) and submits the model's commands. */
void FUN_0034724c(ModelBuffers *model)
{
    if (model->indexCount != 0) {
        CommandRange *range = &model->range;

        if ((model->flags & 0x100) == 0) {
            FUN_00346f2c(model);
            u32 count = model->indexCount;
            u32 bytes = count << 1;
            void *copy = asdPrimAlloc(bytes);

            rt_memcpy(copy, model->indices, bytes);
            range->physicalAddress = osVirtToPhysAddress(copy);
            range->size = count;
            range->valid = 0;
        }
        modelShaderSubmitCommands(model, (u8 *)model + 0x4C, range);
    }
}

} /* extern "C" */
