/* NON_MATCHING: the two parameter copies at entry are emitted in the opposite order (r5 first in retail). */
#include "common.h"

extern "C" {

/* 4-byte slot whose third byte holds flags. */
typedef struct {
    u8 unk0;
    u8 unk1;
    u8 flags;       /* bit 1: toggled by the caller */
    u8 unk3;
} Slot;

/* Table of slots starting at 0x200. */
typedef struct {
    u8 unk00[0x200];
    Slot slots[1];  /* 0x200 */
} SlotTable;

SlotTable *FUN_002adc88(void);

/* Stores `value` into bit 1 of the flags of slot `index`. */
void FUN_0028784c(int index, char value)
{
    Slot *slot = &FUN_002adc88()->slots[index];

    slot->flags = (slot->flags & ~2) | (value << 1);
}

} /* extern "C" */
