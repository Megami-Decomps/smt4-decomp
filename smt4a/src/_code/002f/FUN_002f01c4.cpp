#include "common.h"

extern "C" {

typedef struct Scene {
    /* 0x000 */ u8 unk000[0x598];
    /* 0x598 */ u16 value;
} Scene;
extern Scene *g_statusDown;

/* Stores `value` in the halfword at 0x598 of the scene at 0x588FE8, if there is one. */
void FUN_002f01c4(u16 value)
{
    if (g_statusDown != NULL) {
        g_statusDown->value = value;
    }
}

} /* extern "C" */
