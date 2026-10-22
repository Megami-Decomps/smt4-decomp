#include "common.h"

extern "C" {

s32 btlGetMainState(void);
s32 libc_strcmp(const char *a, const char *b);
s32 FUN_00227668(void *unit);
s32 FUN_00293230(void);

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
    u8 unk0[0x1cfc];
    BtlNameBonusTable *bonusTable; /* 0x1cfc */
} BtlBonusUnit;

static BtlNameBonus *btlFindNameBonus(BtlBonusUnit *unit)
{
    s32 i;

    if (unit->bonusTable != NULL) {
        for (i = 0; i < 4; i++) {
            char *name = unit->bonusTable->entries[i].name;
            if (name != NULL && libc_strcmp(name, g_btlEffect.name) == 0) {
                return &unit->bonusTable->entries[i];
            }
        }
    }
    return NULL;
}

/* Returns the unit's base value plus the bonus listed for the current effect's name, or -1 when unavailable. */
s32 FUN_003dcad0(BtlBonusUnit *unit)
{
    BtlNameBonus *entry;
    s32 value;

    btlGetMainState();
    if (FUN_00293230() != 0) {
        return -1;
    }
    value = 0;
    entry = btlFindNameBonus(unit);
    if (entry != NULL) {
        value = FUN_00227668(unit) + entry->bonus;
    }
    if (value == 0) {
        value = FUN_00227668(unit);
    }
    return value;
}

} /* extern "C" */
