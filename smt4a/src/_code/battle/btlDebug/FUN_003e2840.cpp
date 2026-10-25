/* NON_MATCHING: the two position-table sets are loaded into stack temporaries by retail (sign-extended halfwords stored before the calls) and the comparator/pool loads schedule differently; the placement logic is the same. */
#include "common.h"

extern "C" {

/* One combatant entry of the battle state (0x1D0 bytes); only the fields read here. */
typedef struct ReflectEntry {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 flags;           /* 1 and 2: eligible, 0x10: second layout */
    /* 0x54 */ u8 unk54[4];
    /* 0x58 */ u32 pending;         /* bit 3: waiting for a reflect effect */
    /* 0x5C */ u8 unk5c[4];
    /* 0x60 */ u16 state;           /* bit 11: the effect was already placed */
    /* 0x62 */ u8 unk62[8];
    /* 0x6A */ s16 id;
    /* 0x6C */ u8 unk6c[0x164];
} ReflectEntry;

/* The battle state's entry array pointer. */
typedef struct ReflectBattle {
    /* 0x0000 */ u8 unk0000[0x1ED4];
    /* 0x1ED4 */ ReflectEntry *entries;
} ReflectBattle;

typedef struct ReflectLookup {
    u16 unk00;
    u16 key;
} ReflectLookup;

extern const s32 DAT_0057a634[7];

s32 qsort(void *base, s32 count, s32 size, s32 (*compare)(const void *, const void *));
s32 FUN_00221a94(const void *a, const void *b);
ReflectLookup *FUN_001568f8(ReflectBattle *battle, s32 id);
s32 pairedEntryTableContains(ReflectBattle *battle, u16 key);
void FUN_004cae0c(void *context, void *state, s32 pending, u32 target);
void FUN_004fd204(s32 position, u32 actor, ReflectEntry *entry, s32 alpha, s32 size, s32 arg);
void FUN_004fdcd8(s32 position, u32 actor, s32 a, s32 id, s32 b, s32 c, s32 d, s32 e);
void reflectActionSetScalarPayload(s32 position, u32 actor, u32 kind, s32 id, s32 id2, s32 arg);

/* Places a reflect effect for each eligible combatant waiting for one: collects and sorts the
 * entries, then lays them out along the table's spacing, marking each as placed. */
void FUN_003e2840(u32 actor, ReflectBattle *battle, s32 mode)
{
    ReflectEntry *waiting[50];
    s32 count = 0;

    for (s32 i = 4; i < 54; i++) {
        ReflectEntry *entry = &battle->entries[i];

        if ((entry->flags & 1) != 0 && (entry->flags & 2) != 0 && (entry->pending & 8) != 0) {
            waiting[count++] = entry;
        }
    }
    qsort(waiting, count, 4, FUN_00221a94);

    s16 placed = 0;
    s16 shown = 0;
    s32 yOffset = mode == 3 ? 12 : 0;

    for (s32 i = 0; i < count; i++) {
        ReflectEntry *entry = waiting[i];

        if ((entry->flags & 1) == 0 || (entry->flags & 2) == 0 || (entry->pending & 8) == 0) {
            continue;
        }
        entry->pending &= ~8;
        if ((entry->state & 0x800) != 0) {
            continue;
        }
        if (pairedEntryTableContains(battle, FUN_001568f8(battle, entry->id)->key) != 0) {
            continue;
        }
        entry->state |= 0x800;
        s16 spacing;
        s16 x;
        s16 size;

        if ((entry->flags & 0x10) != 0) {
            spacing = (s16)DAT_0057a634[3];
            x = (s16)DAT_0057a634[4];
            size = (s16)DAT_0057a634[5];
        } else {
            spacing = (s16)DAT_0057a634[0];
            x = (s16)DAT_0057a634[1];
            size = (s16)DAT_0057a634[2];
        }
        s32 position = placed * spacing + (s16)DAT_0057a634[6];

        FUN_004cae0c(battle, entry, 0, 0);
        FUN_004fd204(x + yOffset + position, actor, entry, 255, size, 0);
        FUN_004fdcd8(position, actor, 0, entry->id, 7, 0, 14, 0);
        if (mode != 4 || shown < 3) {
            reflectActionSetScalarPayload(position, actor, 0x1000218, entry->id, entry->id, 14);
        }
        placed++;
        shown++;
    }
}

}
