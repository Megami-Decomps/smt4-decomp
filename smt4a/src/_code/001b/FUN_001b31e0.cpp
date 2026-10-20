#include "common.h"

extern "C" {

typedef struct Effect {
    /* 0x00 */ u8 unk00[0x45];
    /* 0x45 */ u8 active;
    /* 0x46 */ u8 unk46[2];
    /* 0x48 */ void *target;
} Effect;

int FUN_001a6f60(void *target, int arg);
int dataTableGetCount(void);

/* If the effect is active and has a target, releases the target and returns dataTableGetCount(); otherwise returns 0. */
int FUN_001b31e0(Effect *effect)
{
    if (effect->active == 0) {
        return 0;
    }
    if (effect->target == NULL) {
        return 0;
    }
    FUN_001a6f60(effect->target, 0);
    return dataTableGetCount();
}

} /* extern "C" */
