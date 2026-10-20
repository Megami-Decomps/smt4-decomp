/* NON_MATCHING: instructions identical to retail; the retail literal pool carries one extra unreferenced word ahead of the global address. */
#include "common.h"

extern "C" {

typedef struct Manager {
    /* 0x00 */ u8 unk00[0x88];
    /* 0x88 */ u8 list[4];
} Manager;

extern Manager *g_aocMain;

int FUN_002e3328(u32 *slot);
int FUN_001b3428(void *list);

/* Stores `value` in `slot`, then notifies the manager's list and runs FUN_002e3328 on the slot. */
void FUN_00475d18(u32 *slot, u32 value)
{
    *slot = value;
    FUN_001b3428(g_aocMain->list);
    FUN_002e3328(slot);
}

} /* extern "C" */
