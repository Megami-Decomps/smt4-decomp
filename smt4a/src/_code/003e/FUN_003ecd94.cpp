#include "battle/btlMain.h"
#include "code/Code003e.h"

extern "C" {

/* Sub-object embedded in each party entry. */

/* One 300-byte party entry. */

/* Party block: an array of BtlPartyEntryA from offset 0, the live entry count at 0x1ca3. */

/* Global game state: party block pointer at 0xc and a checked object at 0x14. */

extern BtlMainGlobalsA g_btlMain;

int bitsAt60Test(void *object, int arg);

/* Returns 1 when the object at 0x14 or some live party entry still fails the bitsAt60Test check. */
u32 FUN_003ecd94(u8 *owner)
{
    int i;

    if (*(int *)(owner + 300) == 0) {
        return 0;
    }
    if (g_btlMain.party == NULL) {
        return 0;
    }
    if (g_btlMain.partySubject != NULL && bitsAt60Test(g_btlMain.partySubject, 1) == 0) {
        return 1;
    }
    for (i = 0; i < g_btlMain.party->count; i++) {
        BtlPartyEntryA *entry = &((BtlPartyEntryA *)g_btlMain.party)[i];
        BtlPartySubA *sub = &entry->sub;

        if (sub != NULL && sub->unk62 != 0 && bitsAt60Test(sub, 1) == 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
