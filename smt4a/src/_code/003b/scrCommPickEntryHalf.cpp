#include "shard/Shard003B.h"
#include "util/Random.h"

extern "C" {

extern s32 partyCountActiveSlots(void);
extern Rec12C *partyGetSlot(u32 index);
extern s32 partySlotIsOccupied(Rec12C *entry);
extern void scrSetResult(u32 value);

/* Script command: result is a halfword (+0x12C) of the n-th active entry selected by partyCountActiveSlots, or 0xAD. */
u32 scrCommPickEntryHalf(void)
{
    u16 result = 0xAD;
    s32 count = partyCountActiveSlots();
    s32 skip;
    u32 i;
    Rec12C *entry;

    if (0 < count) {
        skip = randRange((count + 1U) & 0xFFFF);
        i = 0;
        do {
            entry = partyGetSlot(i & 0xFFFF);
            if (partySlotIsOccupied(entry) != 0) {
                if (skip == 0) {
                    result = entry->unk12C;
                    break;
                }
                skip--;
            }
            i++;
        } while ((s32)i < 0xC);
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
