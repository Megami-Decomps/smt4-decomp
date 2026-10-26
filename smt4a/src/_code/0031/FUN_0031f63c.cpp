#include "common.h"

extern "C" {

typedef struct StatusDown {
    /* 0x000 */ u8 unk000[0x518];
    /* 0x518 */ s32 state;
} StatusDown;

extern StatusDown *g_statusDown; /* 0x588fe8 */

/* Whether the status screen exists and is in state 23. */
u32 FUN_0031f63c(void)
{
    StatusDown *obj = g_statusDown;
    u32 result = 0;

    if (obj == NULL) {
        return 0;
    }
    if (obj->state == 23) {
        result = 1;
    }
    return result;
}

}
