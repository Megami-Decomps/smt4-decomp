/* NON_MATCHING: argument registers r6/r7 swapped and the copy store is scheduled before the header address add. */
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

static __inline void variantAssignPlain(void *header, u32 value)
{
    variantSetPlain(header, &value);
}

/* Looks the slot up through `owner`, stores the item's value into it, copies the value to `out` and advances the cursor; 0 on success, 2 when the slot is missing. */
u32 FUN_00436414(Cursor *cursor, u32 *out, u32 *item, u8 **owner)
{
    Slot *slot;

    FUN_00515618(&slot, *owner + 8);
    if (slot == NULL) {
        return 2;
    }
    variantAssignPlain(slot->header, *item);
    *out = *(u32 *)owner;
    cursor->record = cursor->record->next;
    return 0;
}

} /* extern "C" */
