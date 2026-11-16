#include "AsdSDK/Source/Gfx/Effect/effPolygonTex.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/AsdDebug.h"
#include <string.h>

static __inline void quaternionSetIdentity(PolyVec4 *quaternion)
{
    PolyVec4 zero = {0, 0, 0, 0};
    *quaternion = zero;
    quaternion->w = 1.0f;
}

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *effGeomCreateRepeatedIndexList(u32 count, int w, int h, u8 *table, int tableSize);
void *resourceResolveHeaderPointer(PolyTexDesc *desc);
u32 *resourceResolveDataPointer(PolyTexDesc *desc);
void rt_memcpy(void *dst, const void *src, int size);
void textureSlotReplace(PolyGeom *geom, u32 *resource);
void *spriteGroupCreateFromFile(u32 *resource);
u32 sysGetTableWord(int id);
void refCountIncrement(u32 texture);
void *effTlpCreate(u32 *resource);

extern u8 g_effQuadIndexList;
extern const char DAT_00410498[]; /* effPolygonTex.cpp: __FILE__ */

/* Creates a textured polygon object from an effect description: zeroed object, one-segment
 * geometry, the effect's parameters copied in, and the description's resource attached
 * according to its type. */
PolyTexObject *effPolyTexCreate(PolyTexDesc *desc)
{
    PolyTexObject *obj;
    u32 *resource;

    asdDebugTrace(DAT_00410498, 36);
    obj = (PolyTexObject *)memAlloc(0x10000, 0x100, 0, 212, 0x10, 1);

    memClear(obj, 212);
    quaternionSetIdentity(&obj->rotation0);
    quaternionSetIdentity(&obj->rotation1);
    obj->unk24 = -1;
    obj->scale = 1.0f;
    if (desc != NULL) {
        obj->geom = effGeomCreateRepeatedIndexList(1, 2, 4, &g_effQuadIndexList, 0x4c);
        obj->kind = desc->kind;
        rt_memcpy(obj->params, resourceResolveHeaderPointer(desc), 152);
        resource = resourceResolveDataPointer(desc);
        if (resource != NULL) {
            switch (desc->resourceType) {
            case 1:
            case 9:
                textureSlotReplace(obj->geom, resource);
                break;
            case 2:
                obj->resource2 = spriteGroupCreateFromFile(resource);
                break;
            case 4:
                {
                    PolyGeom *geom = obj->geom;
                    geom->unk04 = sysGetTableWord(*resource & 0xffff);
                    refCountIncrement(geom->unk04);
                }
                break;
            case 7:
                obj->resource7 = effTlpCreate(resource);
                break;
            }
        }
    }
    return obj;
}

} /* extern "C" */
