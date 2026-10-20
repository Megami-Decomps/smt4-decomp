#include "common.h"

extern "C" {

typedef struct BtlUnit {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 state;      /* 5: down */
} BtlUnit;

extern u32 g_btlScriptUnit; /* 0x43427c */

extern BtlUnit *btlUnitGet(u32 unit);

/* Whether the script's current unit exists and is not in state 5. */
u32 FUN_003382e8(void)
{
    BtlUnit *unit = btlUnitGet(g_btlScriptUnit);

    if (unit != NULL) {
        if (unit->state == 5) {
            return 0;
        }
        return 1;
    }
    return 0;
}

} /* extern "C" */
