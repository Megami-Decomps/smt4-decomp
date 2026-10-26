/* Frees every slot's resource (last slot first), then runs the two cleanup steps. */
#include "common.h"

extern "C" {

typedef struct Slot {
    /* 0x00 */ void *resource;
    /* 0x04 */ u8 unk04[0x34];
} Slot; /* 0x38 */

typedef struct SlotPool {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ Slot slots[64];
} SlotPool;

extern SlotPool *g_deferredMapModels;

extern void mapDeferredModelsReset(void);
extern void asdMdlManagerDestroy(void *resource);
extern void FUN_002e0094(void);

void slotPoolReleaseResources(void)
{
    s32 i;

    for (i = 63; i >= 0; i--) {
        if (g_deferredMapModels->slots[i].resource != NULL) {
            asdMdlManagerDestroy(g_deferredMapModels->slots[i].resource);
            g_deferredMapModels->slots[i].resource = NULL;
        }
    }
    FUN_002e0094();
    mapDeferredModelsReset();
}

}
