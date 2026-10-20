#include "common.h"

extern "C" {

typedef struct Unite {
    /* 0x000 */ u8 unk000[0x430];
    /* 0x430 */ u8 active;
    /* 0x431 */ u8 unk431[0x57];
    /* 0x488 */ s32 selection;
} Unite;

extern Unite *g_unite;

s32 FUN_0026272c(void);
int obj04Finish(void);

/* Finishes the unite screen's object if it is active and FUN_0026272c reports 0, then clears the selection. */
void FUN_002a7b74(void)
{
    Unite *unite = g_unite;

    if (unite != NULL) {
        if (unite->active != 0 && FUN_0026272c() == 0) {
            obj04Finish();
        }
        unite = g_unite;
        if (unite != NULL) {
            unite->selection = -1;
        }
    }
}

} /* extern "C" */
