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

extern SlotPool *DAT_00447e58;

extern void FUN_00192420(void);
extern void asdMdlManagerDestroy(void *resource);
extern void FUN_002e0094(void);

void FUN_00270194(void)
{
    s32 i;

    for (i = 63; i >= 0; i--) {
        if (DAT_00447e58->slots[i].resource != NULL) {
            asdMdlManagerDestroy(DAT_00447e58->slots[i].resource);
            DAT_00447e58->slots[i].resource = NULL;
        }
    }
    FUN_002e0094();
    FUN_00192420();
}

}
