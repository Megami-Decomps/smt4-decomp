#include "common.h"

extern "C" {

/* Data table 04 record: only the bitfield word this unit reads is known. */
typedef struct DataTable04Record {
    u8 unk00[0x28];
    u32 unk28_0 : 5;
    u32 category : 4; /* 0x28 bits 5..8 */
    u32 unk28_9 : 23;
} DataTable04Record;

DataTable04Record *dataTable04FindById(u32 id);

/* Maps the category of table-04 record `id` to its display order (99 when there is no record). */
u32 dataTable04GetCategoryOrder(u32 id)
{
    DataTable04Record *record;

    if (id == 0) {
        return 99;
    }
    record = dataTable04FindById(id);
    switch (record->category) {
    case 8:
        return 0;
    case 3:
        return 1;
    case 7:
        return 2;
    case 2:
        return 3;
    case 5:
        return 4;
    case 1:
        return 5;
    case 6:
        return 6;
    case 0:
        return 7;
    case 4:
        return 8;
    default:
        return 9;
    }
}

} /* extern "C" */
