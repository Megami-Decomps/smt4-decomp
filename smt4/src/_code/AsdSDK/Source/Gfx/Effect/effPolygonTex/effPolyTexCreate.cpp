/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 99 vs built 93 rows, 71 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonTex.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
void memClear(void *block, int size);
PolyGeom *FUN_00247334(u32 count, int w, int h, u8 *table, int tableSize);
void *FUN_0024c3f8(PolyTexDesc *desc);
u32 *FUN_0024c3d8(PolyTexDesc *desc);
void rt_memcpy(void *dst, const void *src, int size);
void FUN_002472f0(PolyGeom *geom, u32 *resource);
void *FUN_002491b4(u32 *resource);
u32 FUN_0024c3c8(int id);
void FUN_002694f8(u32 texture);
void *effTlpCreate(u32 *resource);

extern u8 DAT_004737c2;

/* Creates a textured polygon object from an effect description: zeroed object, one-segment
 * geometry, the effect's parameters copied in, and the description's resource attached
 * according to its type. */
PolyTexObject *effPolyTexCreate(PolyTexDesc *desc)
{
    PolyTexObject *obj = (PolyTexObject *)memAlloc(0x10000, 0x100, 0, 212, 0x10, 1);
    u32 *resource;

    memClear(obj, 212);
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
        obj->geom = FUN_00247334(1, 2, 4, &DAT_004737c2, 0x4c);
        obj->kind = desc->kind;
        rt_memcpy(obj->params, FUN_0024c3f8(desc), 152);
        resource = FUN_0024c3d8(desc);
        if (resource != NULL) {
            switch (desc->resourceType) {
            case 1:
            case 9:
                FUN_002472f0(obj->geom, resource);
                break;
            case 2:
                obj->resource2 = FUN_002491b4(resource);
                break;
            case 4:
                obj->geom->unk04 = FUN_0024c3c8(*resource & 0xffff);
                FUN_002694f8(obj->geom->unk04);
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
