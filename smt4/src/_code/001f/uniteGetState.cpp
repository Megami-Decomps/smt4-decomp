#include "common.h"

extern "C" {

typedef struct Unite {
    /* 0x000 */ u8 unk000[0x420];
    /* 0x420 */ u8 state;
} Unite;

extern Unite *g_unite; /* 0x43dd68 */

/* The unite menu's state byte, or 0 when it is not open. */
u8 uniteGetState(void)
{
    if (g_unite != NULL) {
        return g_unite->state;
    }
    return 0;
}

} /* extern "C" */
