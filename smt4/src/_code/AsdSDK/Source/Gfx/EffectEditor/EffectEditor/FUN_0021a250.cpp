/* NON_MATCHING: rectangle copy register allocation adds one store; matrix load scheduling differs. */
#include "AsdSDK/Source/Gfx/Effect/effMenuMatrix.h"
#include "AsdSDK/AsdDebug.h"
#include <string.h>

extern "C" {
void *memAlloc(u32, u32, u32, u32, u32, u32);
void effMenuListAppend(void *, s32);
void __aeabi_memcpy4(void *, const void *, u32);
extern const char DAT_0040930c[];
extern const EffMenuMatrix DAT_004728f0;

// Queue matching matrix-render entries for the two menu passes.
void FUN_0021a250(const EffMenuRectangle *rectangle, u32 color,
                  const EffMenuMatrix *transform, u32 resource, f32 scale)
{
    asdDebugTrace(DAT_0040930c, 680);
    EffMenuMatrixNode *entry = static_cast<EffMenuMatrixNode *>(memAlloc(0x10000, 0x100, 0, 0x68, 16, 1));
    memcpy(&entry->rectangle, rectangle, sizeof(*rectangle));
    if (transform != NULL)
        entry->transform = *transform;
    else
        entry->transform = DAT_004728f0;
    entry->scale = scale;
    entry->kind = 7;
    entry->color = color;
    entry->resource = resource;
    effMenuListAppend(entry, 1);
    asdDebugTrace(DAT_0040930c, 698);
    EffMenuMatrixNode *second = static_cast<EffMenuMatrixNode *>(memAlloc(0x10000, 0x100, 0, 0x68, 16, 1));
    __aeabi_memcpy4(second, entry, sizeof(*entry));
    effMenuListAppend(second, 2);
}
}
