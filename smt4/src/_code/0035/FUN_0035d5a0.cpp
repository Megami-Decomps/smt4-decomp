/* NON_MATCHING: stack layout only: retail keeps the copied item pointer at sp+4, the item at sp+8 and the slot reference at sp+12; built puts the slot reference lowest */
#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ struct Record *next;
    /* 0x08 */ u8 unk08[2];
    /* 0x0A */ u8 kind;
} Record;

typedef struct Cursor {
    /* 0x00 */ Record *record;
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ u32 arg;
} Cursor;

typedef struct Slot {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 header[8];
    /* 0x10 */ u8 body[1];
} Slot;

extern void FUN_00237cfc(void **item, Cursor *cursor);
typedef struct SlotRef {
    Slot *slot;
    u32 unk4;
} SlotRef;

extern void FUN_00237a94(SlotRef *ref, void *key);
extern void FUN_00237a7c(void *header, void **item, u32 arg);
extern s32 rangeSetAddPresetGroup(void *body, u8 kind);
extern s32 FUN_00237e04(void *body);

/* Resolves the cursor's item and its slot, fills in the slot and advances the cursor; 0 on success, 2 on failure. */
s32 FUN_0035d5a0(Cursor *cursor, void **result, void **owner)
{
    SlotRef ref;
    void *item;
    void *copy;

    FUN_00237cfc(&item, cursor);
    if (item != NULL) {
        FUN_00237a94(&ref, (u8 *)*owner + 8);
        if (ref.slot != NULL) {
            copy = item;
            FUN_00237a7c(ref.slot->header, &copy, cursor->arg);
            if (rangeSetAddPresetGroup(ref.slot->body, cursor->record->kind) != 0 && FUN_00237e04(ref.slot->body) != 0) {
                *result = item;
                cursor->record = cursor->record->next;
                return 0;
            }
        }
    }
    return 2;
}

} /* extern "C" */
