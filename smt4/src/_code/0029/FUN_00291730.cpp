#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

typedef struct Object00291730 {
    /* 0x000 */ u8 unk000[0xb7c];
    /* 0xb7c */ s32 node;
} Object00291730;

void asdTMTexTableReleaseNode(s32 table, s32 node);

/* Releases the object's texture-table node (if it holds one), then frees table entry 0x33. */
void FUN_00291730(Object00291730 *obj)
{
    if (obj->node != 0) {
        asdTMTexTableReleaseNode(0x33, obj->node);
        obj->node = 0;
    }
    asdTMTexTableFreeEntry(0x33);
}

} /* extern "C" */
