#include "common.h"

extern "C" {

/* Sub-object embedded in each party entry. */
typedef struct {
    u8 unk00[0x62];
    u16 unk62;          /* 0x62 */
} PartySub;

/* One 300-byte party entry. */
typedef struct {
    u8 unk00[0x68];
    PartySub sub;       /* 0x68 */
    u8 unk_end[300 - 0x68 - sizeof(PartySub)];
} PartyEntry;

/* Party block: an array of PartyEntry from offset 0, the live entry count at 0x1ca3. */
typedef struct {
    u8 unk00[0x1ca3];
    u8 count;           /* 0x1ca3 */
} PartyBlock;

/* Global game state: party block pointer at 0xc and a checked object at 0x14. */
typedef struct {
    u8 unk00[0xc];
    PartyBlock *party;  /* 0x0c */
    u8 unk10[4];
    void *unk14;        /* 0x14 */
} GameState;

extern GameState g_btlMain;

int FUN_004bd340(void *object, int arg);

/* Returns 1 when the object at 0x14 or some live party entry still fails the FUN_004bd340 check. */
u32 FUN_003ecd94(u8 *owner)
{
    int i;

    if (*(int *)(owner + 300) == 0) {
        return 0;
    }
    if (g_btlMain.party == NULL) {
        return 0;
    }
    if (g_btlMain.unk14 != NULL && FUN_004bd340(g_btlMain.unk14, 1) == 0) {
        return 1;
    }
    for (i = 0; i < g_btlMain.party->count; i++) {
        PartyEntry *entry = &((PartyEntry *)g_btlMain.party)[i];
        PartySub *sub = &entry->sub;

        if (sub != NULL && sub->unk62 != 0 && FUN_004bd340(sub, 1) == 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
