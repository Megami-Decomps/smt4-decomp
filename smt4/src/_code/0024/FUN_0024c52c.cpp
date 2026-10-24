#include "common.h"

extern "C" {

/* A looked-up record: only its kind byte is used here. */
struct KindRecord {
    /* 0x00 */ u8 unk00[0x23];
    /* 0x23 */ u8 kind;
};

KindRecord *dataTable40FindById(void *id);

/* Maps an entry's kind to a category index (99 when there is no entry). */
u32 FUN_0024c52c(void *id)
{
    if (id == NULL) {
        return 99;
    }
    KindRecord *record = dataTable40FindById(id);
    u32 category = 0;
    switch (record->kind) {
    case 0:
    case 1:
    case 2:
        break;
    case 3:
        category = 1;
        break;
    case 4:
        category = 2;
        break;
    case 7:
    case 8:
    case 9:
        category = 3;
        break;
    case 5:
    case 6:
    case 10:
        category = 4;
        break;
    }
    return category;
}

} /* extern "C" */
