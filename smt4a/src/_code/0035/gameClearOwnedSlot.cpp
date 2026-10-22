#include "common.h"

extern "C" {

/* Slot table entry: four halfwords, the first is the owner id. */
typedef struct {
    u16 id;     /* 0x00 */
    u16 unk02;  /* 0x02 */
    u16 unk04;  /* 0x04 */
    u16 unk06;  /* 0x06 */
} Slot;

/* Object whose id sits at 0x62. */
typedef struct {
    u8 unk00[0x62];
    u16 id;     /* 0x62 */
} Owner;

Slot *FUN_002613f0(int index);

/* Clears the first of the 24 slots owned by `owner`. */
void gameClearOwnedSlot(Owner *owner)
{
    int i = 0;
    u16 id = owner->id;

    do {
        if (FUN_002613f0(i)->id == id) {
            Slot *slot = FUN_002613f0(i);

            slot->id = 0;
            slot->unk02 = 0;
            slot->unk04 = 0;
            slot->unk06 = 0;
            return;
        }
        i++;
    } while (i < 24);
}

} /* extern "C" */
