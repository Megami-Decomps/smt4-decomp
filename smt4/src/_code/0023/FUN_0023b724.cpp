/* NON_MATCHING: temporary draw initialization clears padding and saved-register allocation differs from retail. */
#include "common.h"

struct ModelIndexDraw {
    u32 physicalAddress;
    u32 count;
    u8 wideIndices;
};
struct IndexedModelCommands {
    u32 unk00;
    u32 flags;
    u8 unk08[0x40];
    const u16 *indices; /* 0x48 */
    u32 shaderCommands[0x1E4]; /* 0x4C */
    ModelIndexDraw indexDraw; /* 0x7DC */
};
extern "C" {
void *asdPrimAlloc(u32);
void rt_memcpy(void *, const void *, u32);
u32 osVirtToPhysAddress(const void *);
void modelShaderSubmitCommands(IndexedModelCommands *, u32 *, const ModelIndexDraw *);
}

/* Reuse resident indices or copy transient ones before submitting shader commands. */
extern "C" void FUN_0023b724(IndexedModelCommands *model, u32 unused, s32 first, u32 count)
{
    if ((model->flags & 0x100) != 0) {
        ModelIndexDraw draw = {0, 0, 0};
        draw.physicalAddress = osVirtToPhysAddress(model->indices + first);
        draw.count = count;
        draw.wideIndices = 0;
        modelShaderSubmitCommands(model, model->shaderCommands, &draw);
        return;
    }
    ModelIndexDraw *draw = &model->indexDraw;
    void *indices = asdPrimAlloc(count * sizeof(u16));
    rt_memcpy(indices, model->indices + first, count * sizeof(u16));
    draw->physicalAddress = osVirtToPhysAddress(indices);
    draw->count = count;
    draw->wideIndices = 0;
    modelShaderSubmitCommands(model, model->shaderCommands, draw);
}
