#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x000 */ u8 unk000[0x5E6];
    /* 0x5E6 */ u16 id;
} Record;

typedef struct Global57f0c4 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Record *record;
} Global57f0c4;
extern Global57f0c4 g_buttonHelp;

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u8 flag;
} Entry;

void FUN_00183318(s32 value);
void FUN_00183e58(void);
Entry *dataTableGetEntry0e(u32 id);

/* Compares the entries for the record's id and for `id`: when the first has its flag clear and the second set, runs FUN_00183318(1); otherwise FUN_00183e58. Does nothing if either entry is missing. */
void FUN_00168980(u32 id)
{
    Entry *current;
    Entry *other;

    current = dataTableGetEntry0e(g_buttonHelp.record->id);
    other = dataTableGetEntry0e(id);
    if (current == NULL || other == NULL) {
        return;
    }
    if (current->flag == 0 && other->flag != 0) {
        FUN_00183318(1);
        return;
    }
    FUN_00183e58();
}

} /* extern "C" */
