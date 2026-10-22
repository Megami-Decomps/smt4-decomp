/* NON_MATCHING: instructions identical to retail; the retail literal pool carries one extra unreferenced word ahead of the global address. */
#include "common.h"

extern "C" {

typedef struct Manager {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ u8 list[4];
} Manager;

extern Manager *g_aocMain;

int asdMemFreeNonNull(u32 *slot);
int FUN_002ba8f4(void *list);

/* Stores `value` in `slot`, then notifies the manager's list and runs asdMemFreeNonNull on the slot. */
void FUN_0038e268(u32 *slot, u32 value)
{
    *slot = value;
    FUN_002ba8f4(g_aocMain->list);
    asdMemFreeNonNull(slot);
}

} /* extern "C" */
