#include "common.h"

struct ResourceLocalView {
    u8 unk00[0x04]; // 0x00
    s32 unk04;      // 0x04
    s32 unk08;      // 0x08
    u8 unk0C[0x04]; // 0x0C
    u32 unk10;      // 0x10
    u32 unk14;      // 0x14
    u32 unk18;      // 0x18
    u32 unk1C;      // 0x1C
    u32 unk20;      // 0x20
    u32 unk24;      // 0x24
    void *unk28;    // 0x28
    u8 unk2C[0x10]; // 0x2C
    u8 unk3C;       // 0x3C
    u8 unk3D;       // 0x3D
};

extern "C" {
extern void *g_aocSystem;

void asdMemFree(void *allocation);
void FUN_00389f54(void *system, s32 value);
void FUN_0038a134(void *system, s32 value);
void FUN_0033f2b8(ResourceLocalView *resource, s32 value);
void FUN_0033e7c4(ResourceLocalView *resource, s32 value);

// Releases the optional allocation and dispatches the resource update by its mode.
void resourceReleaseAllocationAndDispatchUpdate(ResourceLocalView *resource)
{
    if (resource->unk28 != 0) {
        asdMemFree(resource->unk28);
        resource->unk10 = 0;
        resource->unk14 = 0;
        resource->unk18 = 0;
        resource->unk1C = 0;
        resource->unk20 = 0;
        resource->unk24 = 0;
        resource->unk28 = 0;
        resource->unk3C = 0;
        resource->unk3D = 0;
    }

    switch (resource->unk08) {
    case 12:
        FUN_0038a134(g_aocSystem, resource->unk04);
        FUN_0033e7c4(resource, resource->unk04);
        break;
    default:
        FUN_00389f54(g_aocSystem, resource->unk04);
        FUN_0033f2b8(resource, -resource->unk04);
        break;
    }
}
}
