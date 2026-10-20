/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 99 vs built 93 rows, 71 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonTex.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
void sysMemClear(void *block, int size);
PolyGeom *FUN_002b3b58(u32 count, int w, int h, u8 *table, int tableSize);
void *FUN_002b41c4(PolyTexDesc *desc);
u32 *FUN_002721e4(PolyTexDesc *desc);
void rt_memcpy(void *dst, const void *src, int size);
void textureSlotReplace(PolyGeom *geom, u32 *resource);
void *FUN_00221f20(u32 *resource);
u32 FUN_0037a834(int id);
void refCountIncrement(u32 texture);
void *effTlpCreate(u32 *resource);

extern u8 DAT_005c1f82;

/* Creates a textured polygon object from an effect description: zeroed object, one-segment
 * geometry, the effect's parameters copied in, and the description's resource attached
 * according to its type. */
PolyTexPivotObject *effPolyTexPivotCreate(PolyTexDesc *desc)
{
    PolyTexPivotObject *obj = (PolyTexPivotObject *)memAlloc(0x10000, 0x100, 0, 328, 0x10, 1);
    u32 *resource;

    sysMemClear(obj, 328);
    obj->rotation0.x = 0;
    obj->rotation0.y = 0;
    obj->rotation0.z = 0;
    obj->rotation0.w = 1.0f;
    obj->rotation1.x = 0;
    obj->rotation1.y = 0;
    obj->rotation1.z = 0;
    obj->rotation1.w = 1.0f;
    obj->unk24 = -1;
    obj->scale = 1.0f;
    if (desc != NULL) {
        obj->geom = FUN_002b3b58(1, 2, 4, &DAT_005c1f82, 0x4c);
        obj->kind = desc->kind;
        rt_memcpy(obj->params, FUN_002b41c4(desc), 268);
        resource = FUN_002721e4(desc);
        if (resource != NULL) {
            switch (desc->resourceType) {
            case 1:
            case 9:
                textureSlotReplace(obj->geom, resource);
                break;
            case 2:
                obj->resource2 = FUN_00221f20(resource);
                break;
            case 4:
                obj->geom->unk04 = FUN_0037a834(*resource & 0xffff);
                refCountIncrement(obj->geom->unk04);
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
