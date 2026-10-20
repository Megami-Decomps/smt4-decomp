#include "common.h"

extern "C" {

typedef struct Effect {
    /* 0x00 */ u8 unk00[0x45];
    /* 0x45 */ u8 active;
    /* 0x46 */ u8 unk46[2];
    /* 0x48 */ void *target;
} Effect;

int dataTableFileGetTable(void *target, int arg);
int dataTableGetEntries(void);

/* If the effect is active and has a target, releases the target and returns dataTableGetEntries(); otherwise returns 0. */
int FUN_002ac0f8(Effect *effect)
{
    if (effect->active == 0) {
        return 0;
    }
    if (effect->target == NULL) {
        return 0;
    }
    dataTableFileGetTable(effect->target, 0);
    return dataTableGetEntries();
}

} /* extern "C" */
