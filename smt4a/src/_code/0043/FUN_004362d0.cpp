/* NON_MATCHING: retail stores the temporary copy of *item after computing the header address (ldr r2 / mov r1,sp / add r0 / str r2); built stores it before */
#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ struct Record *next;
} Record;

typedef struct Cursor {
    /* 0x0 */ Record *record;
} Cursor;

typedef struct Slot {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ u8 header[1];
} Slot;

extern void FUN_00515618(Slot **slot, void *key);
extern void variantSetPlain(void *header, u32 *value);

/* Looks the slot up through `owner`, stores the item's value into it, copies the value to `out` and advances the cursor; 0 on success, 2 when the slot is missing. */
u32 FUN_004362d0(Cursor *cursor, u32 *out, u8 **owner, u32 *item)
{
    u32 copy;
    Slot *slot;

    FUN_00515618(&slot, *owner + 8);
    if (slot == NULL) {
        return 2;
    }
    copy = *item;
    variantSetPlain(slot->header, &copy);
    *out = *item;
    cursor->record = cursor->record->next;
    return 0;
}

} /* extern "C" */
