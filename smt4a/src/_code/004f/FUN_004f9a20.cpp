/* NON_MATCHING: retail keeps `value` in r6 from the start, loads the table through &owner->table, and ends with a plain call instead of the tail call. */
#include "common.h"

/* A named bonus entry: up to four follow the table header. */
struct NamedBonus {
    /* 0x00 */ char name[0x10];
    /* 0x10 */ s16 bonus;
    /* 0x12 */ u8 unk12[4];
};

struct NamedBonusTable {
    /* 0x00 */ u8 unk00[0xB0];
    /* 0xB0 */ NamedBonus entries[4];
};

struct NamedBonusOwner {
    /* 0x0000 */ u8 unk0000[0x1F54];
    /* 0x1F54 */ NamedBonusTable *table;
};

struct BtlEffectState {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ const char *name;
};

extern "C" {

extern BtlEffectState g_btlEffect;

void *btlGetMainState(void);
s32 btlScriptUnitHasFlags(void);
s32 libc_strcmp(const char *a, const char *b);
s32 FUN_004f59b0(NamedBonusOwner *owner);

/* Returns the table entry named like the current battle effect, or NULL. */
static __inline NamedBonus *namedBonusFind(NamedBonusOwner *owner)
{
    s32 i;

    for (i = 0; i < 4; i++) {
        const char *name = owner->table->entries[i].name;
        if (name != NULL && libc_strcmp(name, g_btlEffect.name) == 0) {
            return &owner->table->entries[i];
        }
    }
    return NULL;
}

/* Returns the owner's base value plus the bonus named by the current battle effect, or -1 while
 * the script unit has its blocking flags. */
s32 FUN_004f9a20(NamedBonusOwner *owner)
{
    s32 value = 0;

    btlGetMainState();
    if (btlScriptUnitHasFlags() != 0) {
        return -1;
    }
    if (owner->table != NULL) {
        NamedBonus *entry = namedBonusFind(owner);
        if (entry == NULL) {
            return FUN_004f59b0(owner);
        }
        value = FUN_004f59b0(owner) + entry->bonus;
    }
    if (value == 0) {
        value = FUN_004f59b0(owner);
    }
    return value;
}

} /* extern "C" */
