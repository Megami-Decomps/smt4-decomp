#include "common.h"
struct OwnedRow { void *first; void *second; u8 unk08[4]; u8 active; u8 selected; u8 unk0E[2]; };
struct RowOwner { u8 unk000[1092]; s32 count; u8 unk448[4]; OwnedRow *rows; };
extern "C" {
void asdMemFree(void *block);
void asdOperatorDeleteB(void *block);
/* Releases both allocations in each row, then the row array itself. */
void FUN_00471890(RowOwner *owner) {
    for (s32 i = 0; i < owner->count; ++i) {
        if (owner->rows[i].second != NULL) {
            asdMemFree(owner->rows[i].second);
            owner->rows[i].second = NULL;
        }
        if (owner->rows[i].first != NULL) {
            asdMemFree(owner->rows[i].first);
            owner->rows[i].first = NULL;
        }
        owner->rows[i].active = 0;
        owner->rows[i].selected = 0;
    }
    if (owner->rows != NULL) {
        asdOperatorDeleteB(owner->rows);
        owner->rows = NULL;
    }
    owner->count = 0;
}
}
