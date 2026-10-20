#include "common.h"

extern "C" {

typedef struct BtlUnit {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u8 kind;
} BtlUnit;

extern u32 g_btlScriptUnit;

extern BtlUnit *btlUnitGet(u32 unit);

/* True when the script unit exists and is not of kind 6. */
u32 btlScriptUnitIsNotKind6(void)
{
    BtlUnit *unit = btlUnitGet(g_btlScriptUnit);

    if (unit == NULL) {
        return 0;
    }
    if (unit->kind == 6) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
