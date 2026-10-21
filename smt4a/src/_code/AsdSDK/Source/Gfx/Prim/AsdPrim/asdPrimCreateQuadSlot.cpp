#include "common.h"

struct AsdPrimitiveSlot {
    u32 data[0x4c / sizeof(u32)];
};

extern "C" {
void* FUN_00178b04(u32 size, const char* file, s32 line);
AsdPrimitiveSlot* slotReset(AsdPrimitiveSlot* slot);
void slotInit(AsdPrimitiveSlot* slot, u32 kind, u32 indexCount, u32 vertexCount);

// Create a primitive slot sized for six indices and four vertices per quad.
AsdPrimitiveSlot* asdPrimCreateQuadSlot(u32 quadCount, u32 kind)
{
    AsdPrimitiveSlot* memory = static_cast<AsdPrimitiveSlot*>(FUN_00178b04(
        sizeof(AsdPrimitiveSlot), "c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Prim\\AsdPrim.cpp", 50));
    AsdPrimitiveSlot* slot = memory != NULL ? slotReset(memory) : NULL;
    slotInit(slot, kind, quadCount * 6, quadCount * 4);
    return slot;
}
}
