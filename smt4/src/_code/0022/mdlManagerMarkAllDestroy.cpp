#include "common.h"

extern "C" {

typedef struct ModelSet {
    /* 0x00 */ void *model[64];     /* slots 1..63 are used */
} ModelSet; /* 0x100 */

typedef struct ModelManager {
    /* 0x000 */ u8 unk000[0x250];
    /* 0x250 */ u8 active;
    /* 0x251 */ u8 unk251[0x1B];
    /* 0x26C */ void *primary[6];
    /* 0x284 */ ModelSet sets[6];
} ModelManager;

extern ModelManager DAT_004bce8c;
extern void asdMdlManagerMarkDestroy(void *model);

/* Clears the manager's active flag and marks every model (the six primary ones and the 63 of each of the six sets) for destruction. */
void mdlManagerMarkAllDestroy(void)
{
    s32 i;
    s32 j;

    DAT_004bce8c.active = 0;
    for (i = 0; i < 6; i++) {
        for (j = 1; j < 64; j++) {
            if (DAT_004bce8c.sets[i].model[j] != NULL) {
                asdMdlManagerMarkDestroy(DAT_004bce8c.sets[i].model[j]);
            }
        }
        if (DAT_004bce8c.primary[i] != NULL) {
            asdMdlManagerMarkDestroy(DAT_004bce8c.primary[i]);
        }
    }
}

} /* extern "C" */
