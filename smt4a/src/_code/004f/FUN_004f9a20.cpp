#include "battle/BtlMainAccess.h"
#include "common.h"
#include <string.h>

extern "C" {

s32 btlGetMaxSlotMetric(void *unit);
s32 btlScriptUnitHasFlags(void);

typedef struct {
    u8 unk0[0x10];
    const char *name;  /* 0x10 */
} BtlEffectState;

extern BtlEffectState g_btlEffect;

typedef struct {
    char name[0x10];   /* 0x00 */
    s16 bonus;         /* 0x10 */
    u8 unk12[4];
} BtlNameBonus; /* size 0x16 */

typedef struct {
    u8 unk0[0xb0];
    BtlNameBonus entries[4]; /* 0xb0 */
} BtlNameBonusTable;

typedef struct {
    u8 unk0[0x1f54];
    BtlNameBonusTable *bonusTable; /* 0x1f54 */
} BtlBonusUnit;

static BtlNameBonus *btlFindNameBonus(BtlBonusUnit *unit)
{
    s32 i;

    if (unit->bonusTable != NULL) {
        for (i = 0; i < 4; i++) {
            BtlNameBonus *entry = &unit->bonusTable->entries[i];
            if (entry->name != NULL && strcmp(entry->name, g_btlEffect.name) == 0) {
                return &unit->bonusTable->entries[i];
            }
        }
    }
    return NULL;
}

/* Returns the unit's base value plus the bonus listed for the current effect's name, or -1 when unavailable. */
s32 FUN_004f9a20(BtlBonusUnit *unit)
{
    BtlNameBonus *entry;
    s32 value;

    reinterpret_cast<s32>(btlGetMainState());
    if (btlScriptUnitHasFlags() != 0) {
        return -1;
    }
    value = 0;
    entry = btlFindNameBonus(unit);
    if (entry != NULL) {
        value = btlGetMaxSlotMetric(unit) + entry->bonus;
    }
    if (value == 0) {
        value = btlGetMaxSlotMetric(unit);
    }
    return value;
}

} /* extern "C" */
