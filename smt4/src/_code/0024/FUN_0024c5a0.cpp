#include "common.h"
#include "gamedata/DataTable40.h"

extern "C" {

/* A looked-up record: only its kind byte is used here. */
struct KindRecord {
    /* 0x00 */ u8 unk00[0x23];
    /* 0x23 */ u8 kind;
};


/* Maps an entry's kind to a second category index (99 when there is no entry). */
u32 FUN_0024c5a0(u32 id)
{
    if (id == 0) {
        return 99;
    }
    KindRecord *record = reinterpret_cast<KindRecord *>(dataTable40FindById(id));
    u32 category = 0;
    switch (record->kind) {
    case 4:
        category = 1;
        break;
    case 0:
    case 1:
    case 2:
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
    case 3:
        break;
    }
    return category;
}

} /* extern "C" */
