#include "common.h"

extern "C" {

#define SLOT_COUNT 100
#define SLOT_STATE_MASK 0x07

u8 *flagsBGetPtr(int slot);

/* Clears the low three state bits of each of the 100 slot flag bytes. */
void slotFlagsClearState(void)
{
    int slot = 0;

    do {
        u8 *flags = flagsBGetPtr(slot);

        slot++;
        *flags = *flags & ~SLOT_STATE_MASK;
    } while (slot < SLOT_COUNT);
}

} /* extern "C" */
