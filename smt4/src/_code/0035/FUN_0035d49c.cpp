#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ struct Record *next;
    /* 0x8 */ u8 type;
} Record;

typedef struct Cursor {
    /* 0x00 */ Record *record;
    /* 0x04 */ u8 unk04[0x14];
    /* 0x18 */ s32 depth;
} Cursor;

s32 FUN_0035c544(Cursor *cursor, u32 id, u32 *value);

static s32 cursorLookup(Cursor *cursor, u32 id, u32 value)
{
    return FUN_0035c544(cursor, id, &value);
}

/* Advances the cursor, retries the lookup with a copy of the value and steps back over a newline record when it succeeded. */
s32 FUN_0035d49c(Cursor *cursor, u32 id, u32 *value)
{
    s32 result;

    cursor->record = cursor->record->next;
    cursor->depth++;
    result = cursorLookup(cursor, id, *value);
    if (result != 0) {
        return result;
    }
    if (cursor->record->type != 10) {
        return 3;
    }
    cursor->depth--;
    cursor->record = cursor->record->next;
    return 0;
}

} /* extern "C" */
