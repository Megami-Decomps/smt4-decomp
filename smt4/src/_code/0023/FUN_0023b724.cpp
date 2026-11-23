/* NON_MATCHING: native draw-packet constructor restores byte-only wideIndices initialization; saved first-index, buffer-size, and zero registers still differ. */
#include "common.h"
#include "gfx/RenderTargetState.h"

struct ModelIndexDraw {
    u32 physicalAddress;
    u32 count;
    u8 wideIndices;
    ModelIndexDraw() : physicalAddress(0), count(0), wideIndices(0) {}
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
void __aeabi_memcpy(void *, const void *, u32); // declcheck: local (the shared declaration does not compile here or changes this unit)
void modelShaderSubmitCommands(IndexedModelCommands *, u32 *, const ModelIndexDraw *);
}

/* Reuse resident indices or copy transient ones before submitting shader commands. */
extern "C" void FUN_0023b724(IndexedModelCommands *model, u32 unused, s32 first, u32 count)
{
    if ((model->flags & 0x100) != 0) {
        ModelIndexDraw draw;
        draw.physicalAddress = osVirtToPhysAddress(reinterpret_cast<u32>(model->indices + first));
        draw.count = count;
        draw.wideIndices = 0;
        modelShaderSubmitCommands(model, model->shaderCommands, &draw);
        return;
    }
    ModelIndexDraw *draw = &model->indexDraw;
    void *indices = asdPrimAlloc(count * sizeof(u16));
    __aeabi_memcpy(indices, model->indices + first, count * sizeof(u16));
    draw->physicalAddress = osVirtToPhysAddress(reinterpret_cast<u32>(indices));
    draw->count = count;
    draw->wideIndices = 0;
    modelShaderSubmitCommands(model, model->shaderCommands, draw);
}
