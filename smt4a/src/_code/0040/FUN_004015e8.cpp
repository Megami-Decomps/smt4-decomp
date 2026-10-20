#include "common.h"

extern "C" {

/* Link to a record whose word at +4 is checked by FUN_004ffba8. */
typedef struct {
    u8 unk00[4];
    u32 key;            /* 0x04 */
} Record;

typedef struct {
    u8 unk00[0x1c];
    Record *record;     /* 0x1c */
} Owner;

int FUN_004ffba8(u32 key);

/* True when the owner has no record, or the record's key passes FUN_004ffba8. */
u32 FUN_004015e8(Owner *owner)
{
    if (owner->record == NULL) {
        return 1;
    }
    if (FUN_004ffba8(owner->record->key) == 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
