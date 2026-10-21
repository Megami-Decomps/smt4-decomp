#include "common.h"

extern "C" {

typedef struct GimicSlot {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ void *model;
    /* 0x20 */ u8 unk20[8];
} GimicSlot; /* 0x28 */

typedef struct MapGimic {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ GimicSlot slots[24];
} MapGimic;

extern MapGimic *g_mapGimic;

extern void asdMdlManagerMarkDestroy(void *model);

/* Marks every slot's model for destruction, last slot first. */
void mapGimicMarkModelsDestroy(void)
{
    s32 i;

    for (i = 23; i >= 0; i--) {
        if (g_mapGimic->slots[i].model != NULL) {
            asdMdlManagerMarkDestroy(g_mapGimic->slots[i].model);
        }
    }
}

} /* extern "C" */
