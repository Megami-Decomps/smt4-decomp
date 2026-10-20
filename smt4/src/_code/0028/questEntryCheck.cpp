/* NON_MATCHING: register allocation only: retail copies the id into r4 and zero-extends it once into r7 (uxth) for both searches, and loads the entry level before the player level; the build keeps the id in r8 */
#include "common.h"

extern "C" {

typedef struct Entry002829d4 {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[4];
    /* 0x26 */ u16 need;        /* amount to compare with FUN_00295cec */
    /* 0x28 */ u8 unk28[3];
    /* 0x2b */ u8 minLevel;
    /* 0x2c */ u16 flagsSet[3]; /* flags that must be set (gameFlagIsSet) */
    /* 0x32 */ u16 flagsBit[3]; /* flag-block bits that must be set */
    /* 0x38 */ u8 unk38[8];
} Entry002829d4;

typedef struct PlayerData002829d4 {
    /* 0x00 */ u8 unk00[0x76];
    /* 0x76 */ u8 level;
} PlayerData002829d4;

typedef s32 Compare002829d4(const Entry002829d4 *a, const Entry002829d4 *b);

void *dataTableGet(s32 table, s32 slot);
Entry002829d4 *dataTableGetEntries(void *table);
u32 dataTableGetCount(void *table);
Entry002829d4 *libc_bsearch(const Entry002829d4 *key, const Entry002829d4 *base, u32 count, u32 size, Compare002829d4 *compare);
PlayerData002829d4 *gameGetPlayerData(void);
s32 gameFlagIsSet(u32 flag);
u8 *gameDataGetFlagBits(void);
u32 FUN_00295cec(void);

/* The id comparator at 0x145c78 (unnamed; retail embeds its address). */
#define ID_COMPARE_002829D4 ((Compare002829d4 *)0x145c78)

/* Entry check for `id`: 2 when it is missing, the player is below its level or a required flag is unset; otherwise whether its need exceeds FUN_00295cec. */
u8 questEntryCheck(u16 id)
{
    void *table = dataTableGet(11, 0);
    Entry002829d4 *entry;
    Entry002829d4 *entries;
    u32 count;
    Entry002829d4 key;
    u32 need = 0;
    s32 i;

    if (table == NULL) {
        return 2;
    }
    entries = dataTableGetEntries(table);
    count = dataTableGetCount(table);
    key.id = id;
    entry = libc_bsearch(&key, entries, count, sizeof(Entry002829d4), ID_COMPARE_002829D4);
    if (entry == NULL) {
        return 2;
    }
    if (entry->minLevel > gameGetPlayerData()->level) {
        return 2;
    }
    for (i = 0; i < 3; i++) {
        if (entry->flagsSet[i] != 0 && gameFlagIsSet(entry->flagsSet[i]) == 0) {
            return 2;
        }
    }
    for (i = 0; i < 3; i++) {
        u16 flag = entry->flagsBit[i];

        if (flag != 0 && (gameDataGetFlagBits()[flag >> 3] & (1 << (flag & 7))) == 0) {
            return 2;
        }
    }
    table = dataTableGet(11, 0);
    if (table != NULL) {
        entries = dataTableGetEntries(table);
        count = dataTableGetCount(table);
        key.id = id;
        entry = libc_bsearch(&key, entries, count, sizeof(Entry002829d4), ID_COMPARE_002829D4);
        if (entry != NULL) {
            need = entry->need;
        }
    }
    return FUN_00295cec() < need;
}

} /* extern "C" */
