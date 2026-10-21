/* NON_MATCHING: stack layout and r5/r6 assignment: retail keeps the by-reference temporary at sp+4, item at sp+8 and the slot reference at sp+12; built puts item lowest and the temporary highest */
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

extern void FUN_004352b0(Record **item, Cursor *cursor);
typedef struct SlotRef {
    Slot *slot;
} SlotRef;

extern void FUN_00515618(SlotRef *ref, void *key);
extern void variantSetWordB(void *header, void *const &item, u32 arg);
extern s32 rangeSetAddPresetGroup(void *body, u8 kind);
extern s32 FUN_00437e98(void *body);

/* Resolves the cursor's item and its slot, fills in the slot and advances the cursor; 0 on success, 2 on failure. */
s32 FUN_004369c8(Cursor *cursor, Record **result, void **owner)
{
    Record *item;
    SlotRef ref;

    FUN_004352b0(&item, cursor);
    if (item != NULL) {
        FUN_00515618(&ref, (u8 *)*owner + 8);
        if (ref.slot != NULL) {
            variantSetWordB(ref.slot->header, item, cursor->arg);
            if (rangeSetAddPresetGroup(ref.slot->body, cursor->record->kind) != 0 && FUN_00437e98(ref.slot->body) != 0) {
                *result = item;
                cursor->record = cursor->record->next;
                return 0;
            }
        }
    }
    return 2;
}

} /* extern "C" */
