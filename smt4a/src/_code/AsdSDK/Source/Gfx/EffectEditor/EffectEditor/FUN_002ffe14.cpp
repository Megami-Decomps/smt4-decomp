#include "AsdSDK/Source/Gfx/Effect/effMenuMatrix.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *memAlloc(u32, u32, u32, u32, u32, u32);
void effMenuListAppend(void *entry, s32 list);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
u32 displayIsStereoActive(void);
extern const char DAT_0053d0d8[];
extern const EffMenuMatrix DAT_005c13f0;

// Queue a matrix-bearing render entry and duplicate it for the stereo pass when active.
void FUN_002ffe14(const EffMenuPosition *position, u32 color,
                  const EffMenuMatrix *transform, u32 resource, f32 scale)
{
    asdDebugTrace(DAT_0053d0d8, 682);
    EffMenuMatrixNode *entry = static_cast<EffMenuMatrixNode *>(memAlloc(0x10000, 0x100, 0, 0x68, 16, 1));
    entry->position = *position;
    if (transform != NULL)
        entry->transform = *transform;
    else
        entry->transform = DAT_005c13f0;
    entry->scale = scale;
    entry->kind = 7;
    entry->color = color;
    entry->resource = resource;
    effMenuListAppend(entry, 1);
    s32 stereoActive = displayIsStereoActive();
    if (stereoActive != 0) {
        asdDebugTrace(DAT_0053d0d8, 701);
        EffMenuMatrixNode *second = static_cast<EffMenuMatrixNode *>(memAlloc(0x10000, 0x100, 0, 0x68, 16, 1));
        __aeabi_memcpy4(second, entry, sizeof(*entry));
        effMenuListAppend(second, 2);
    }
}
}
