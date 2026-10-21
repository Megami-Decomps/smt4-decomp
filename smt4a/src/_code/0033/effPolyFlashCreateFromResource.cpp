#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"

struct PolygonResource {
    u8 unk00[0x0c]; // 0x00
    u16 kind;       // 0x0c
    u8 unk0e[0x0e]; // 0x0e
    u16 type;       // 0x1c
};

extern "C" {
s32 resourceResolveDataPointer(PolygonResource* resource);
void* resourceResolveHeaderPointer(PolygonResource* resource);
PolyObject* effPolyFlashCreate(u32 kind, void* params, s32 arg);

// Creates a flash polygon from a resource's kind, header, and data.
PolyObject* effPolyFlashCreateFromResource(PolygonResource* resource)
{
    s32 data = resourceResolveDataPointer(resource);
    if (resource->type != 1 && resource->type == 4) {
        data = 0;
    }
    void* params = resourceResolveHeaderPointer(resource);
    return effPolyFlashCreate(resource->kind, params, data);
}
}
