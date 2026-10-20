/* Releases the object's resource: runs FUN_00152bec for valid (non-negative) resources, frees it and clears the slot. */
#include "common.h"

extern "C" {

typedef struct ResourceInfo {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 index;
} ResourceInfo;

typedef struct Resource {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ResourceInfo *info;
} Resource;

typedef struct Object {
    /* 0x0000 */ u8 unk0000[0x4398];
    /* 0x4398 */ Resource *resource;
} Object;

extern void FUN_00152bec(Resource *resource);
extern void asdMdlManagerDestroy(Resource *resource);

void FUN_00339828(Object *obj)
{
    if (obj->resource != NULL) {
        if (obj->resource->info->index >= 0) {
            FUN_00152bec(obj->resource);
        }
        asdMdlManagerDestroy(obj->resource);
        obj->resource = NULL;
    }
}

}
