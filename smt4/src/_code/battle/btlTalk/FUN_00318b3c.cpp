/* NON_MATCHING: register choice in the final store only: retail adds the entry offset into r2 (the loaded g_btlTalk pointer), the build into r0. */
#include "common.h"

extern "C" {

typedef struct BtlTalk {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ s32 used[32];     /* per-entry marker: -1 while the entry is free */
} BtlTalk;

typedef struct TalkEntry {
    /* 0x00 */ u8 unk00[0x74];
    /* 0x74 */ s32 enabled;
    /* 0x78 */ s32 flag;        /* game flag that gates the entry, 0 for none */
} TalkEntry;                    /* 0x7C bytes */

extern BtlTalk *g_btlTalk; /* 0x439b58 */

extern u32 FUN_003c0868(BtlTalk *talk);
extern int dataTableGetCount(u32 table);
extern TalkEntry *dataTableGetEntries(u32 table);
extern int gameFlagIsSet(int flag);
extern int randNextInRange(u32 max);
extern int scrSetResult(void);
extern void __aeabi_memset4(void *dst, int size, int value);

/* Script command: picks a random enabled, flag-allowed talk entry that is still unused and marks it used. */
u32 FUN_00318b3c(void)
{
    s32 free[32];
    s32 candidates[32];
    u32 table = FUN_003c0868(g_btlTalk);
    int count = dataTableGetCount(table);
    TalkEntry *entries = dataTableGetEntries(table);
    int numCandidates = 0;
    int numFree;
    int i;

    __aeabi_memset4(candidates, 0x80, -1);
    for (i = 0; i < count; i++) {
        if (entries[i].enabled != 0) {
            if (entries[i].flag == 0 || gameFlagIsSet(entries[i].flag) != 0) {
                candidates[numCandidates] = i;
            }
            numCandidates++;
        }
    }
    numFree = 0;
    __aeabi_memset4(free, 0x80, -1);
    for (i = 0; i < 32; i++) {
        if (candidates[i] != -1 && g_btlTalk->used[candidates[i]] == -1) {
            free[numFree] = candidates[i];
            numFree++;
        }
    }
    if (numFree == 0) {
        numFree = 1;
    }
    int pick = free[randNextInRange((u16)(numFree - 1))];

    g_btlTalk->used[pick] = -1;
    scrSetResult();
    return 1;
}

} /* extern "C" */
