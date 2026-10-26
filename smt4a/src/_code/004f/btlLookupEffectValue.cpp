#include "battle/BtlMainAccess.h"
#include "common.h"

#define BTL_NAMED_VALUE_COUNT 4

/* A named value: the name compared against the current effect name and the value it yields. */
struct BtlNamedValue {
    /* 0x00 */ char name[16];
    /* 0x10 */ s16 value;
    /* 0x12 */ u8 unk12[4];
};

struct BtlNamedValueBlock {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ BtlNamedValue entries[BTL_NAMED_VALUE_COUNT];
};

/* The unit the lookup is made for: its named value block at 0x1F54. */
struct BtlNamedValueOwner {
    /* 0x0000 */ u8 unk0000[0x1F54];
    /* 0x1F54 */ BtlNamedValueBlock *namedValues;
};

extern "C" {

extern const char *g_btlEffect; /* name of the effect being played */

s32 btlScriptUnitHasFlags(void *state);
s32 FUN_004f59b0(BtlNamedValueOwner *owner);
u32 libc_strlen(const char *text);
s32 libc_strncmp(const char *a, const char *b, u32 size);

/* Returns the owner's entry named after the current effect, or NULL. */
static BtlNamedValue *btlFindEffectValue(BtlNamedValueOwner *owner)
{
    s32 i;

    if (owner->namedValues != NULL) {
        for (i = 0; i < BTL_NAMED_VALUE_COUNT; i++) {
            BtlNamedValue *entry = &owner->namedValues->entries[i];
            if (entry != NULL &&
                libc_strncmp(entry->name, g_btlEffect, libc_strlen(g_btlEffect)) == 0) {
                return &owner->namedValues->entries[i];
            }
        }
    }
    return NULL;
}

/* Returns -1 while btlScriptUnitHasFlags holds the battle; otherwise the owner's value for the current
 * effect, falling back to FUN_004f59b0 when it has none. */
s32 btlLookupEffectValue(BtlNamedValueOwner *owner)
{
    BtlNamedValue *entry;
    s32 value;

    if (btlScriptUnitHasFlags(static_cast<void *>(btlGetMainState())) != 0) {
        return -1;
    }
    value = 0;
    entry = btlFindEffectValue(owner);
    if (entry != NULL) {
        value = entry->value;
    }
    if (value == 0) {
        value = FUN_004f59b0(owner);
    }
    return value;
}

} /* extern "C" */
